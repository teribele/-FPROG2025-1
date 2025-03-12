#include <stdio.h>

int main()
{
float celsius = 0;
float temperatura = 0;
    printf("Qual a temperatura em celsius?\n");
    scanf("%f", &celsius);
    
    temperatura = (celsius * 9/5) + 32;
    
    printf("Isso equivale a %f graus fahrenheit\n", temperatura);

    return 0;
}
