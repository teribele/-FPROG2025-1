#include <stdio.h>

int main()
{
float quantidadedol = 0;
float reais = 0;
float cotacaodolar = 5.76;
    
    printf("Quantos dolares deseja comprar?\n");
    scanf("%f", &quantidadedol);
    
    reais = quantidadedol * cotacaodolar;
    
    printf("voce precisara de %f reais\n", reais);
    
    return 0;
}
