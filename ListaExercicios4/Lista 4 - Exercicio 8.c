#include <stdio.h>

int main() {
    int n, i;
    char repetir;

    do {
        printf("Entre com um número: ");
        scanf("%d", &n);

        long long fatorial = 1;
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }

        printf("O fatorial de %d é %lld\n", n, fatorial);
        printf("Calcular outro número (s/n)? ");
        scanf(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');

    return 0;
}