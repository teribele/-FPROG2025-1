#include <stdio.h>

int main() {
    int v[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite os 5 valores do vetor:");
        scanf("%d", &v[i]);
    }

    // a
    for (int i = 0; i < 5; i++) {
        printf("%d\n", v[i] * i);
    }

    return 0;
}