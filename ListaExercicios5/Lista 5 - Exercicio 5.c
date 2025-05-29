#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int consumo[30], total = 0, maiorDia = 0, menorDia = 0;
    srand(time(NULL));

    // a
    for (int i = 0; i < 30; i++) {
        consumo[i] = rand() % 401 + 100;
        total += consumo[i];
    }

    // b
    printf("Total de consumo no mês = %d\n", total);

    // c
    printf("Média de consumo diário = %.2f\n", total / 30.0);

    // d
    for (int i = 1; i < 30; i++) {
        if (consumo[i] > consumo[maiorDia]) maiorDia = i;
        if (consumo[i] < consumo[menorDia]) menorDia = i;
    }
    printf("Maior dia = %d; Menor dia = %d;\n", maiorDia + 1, menorDia + 1);

    return 0;
}