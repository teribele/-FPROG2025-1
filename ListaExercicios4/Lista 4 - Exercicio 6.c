#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[5], i, menor, maior, soma = 0;
    float media;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        numeros[i] = rand() % 101;
        printf("Número %d: %d\n", i + 1, numeros[i]);
        soma += numeros[i];
    }

    menor = maior = numeros[0];
    for (i = 1; i < 5; i++) {
        if (numeros[i] < menor)
            menor = numeros[i];
        if (numeros[i] > maior)
            maior = numeros[i];
    }

    media = soma / 5.0;
    printf("Menor: %d\nMaior: %d\nMédia: %.2f\n", menor, maior, media);

    return 0;
}