#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int comum = 0, raro = 0, lendario = 0;
    int op;

    srand(time(NULL));

    do {
        printf("1 - Abrir uma caixa\n");
        printf("2 - Consultar itens\n");
        printf("0 - Sair\n");
        scanf("%d", &op);

        if (op == 1) {
            int sorteio = rand() % 100 + 1;
            if (sorteio <= 80) {
                comum++;
                printf("Você coletou 1 item comum!\n");
            } else if (sorteio <= 99) {
                raro++;
                printf("Você coletou 1 item raro!\n");
            } else {
                lendario++;
                printf("Você coletou 1 item lendário!\n");
            }
        } else if (op == 2) {
            printf("Itens comuns: %d\n", comum);
            printf("Itens raros: %d\n", raro);
            printf("Itens lendários: %d\n", lendario);
        }

    } while (op != 0);

    return 0;
}
