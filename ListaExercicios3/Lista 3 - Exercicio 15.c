#include <stdio.h>

int main() {
    int formaPag;
    float preco, total;
    printf("Preco do produto:\n");
    scanf("%f", &preco);

    printf("Forma de pagamento:\n");
    printf("1 - Dinheiro (15%% desconto)\n");
    printf("2 - Cartao (10%% desconto)\n");
    printf("3 - 2x (sem juros)\n");
    printf("4 - 3x (10%% juros)\n");
    scanf("%d", &formaPag);

    if (formaPag == 1)
        total = preco * 0.85;
    else if (formaPag == 2)
        total = preco * 0.90;
    else if (formaPag == 3)
        total = preco;
    else if (formaPag == 4)
        total = preco * 1.10;
    else {
        printf("Opcao invalida\n");
        return 1;
    }

    printf("Total a pagar: %.2f\n", total);

    return 0;
}