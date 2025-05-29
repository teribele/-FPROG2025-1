#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N, dado[6] = {0};
    printf("\nDigite a quantidade de rolamentos:");
    scanf("%d", &N);
    srand(time(NULL));

    // a
    for (int i = 0; i < N; i++) {
        int face = rand() % 6;
        dado[face]++;
    }

    for (int i = 0; i < 6; i++) {
        printf("%.2f%%\n", dado[i] * 100.0 / N);
    }

    return 0;
}