#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
srand(time(NULL));    

int num1 = 0;
int num2 = rand() % 6;
int par = 0;

    printf("Vamos brincar de par ou impar, escolha 1 para impar e 2 para par\n");
    scanf("%i", &par);
    
    if (par > 2 || par < 1){
        printf("o numero %i nao eh valido", par);
        return 0;
   }
    
    printf("Agora escolha um numero de 0 a 5\n");
    scanf("%i", &num1);
    
    
   if (num1 > 5 || num1 < 0){
       printf("o numero %i nao eh valido", num1);
       return 0;
   }
    
    int soma = (num1 + num2);
    
    
    if (((num1 + num2) %2 == 0) && (par == 2)){
        
        printf("\n a soma foi %i + %i que resulta em %i, entao o voce venceu", num1, num2, soma);
    }
    
    else if (((num1 + num2) %2 == 0) && (par == 1)){
        printf("\n a soma foi %i + %i que resulta em %i, entao o sistema venceu", num1, num2, soma);
    }
    
    else if (((num1 + num2) %2 != 0) && (par == 1)){
        printf("\n a soma foi %i + %i que resulta em %i, entao o voce venceu", num1, num2, soma);
    }
        
    else { printf("\n a soma foi %i + %i que resulta em %i, entao o sistema venceu", num1, num2, soma);
    }
}
    
