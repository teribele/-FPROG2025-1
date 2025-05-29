#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pontos[4] = {0};
    srand(time(NULL));

    // a, b, c, d
    for (int rodada = 1; rodada <= 5; rodada++) {
        for (int j = 0; j < 4; j++) {
            int score = rand() % 101;
            pontos[j] += score;
            if (score > 80)
                printf("\nRodada de destaque do jogador %d\n", j + 1);
        }
    }

    // e
    for (int i = 0; i < 4; i++) {
        printf("\nPontuação do jogador %d = %d\n", i + 1, pontos[i]);
    }

    // f
    int maior = pontos[0], vencedor = 0, empate = 0;
    for (int i = 1; i < 4; i++) {
        if (pontos[i] > maior) {
            maior = pontos[i];
            vencedor = i;
            empate = 0;
        } else if (pontos[i] == maior) {
            empate = 1;
        }
    }

    if (empate > 0)
        printf("\nEmpate\n");
    else
        printf("\nO vencedor é o jogador: %d\n", vencedor + 1);

    return 0;
}