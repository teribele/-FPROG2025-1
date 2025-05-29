#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int v[TAM], vInverso[TAM], vPares[TAM], vImpares[TAM];
    int numPares = 0, numImpares = 0;
    int soma = 0, produto = 1;
    int maior, menor;
    int encontrou50 = 0, ocorrencias50 = 0;

    srand(time(NULL));
    for (int i = 0; i < TAM; i++) {
        v[i] = rand() % 81 + 10; // a
    }

    // a
    for (int i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // b
    for (int i = 0; i < TAM; i++) {
        if (v[i] == 50) {
            encontrou50 = 1;
            ocorrencias50++;
        }
    }
    printf("%s\n", encontrou50 >= 1 ? "Encontrou" : "Não encontrou");

    // c
    printf("O numero 50 ocorre %d vezes\n", ocorrencias50);

    // d
    soma = 0;
    for (int i = 0; i < TAM; i++) soma += v[i];
    printf("A média é: %.2f\n", soma / (float)TAM);

    // e
    maior = menor = v[0];
    for (int i = 1; i < TAM; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("O maior valor é : %d\nO menor valor é: %d\n", maior, menor);

    // f
    soma = 0;
    produto = 1;
    for (int i = 0; i < TAM; i++) {
        soma += v[i];
        produto *= v[i];
    }
    printf("Soma = %d\nProduto = %d\n", soma, produto);

    // g
    for (int i = TAM - 1; i >= 0; i--) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // h
    for (int i = 0; i < TAM; i++) {
        vInverso[i] = v[TAM - 1 - i];
    }

    // i
    for (int i = 0; i < TAM; i++) {
        if (v[i] % 2 == 0){
            vPares[numPares] = v[i];
            numPares++;}
        else{
            vImpares[numImpares] = v[i];
            numImpares++;}
    }

    printf("Pares = ");
    for (int i = 0; i < numPares; i++) printf("%d ", vPares[i]);
    printf("\nImpares = ");
    for (int i = 0; i < numImpares; i++) printf("%d ", vImpares[i]);
    printf("\n");

    return 0;
}