#include <stdio.h>

int main() {
    float GA, GB, GC, media;
    char escolhaNota;

    printf("Nota Grau A (0 a 10):\n");
    scanf("%f", &GA);
    printf("Nota Grau B (0 a 10):\n");
    scanf("%f", &GB);

    media = (GA * (1.0 / 3)) + (GB * (2.0 / 3));
    printf("Media: %.2f\n", media);

    if (media >= 6.0) {
        printf("Aprovado por media\n");
    } else {
        printf("Recuperacao. Deseja substituir o grau 'a' ou 'b'?\n");
        scanf(" %c", &escolhaNota);
        printf("Digite a nota do Grau C (0 a 10):\n");
        scanf("%f", &GC);

        if (escolhaNota == 'a') {
            media = (GC * (1.0 / 3)) + (GB * (2.0 / 3));
        } else {
            media = (GA * (1.0 / 3)) + (GC * (2.0 / 3));
        }

        printf("Nova media: %.2f\n", media);
        if (media >= 6.0)
            printf("Aprovado\n");
        else
            printf("Reprovado\n");
    }

    return 0;
}