#include <stdio.h>

int main()
{

float num1 = 0;

     printf("Insira o valor do seu salario\n");
    scanf("%f", &num1);
    
    
    if ((num1/100 * 11) > 318.20){
        
        num1 = 318.20;
    }
    
    else{
        num1 = num1/100 * 11;
    }
    
        printf("\n foi descontado %.2f reais do seu salario", num1);
        return 0;
    
}
