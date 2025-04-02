#include <stdio.h>

int main()
{

int num1 = 0;
int celula100 = 0;
int celula50 = 0;
int celula20 = 0;
int celula10 = 0;
int celula5 = 0;
int celula1 = 0;

    printf("Insira o valor da compra\n");
    scanf("%i", &num1);
    
    
     for (int i = 0; i >= 0; i++){ 
    if (num1>=100){
        
        num1 = num1 - 100;
        celula100 = celula100 + 1;
        
        }
        
    else if (num1 >= 50 && num1 < 100){
        
        num1 = num1 - 50;
        celula50 = celula50 + 1;
        
        }
        
    else if (num1 >= 20 && num1 < 50){
        num1 = num1 - 20;
        celula20 = celula20 + 1;
        
        }
        
    else if (num1 >= 10 && num1 < 20){
        num1 = num1 - 10;
        celula10 = celula10 + 1;
        
        }
        
    else if (num1 >= 5 && num1 < 10){
        num1 = num1 - 5;
        celula5 = celula5 + 1;
        
        }
        
    else if (num1 >= 1 && num1 < 5){
        num1 = num1 - 1;
        celula1 = celula1 + 1;
        
    }  
    
    else if(num1<1){
        
        i = - 2;
    }
    
     }
    
    printf("\npara pagar esse valor, voce vai precisar das seguintes notas:\n %i notas de 100\n %i notas de 50\n %i notas de 20\n %i notas de 10\n %i notas de 5\n %i notas de 1", celula100, celula50, celula20, celula10, celula5, celula1);
    
    
    
}
