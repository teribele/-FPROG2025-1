#include <stdio.h>

int main()
{
int minutos = 0;
int segundos = 0;
    
    printf("Quantos minutos?\n");
    scanf("%d", &minutos);
    segundos = minutos * 60;
    
    printf("%i minutos equivalem a %i segundos\n", minutos, segundos);
    
    
    return 0;
}
