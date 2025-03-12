#include <stdio.h>

int main()
{
int passaro = 0;
int racaoPorDia = 0;
    printf("Quantos passaros voce possui?\n");
    scanf("%i", &passaro);
    
    racaoPorDia = passaro * 30;
    
    printf("Voce precisa de %i gramas de racao por dia\n", racaoPorDia);

    return 0;
}
