#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL));

    int escolha = 0;
    int populacao = 0;
    int infectados = 0;
    float taxacontagio = 0;
    float porcentvacinada = 0;
    float efetvacina = 0;
    int dias = 0;
    int novosinfectados = 0;
    int vacinadosinfectados = 0;
    int suscetiveis = 0;
    float estimativa = 0;
    int saudaveis = 0;
    char evento[20];
    int aglomeracao = 0;
    int midiageraalerta = 0;
    int mutacaomaiscontagiosa = 0;
    int isolamentovoluntario = 0;
    int nada = 0;

    //toda essa primeira parte do codigo é dedicada ao menu + a digitação dos valores pelo usuário
    printf("\n====MENU===\nDigite 1 ou 2 para escolher\n\n1 - Nova Simulaçao\n2 - Sair do Programa\n");
    scanf("%d", &escolha);

    switch(escolha){

        case 1:

        printf("\nPor favor, forneça as seguintes informaçoes para a simulação começar\n");

        do{
        printf("\nPopulaçao Total:\n");
        scanf("%d", &populacao);

        if (populacao<=0){

            printf("Numero invalido, digite novamente\n");
        }
        }while(populacao<=0);

        do{
        printf("\nNumero de pessoas inicialmente infectadas:\n");
        scanf("%d", &infectados);

        if (infectados<=0 || infectados>populacao){

            printf("Numero invalido, digite novamente\n");

        }
        }while(infectados<=0 || infectados>populacao);

        do{
        printf("\nTaxa de contagio (0 a 100%%) :\n");
        scanf("%f", &taxacontagio);

        if (taxacontagio<0 || taxacontagio>100){

            printf("Numero invalido, digite novamente\n");

        }
        }while(taxacontagio<0 || taxacontagio>100);

        do{
        printf("\nPorcentagem da populaçao vacinada (0 a 100%%) :\n");
        scanf("%f", &porcentvacinada);

        if (porcentvacinada<0 || porcentvacinada>100){

            printf("Numero invalido, digite novamente\n");

        }
        }while(porcentvacinada<0 || porcentvacinada>100);

        do{
        printf("\nEfetividade da vacina (0 a 100%%) :\n");
        scanf("%f", &efetvacina);

        if (efetvacina<0 || efetvacina>100){

            printf("Numero invalido, digite novamente\n");

        }
        }while(efetvacina<0 || efetvacina>100);

        do{
        printf("\nNumero de dias da simulaçao:\n");
        scanf("%d", &dias);

        if (dias<0){

            printf("Numero invalido, digite novamente\n");

        }
        }while(dias<0);

        system("cls");

        //calculo de quantos da populacao sao vacinados
        int vacinados = 0;

        vacinados = populacao * (porcentvacinada/100.0);

        //calculo dos nao vacinados
        int naovacinados = 0;

        naovacinados = populacao - vacinados;
        suscetiveis = populacao - infectados;
        int naovacinadosinfectados = infectados;

        printf("\nPopulação: %i", populacao);
        printf("\nInfectados iniciais: %i", infectados);
        printf("\nTaxa de contagio: %.2f%%", taxacontagio);
        printf("\nPopulação vacinada: %i", vacinados);
        printf("\nEfetividade da vacina: %.2f%%", efetvacina);
        printf("\nDias simulados: %i", dias);

        for(int i=1;  i<=dias; i++){

        //codigo pro evento aleatorio
        int probevento = rand() % 100;

        if (probevento <= 15) {
            aglomeracao = 1;
            strcpy(evento, "Aglomeração!");
            taxacontagio += 25;
        }
        else if (probevento <= 20) {
            midiageraalerta = 1;
            strcpy(evento, "Mídia gera alerta!");
            taxacontagio -= 30;
        }
        else if (probevento <= 30) {
            isolamentovoluntario = 1;
            strcpy(evento, "Isolamento voluntário!");
            taxacontagio -= 20;
        }
        else if (probevento <= 35) {
            mutacaomaiscontagiosa = 1;
            strcpy(evento, "Mutacação mais contagiosa!");
            taxacontagio += 50;
        }
        else {
            nada = 1;
        }

        if (taxacontagio > 100){
            taxacontagio = 100;
        }
        else if (taxacontagio < 0){
            taxacontagio = 0;
        }

        //variaveis
        float chancefalhavacina = 1 - (efetvacina/100.0);
        float vacinadosvulneraveis = vacinados * chancefalhavacina;
        int naovacinadosaudaveis = populacao - vacinados - naovacinadosinfectados;
        float suscetiveis = naovacinadosaudaveis + vacinadosvulneraveis;

        int novosvacinadosinfectados = 0;
        int novosnaovacinadosinfectados = 0;

        //estimativa de quantos serao infectados naquele dia
        int estimativa = (infectados * (taxacontagio/100.0));

        //garante que nao tenha mais novos infectados do que populacao disponivel para ser infectada
        if (estimativa>suscetiveis){
            novosinfectados = (int)suscetiveis;
        }
        else novosinfectados = estimativa;
        
        //calcula os infectados que estavam vacinados
        if (suscetiveis > 0){
            novosvacinadosinfectados = (novosinfectados * vacinadosvulneraveis) / suscetiveis;
        }

        //retira do total de novos infectados os vacinados infectados, ficando com dois grupos diferentes, os infectados não vacinados e os infectados vacinados
        novosnaovacinadosinfectados = novosinfectados - novosvacinadosinfectados;

        //codigo que garante que o numero total de "vacinados infectados mesmo assim" nao passe o numero total de vacinados originalmente
        //usei o ternario (? e :) para deixar o código menor e mais legivel
        vacinadosinfectados = (vacinadosinfectados + novosvacinadosinfectados > vacinados) ? vacinados : vacinadosinfectados + novosvacinadosinfectados;
        
        //soma os novos infectados igual o código acima, porém esse serve para os não vacinados
        naovacinadosinfectados += novosnaovacinadosinfectados;
        infectados += novosinfectados;

        //calcula quantas pessoas saudaveis ainda restam para serem infectadas
        saudaveis = populacao - infectados;
        if (saudaveis <0){
            saudaveis = 0;
        }

        //ajustando os valores caso toda populacao tenha sido infectada
          if (infectados >= populacao){
           infectados = populacao;}

        //printando o dia, numero de infectados do dia, e numero de novos infectados do dia, junto com o evento (caso ocorrer)
        printf("\nDia %i: ", i);
        printf("%i infectados (+%i)", infectados, novosinfectados);
        if (aglomeracao == 1 || mutacaomaiscontagiosa == 1 || isolamentovoluntario == 1 || midiageraalerta == 1){
            printf(" (evento: %s)", evento);
        };

        //encerrando o programa caso toda população seja infectada
        if (infectados >= populacao){

            printf("\nTODOS FORAM INFECTADOS! Fim da simulação.\n");
            break;
        }

        novosinfectados = 0;
        aglomeracao = 0;
        mutacaomaiscontagiosa = 0;
        isolamentovoluntario = 0;
        midiageraalerta = 0;

        }

        // printando as informacoes finais apos sair do loop
        printf("\nTotal de infectados: %i", infectados);
        printf("\nVacinados infectados mesmo assim: %i", vacinadosinfectados);
        printf("\nPopulação ainda saudável: %i\n", saudaveis);

        break;

        //caso 2 do switch, que encerra o programa
        case 2:
        printf("Programa Encerrado");
        break;

    }

    return 0;
}