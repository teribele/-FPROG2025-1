#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    srand(time(NULL));

    printf("Matriz transformada (sinais invertidos):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 21 - 10;
            matriz[i][j] *= -1;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}