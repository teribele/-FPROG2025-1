#include <stdio.h>

int main()
{
float precoLitro = 0;
float dinheiro = 0;
float tanque = 0;
    printf("Qual o valor do litro da gasolina?\n");
    scanf("%f", &precoLitro);
    
    printf("Quanto dinheiro voce tem disponivel?\n");
    scanf("%f", &dinheiro);
    
    tanque = dinheiro/precoLitro ;
    
    printf("Voce consegue encher o tanque com %f litros\n", tanque);

    return 0;
}
