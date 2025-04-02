#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
int faces;
int numero;

    printf("Informe o numero de faces do dado (4, 6, 8, 10, 12 ou 16): ");
    scanf("%d", &faces);

    if (faces == 4 || faces == 6 || faces == 8 || faces == 10 || faces == 12 || faces == 16) {

        srand(time(NULL));

        numero = rand() % faces + 1;

        printf("O dado de %i faces caiu no numero %i", faces, numero);

}

    else{
        printf("O numero de faces escolhido nao é valido");
    }
  


}
