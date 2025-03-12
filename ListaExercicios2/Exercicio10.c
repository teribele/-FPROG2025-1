#include <stdio.h>

int main()
{
int camisetas = 0;
int calcas = 0;
int cintos = 0;
float valorcompra = 0;
float valordesconto = 0;
    printf("Quantas camisetas foram compradas?\n");
    scanf("%i", &camisetas);
    
    printf("Quantas calcas foram compradas?\n");
    scanf("%i", &calcas);
    
    printf("Quantas cintos foram comprados?\n");
    scanf("%i", &cintos);
    
    valorcompra = (camisetas * 25 + calcas * 100 + cintos * 40);
    valordesconto = valorcompra * 0.90;
    
    printf("O valor da compra ficou de %f reais, e apos o desconto ficou %f reais", valorcompra, valordesconto);

    return 0;
}
