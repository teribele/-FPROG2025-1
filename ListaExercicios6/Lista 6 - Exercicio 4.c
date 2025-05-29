#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][6];
    srand(time(NULL));

    // Preenchendo matriz com valores entre -10 e 10
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 21 - 10;
        }
    }

    //a
    int somaLinha2 = 0;
    for (int j = 0; j < 6; j++) {
        somaLinha2 += matriz[1][j];
    }
    printf("//a\nSoma dos elementos da segunda linha: %d\n", somaLinha2);

    //b
    int somaColuna5 = 0;
    for (int i = 0; i < 4; i++) {
        somaColuna5 += matriz[i][4];
    }
    printf("//b\nSoma dos elementos da quinta coluna: %d\n", somaColuna5);

    //c
    int somaMultiplicacao = 0;
    for (int j = 0; j < 6; j++) {
        somaMultiplicacao += matriz[0][j] * matriz[3][j];
    }
    printf("//c\nSoma da multiplicação da primeira com a quarta linha: %d\n", somaMultiplicacao);

    //d
    int somaColunasPares = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j += 2) {
            somaColunasPares += matriz[i][j];
        }
    }
    printf("//d\nSoma dos elementos das colunas com índice par: %d\n", somaColunasPares);

    //e
    int somaLinhasImpares = 0;
    for (int i = 1; i < 4; i += 2) {
        for (int j = 0; j < 6; j++) {
            somaLinhasImpares += matriz[i][j];
        }
    }
    printf("//e\nSoma dos elementos das linhas com índice ímpar: %d\n", somaLinhasImpares);

    return 0;
}