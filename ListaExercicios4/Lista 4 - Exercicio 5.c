#include <stdio.h>

int main() {
    int x, i;
    float grauA, grauB, grauC, media, somaMedias = 0;
    char substitui;

    printf("Quantos alunos? ");
    scanf("%d", &x);

    for (i = 0; i < x; i++) {
        printf("Nota Grau A: ");
        scanf("%f", &grauA);
        printf("Nota Grau B: ");
        scanf("%f", &grauB);

        media = (grauA + grauB) / 2;
        if (media >= 6) {
            printf("APROVADO\n");
        } else {
            printf("Nota Grau C: ");
            scanf("%f", &grauC);
            printf("Substituir nota A ou B? ");
            scanf(" %c", &substitui);

            if (substitui == 'A' || substitui == 'a')
                media = (grauC + grauB) / 2;
            else
                media = (grauA + grauC) / 2;

            if (media >= 6)
                printf("APROVADO\n");
            else
                printf("REPROVADO\n");
        }
        somaMedias += media;
    }
    printf("Média geral dos alunos: %.2f\n", somaMedias / x);
    return 0;
}