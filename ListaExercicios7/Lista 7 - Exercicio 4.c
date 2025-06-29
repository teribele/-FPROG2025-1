#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sorteio(int inicio, int fim) {
    return rand() % (fim - inicio + 1) + inicio;
}

int main() {
    int ini, fim;
    srand(time(NULL));
    scanf("%d %d", &ini, &fim);
    int resultado = sorteio(ini, fim);
    printf("Número sorteado: %d\n", resultado);
    return 0;
}
