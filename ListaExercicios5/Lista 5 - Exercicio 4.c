#include <stdio.h>

int main() {
    int passos[7], total = 0;

    // a
    for (int i = 0; i < 7; i++) {
        printf("Digite quantos passos você deu no dia:");
        scanf("%d", &passos[i]);
        total += passos[i];
    }

    // b
    printf("O total de passos foi: %d\n", total);

    // c
    printf("A média diária de passos foi: %.2f\n", total / 7.0);

    // d
    for (int i = 0; i < 7; i++) {
        if (passos[i] >= 10000)
            printf("A meta foi atingida no dia %d\n", i + 1);
    }

    return 0;
}