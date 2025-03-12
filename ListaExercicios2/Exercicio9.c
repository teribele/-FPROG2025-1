#include <stdio.h>

int main()
{
float valorcompra = 0;
float valorfinal = 0;
    printf("Qual o valor da compra?\n");
    scanf("%f", &valorcompra);
    
    valorfinal = valorcompra * 0.85;
    
    printf("O valor da compra apos o desconto ficou %f reais", valorfinal);

    return 0;
}
