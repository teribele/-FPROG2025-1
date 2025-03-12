#include <stdio.h>

int main()
{
int celular = 0;
int tablet = 0;
int total = 0;
    printf("Quantos celulares foram vendidos?\n");
    scanf("%i", &celular);
    
    printf("Quantos tablets foram vendidos?\n");
    scanf("%i", &tablet);
    
    total = (celular * 1000) + (tablet * 1500);
    
    printf("Voce arrecadou %i reais com as vendas\n", total);

    return 0;
}
