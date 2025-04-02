#include <stdio.h>

int main()
{

int num1 = 0;

     printf("Insira o valor do seu numero\n");
    scanf("%i", &num1);
    
    
    if (num1>=0){
        
        printf("\n o dobro do numero digitado eh: %i", num1*2);
    }
    
    else{
        printf("\n o triplo do numero digitado eh: %i",num1*3);
    }
}
    
