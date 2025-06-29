#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    int op;
    float x, y, resultado;

    do {
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        scanf("%d", &op);

        if (op >= 1 && op <= 4) {
            scanf("%f %f", &x, &y);

            if (op == 1) resultado = somar(x, y);
            if (op == 2) resultado = subtrair(x, y);
            if (op == 3) resultado = multiplicar(x, y);
            if (op == 4 && y != 0) resultado = dividir(x, y);
            if (op == 4 && y == 0) {
                printf("Divisão por zero!\n");
                continue;
            }
            printf("Resultado: %.2f\n", resultado);
        }

    } while (op != 0);

    return 0;
}
