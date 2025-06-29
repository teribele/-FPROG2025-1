#include <stdio.h>

float mediaUnisinos(float grauA, float grauB) {
    return grauA * (1.0/3.0) + grauB * (2.0/3.0);
}

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    float media = mediaUnisinos(a, b);
    printf("Grau final: %.2f\n", media);
    return 0;
}
