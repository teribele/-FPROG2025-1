#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, tentativa, i;
    srand(time(NULL));
    numeroSecreto = rand() % 10 + 1;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d: Adivinhe o número de 1 a 10: ", i);
        scanf("%d", &tentativa);

        if (tentativa == numeroSecreto) {
            printf("Parabéns! Você acertou!
");
            return 0;
        } else if (tentativa < numeroSecreto) {
            printf("O número secreto é maior.
");
        } else {
            printf("O número secreto é menor.
");
        }
    }

    printf("Você perdeu! O número era %d.
", numeroSecreto);
    return 0;
}