
#include <stdio.h>

int main()
{
   
float num1 = 0;
float num2 = 0;
float num3 = 0;

   printf("Qual o primeiro numero?\n");
    scanf("%f", &num1);
    
    printf("Qual o segundo numero?\n");
    scanf("%f", &num2);
   
   
   if (num2 == 0){
    printf("ERRO, é impossível dividir por zero");
   }
   
   else{
       
       num3 = num1/num2;
       
       printf("O resultado da divisao é: %f", num3);
   }
   
   

    return 0;
}
