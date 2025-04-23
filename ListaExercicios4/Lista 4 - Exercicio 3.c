#include <stdio.h>

int main() {
    int numero, i;
    char repetir;

    do {
        printf("Entre com um número de 1 a 9: ");
        scanf("%d", &numero);

        if (numero >= 1 && numero <= 9) {
            for (i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else {
            printf("Número fora do intervalo.\n");
        }

        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}