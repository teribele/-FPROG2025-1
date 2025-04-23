#include <stdio.h>

int main() {
    int idadeDep;
    float valorPlano = 300;
    printf("Digite a idade do dependente:\n");
    scanf("%d", &idadeDep);

    if (idadeDep < 10)
        valorPlano += 100;
    else if (idadeDep <= 30)
        valorPlano += 220;
    else if (idadeDep <= 60)
        valorPlano += 395;
    else
        valorPlano += 480;

    printf("Valor do plano: %.2f\n", valorPlano);

    return 0;
}