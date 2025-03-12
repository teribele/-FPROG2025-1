#include <stdio.h>

int main()
{
float grauA = 0;
float grauB = 0;
float media = 0;

    printf("Qual sua nota do grau A?\n");
    scanf("%f", &grauA);
    
    printf("Qual a sua nota do grau B?\n");
    scanf("%f", &grauB);
    
    media = (grauA * 1/3) + (grauB * 2/3);
    
    printf("Sua media eh %f", media);
    
    return 0;
}
