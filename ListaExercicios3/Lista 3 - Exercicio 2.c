#include <stdio.h>

int main()
{

int A = 0;
int B = 0;
int C = 0;

    
     printf("Insira o valor de A\n");
    scanf("%i", &A);
    
    printf("Insira o valor de B\n");
    scanf("%i", &B);
    
     printf("Insira o valor de C\n");
    scanf("%i", &C);
    
    if ((A + B) < (A + C)){
        
        printf("A + B é menor que A + C");
    }
    
    else{
        printf("A + B é maior ou igual a A + C");
    }
}
    
