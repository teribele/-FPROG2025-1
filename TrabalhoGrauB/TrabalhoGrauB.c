#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef enum {
    Guerreiro,
    Mago,
    Caçador,
    Paladino,
    Bárbaro
} Classe;

typedef struct {
    Classe classe;
    float ataque;
    float defesa;
    float vida;
} Personagem;

Personagem times[2][5] = {
    {{Guerreiro, 20.0, 10.0, 100.0}, {Mago, 30.0, 5.0, 100.0}, {Caçador, 18.0 , 8.0, 100.0}, {Paladino, 15.0, 12.0, 100.0}, {Bárbaro, 25.0, 6.0, 100.0}},
    {{Guerreiro, 20.0, 10.0, 100.0}, {Mago, 30.0, 5.0, 100.0}, {Caçador, 18.0 , 8.0, 100.0}, {Paladino, 15.0, 12.0, 100.0}, {Bárbaro, 25.0, 6.0, 100.0}}
};

void imprimir_personagem(Personagem p) {
    const char* nomes[] = {"Guerreiro", "Mago", "Caçador", "Paladino", "Bárbaro"};
    const char* status = p.vida > 0 ? "VIVO" : "MORTO";
    printf("  %-9s | Vida: %6.1f | Status: %s\n", nomes[p.classe], p.vida, status);
}

int sortear_alvo(Personagem time[], int tamanho) {
    int vivos[5];
    int qnt_vivos = 0;

    for (int i = 0; i < tamanho; i++) {
        if (time[i].vida > 0) {
            vivos[qnt_vivos++] = i;
        }
    }

    if (qnt_vivos == 0) return -1;

    int alvo = rand() % qnt_vivos;
    return vivos[alvo];
}

int personagem_atacante(Personagem time[], int qnt_integrantes) {
    int quemataca = -1;
    float maior_razao = -1.0;
    for (int i = 0; i < qnt_integrantes; i++) {
        if (time[i].vida > 0 && time[i].ataque > 0) {
            float razao = time[i].vida / time[i].ataque;
            if (razao > maior_razao) {
                maior_razao = razao;
                quemataca = i;
            }
        }
    }
    return quemataca;
}

void tentar_regenerar(Personagem* p, float vida_anterior) {
    if (p->classe == Paladino && p->vida > 0 && rand() % 100 < 30) {
        float recuperada = (vida_anterior - p->vida) * 0.2;
        p->vida += recuperada;
        printf("Habilidade especial: Regeneração! Recuperou %.1f de vida.\n", recuperada);
    }
}

float calcular_dano(Personagem atacante, Personagem defensor) {
    float dano;
    int chance;
    int defesa_falhou = rand() % 100 < 20;
    float defesa;

    if (defesa_falhou) {
        defesa = 0;
    } else {
        defesa = defensor.defesa;
    }

    if (atacante.classe != Bárbaro && rand() % 100 < 20) {
        printf("Ataque errou!\n");
        return 0;
    }

    dano = atacante.ataque - defesa;
    if (dano < 0) {
        dano = 0;
    }

    chance = rand() % 100;

    switch (atacante.classe) {
        case Guerreiro:
            if (chance < 20) {
                dano = atacante.ataque * 2 - defesa;
                if (dano < 0) dano = 0;
                printf("Habilidade especial: Golpe Crítico!\n");
            }
            break;
        case Mago:
            if (chance < 25) {
                dano = atacante.ataque;
                printf("Habilidade especial: Bola de Fogo!\n");
            }
            break;
        case Caçador:
            if (chance < 15) {
                printf("Habilidade especial: Ataque Duplo!\n");
                dano += calcular_dano(atacante, defensor);
            }
            break;
        default:
            break;
    }

    printf("Dano causado: %.1f\n", dano);
    return dano;
}

bool time_vivo(Personagem time[], int n) {
    for (int i = 0; i < n; i++) {
        if (time[i].vida > 0) return true;
    }
    return false;
}

void imprimir_estado_times() {
    for (int t = 0; t < 2; t++) {
        printf("Time %d:\n", t + 1);
        for (int j = 0; j < 5; j++) {
            imprimir_personagem(times[t][j]);
        }
    }
}

int main() {
    srand(time(NULL));
    int rodada = 1;
    int turno = rand() % 2;

    while (time_vivo(times[0], 5) && time_vivo(times[1], 5)) {
        printf("\n>>> Rodada %d:\n", rodada);

        int quemataca = personagem_atacante(times[turno], 5);
        int alvo = sortear_alvo(times[1 - turno], 5);

        if (quemataca == -1 || alvo == -1) {
            printf("Nenhum ataque nesta rodada: algum time está sem membros vivos.\n");
            break;
        }

        printf("Time %d — ", turno + 1);
        imprimir_personagem(times[turno][quemataca]);
        printf("ataca ");
        imprimir_personagem(times[1 - turno][alvo]);

        float vida_anterior = times[1 - turno][alvo].vida;
        float dano = calcular_dano(times[turno][quemataca], times[1 - turno][alvo]);

        times[1 - turno][alvo].vida -= dano;
        if (times[1 - turno][alvo].vida < 0)
            times[1 - turno][alvo].vida = 0;

        tentar_regenerar(&times[1 - turno][alvo], vida_anterior);

        imprimir_estado_times();

        rodada++;
        turno = 1 - turno;
    }

    if (!time_vivo(times[0], 5) && !time_vivo(times[1], 5)) {
        printf("\nResultado: Empate!\n");
    } else if (time_vivo(times[0], 5)) {
        printf("\nResultado: Time 1 venceu!\n");
    } else {
        printf("\nResultado: Time 2 venceu!\n");
    }

    return 0;
}

