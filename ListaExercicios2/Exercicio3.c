#include <stdio.h>

int main()
{
float pesoPrato = 0;
float valor = 0;

    printf("Qual o peso do prato? (em kilos)\n");
    scanf("%f", &pesoPrato);
    
    valor = pesoPrato * 40;
    
    printf("O prato ira custar %f reais\n", valor);
    

    return 0;
}
