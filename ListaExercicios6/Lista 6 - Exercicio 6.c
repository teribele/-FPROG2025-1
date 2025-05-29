#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    float notas[10][3];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        notas[i][0] = (rand() % 101) / 10.0; // Grau A
        notas[i][1] = (rand() % 101) / 10.0; // Grau B
        notas[i][2] = notas[i][0] * (1.0 / 3.0) + notas[i][1] * (2.0 / 3.0); // Média ponderada
    }

    printf("Grau A | Grau B | Grau Final\n");
    for (int i = 0; i < 10; i++) {
        printf("%6.1f | %6.1f | %10.2f\n", notas[i][0], notas[i][1], notas[i][2]);
    }

    return 0;
}