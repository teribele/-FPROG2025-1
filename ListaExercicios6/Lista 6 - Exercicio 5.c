#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][6];
    srand(time(NULL));

    int maior, menor;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 21 - 10;
            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
            } else {
                if (matriz[i][j] > maior) maior = matriz[i][j];
                if (matriz[i][j] < menor) menor = matriz[i][j];
            }
        }
    }

    printf("Maior valor da matriz: %d\n", maior);
    printf("Menor valor da matriz: %d\n", menor);

    return 0;
}