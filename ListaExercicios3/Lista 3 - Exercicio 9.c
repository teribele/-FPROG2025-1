#include <stdio.h>

int main() 
{
    float cotacaoReal;
    float cotacaoDolar;
    float cotacaoEuro;
    float valor;
    float resultado;
    int opcao;

    printf("Informe a cotacao do Dolar em relacao ao Real: ");
    scanf("%f", &cotacaoDolar);

    printf("Informe a cotacao do Euro em relacao ao Real: ");
    scanf("%f", &cotacaoEuro);

    printf("\nEscolha a opcao de conversao:\n");
    printf("1) Converter de Real para Euro\n");
    printf("2) Converter de Real para Dolar\n");
    printf("3) Converter de Euro para Dolar\n");
    printf("4) Converter de Euro para Real\n");
    printf("5) Converter de Dolar para Euro\n");
    printf("6) Converter de Dolar para Real\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Informe o valor em Real: ");
            scanf("%f", &valor);
            resultado = valor / cotacaoEuro;
            printf("Resultado: %.2f Euros\n", resultado);
            break;

        case 2:
            printf("Informe o valor em Real: ");
            scanf("%f", &valor);
            resultado = valor / cotacaoDolar;
            printf("Resultado: %.2f Dolares\n", resultado);
            break;

        case 3:
            printf("Informe o valor em Euro: ");
            scanf("%f", &valor);
            resultado = valor * (cotacaoDolar / cotacaoEuro);
            printf("Resultado: %.2f Dolares\n", resultado);
            break;

        case 4:
            printf("Informe o valor em Euro: ");
            scanf("%f", &valor);
            resultado = valor * cotacaoEuro;
            printf("Resultado: %.2f Reais\n", resultado);
            break;

        case 5:
            printf("Informe o valor em Dolar: ");
            scanf("%f", &valor);
            resultado = valor * (cotacaoEuro / cotacaoDolar);
            printf("Resultado: %.2f Euros\n", resultado);
            break;

        case 6:
            printf("Informe o valor em Dolar: ");
            scanf("%f", &valor);
            resultado = valor * cotacaoDolar;
            printf("Resultado: %.2f Reais\n", resultado);
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}