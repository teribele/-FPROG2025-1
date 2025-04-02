#include <stdio.h>

int main()
{

float num1 = 0;

     printf("Insira o valor da compra\n");
    scanf("%f", &num1);
    
    
    if (num1<=20){
        
    printf("o valor de venda sera %.2f", num1 + num1/100*45);

    }
    
    else if (num1 > 20 && num1 <= 50){
    printf("o valor de venda sera %.2f", num1 + num1/100*35);
        
    }
    
    else {
         printf("o valor de venda sera %.2f", num1 + num1/100*25);
    }
    
       
    
}
