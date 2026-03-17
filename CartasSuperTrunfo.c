#include <stdio.h>
#include <string.h>

int main() {

    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado_c1, estado_c2;
    char codigoDaCarta_c1[3],codigoDaCarta_c2[3], nomeDaCidade_c1[25], nomeDaCidade_c2[25];
    int numeroDePontosTuristicos_c1, numeroDePontosTuristicos_c2;
    signed long int populacao_c1, populacao_c2;
    float area_c1, area_c2, PIB_c1, PIB_c2;
    int dig_c1 = 25, dig_c2 = 25;
    float densidadePopulacional_c1, densidadePopulacional_c2, pibPerCapita_c1, pibPerCapita_c2;
    float superpoder_c1, superpoder_c2;

        // Área para entrada de dados
        printf("~ * ~ CARTAS SUPER TRUNFO ~ * ~\n");
        printf("\n");

        printf("[!] - Você entrará com as informações de duas cartas e ambas serão comparadas após o término da entrada de dados.\n");
        printf("\n");

        printf("CADASTRO DE CARTA 1:\n");   //-------------------------------------------
        printf("\n");
        printf("Insira abaixo a inicial do Estado (ex. de A até H):\n");    //Pergunta
        scanf(" %c", &estado_c1);  //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo o Código da Carta (ex. de 01 a 04):\n");  //Pergunta
        scanf("%s", codigoDaCarta_c1); //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo o Nome da Cidade:\n");    //Pergunta
        getchar(); //limpa o /n do buffer, sem ele o código já pula pro fim.
        fgets(nomeDaCidade_c1, dig_c1, stdin);    //Resposta - permite colocar strings com espaços sem corta-las ao meio
        nomeDaCidade_c1[strcspn(nomeDaCidade_c1, "\n")] = '\0';   //remove a quebra de linha
        printf("\n");   //Quebra de Linha

        printf("Insira o Número de Habitantes da Cidade (ex: 120000):\n");   //Pergunta
        scanf("%ld", &populacao_c1);    //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo a Área da Cidade em Quilômetros Quadrados (ex: 120000):\n");   //Pergunta
        scanf("%f", &area_c1); //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo o Produto Interno Bruto (PIB) da Cidade (ex: 120000):\n"); //Pergunta
        scanf("%f", &PIB_c1);  //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo a Quantidade de Pontos Turísticos da Cidade (ex: 120):\n"); //Pergunta
        scanf("%d", &numeroDePontosTuristicos_c1); //Resposta
        printf("\n");   //Quebra de Linha

            //Cálculos
            densidadePopulacional_c1 = (float) populacao_c1 / area_c1;
            pibPerCapita_c1 = (float) PIB_c1 / populacao_c1;

        printf("[!] - Os dados da CARTA 1 foram preenchidos.\n");   //-------------------------------------------
        printf("\n");

        printf("CADASTRO DE CARTA 2:\n");
        printf("\n");
        printf("Insira abaixo a inicial do Estado (ex. de A até H):\n");    //Pergunta
        scanf(" %c", &estado_c2);  //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo o Código da Carta (ex. de 01 a 04):\n");  //Pergunta
        scanf("%s", codigoDaCarta_c2); //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo o Nome da Cidade:\n");    //Pergunta
        getchar(); //limpa o /n do buffer, sem ele o código já pula pro fim.
        fgets(nomeDaCidade_c2, dig_c2, stdin);    //Resposta - permite colocar strings com espaços sem corta-las ao meio
        nomeDaCidade_c2[strcspn(nomeDaCidade_c2, "\n")] = '\0';   //remove a quebra de linha
        printf("\n");   //Quebra de Linha

        printf("Insira o Número de Habitantes da Cidade (ex: 120000):\n");   //Pergunta
        scanf("%ld", &populacao_c2);    //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo a Área da Cidade em Quilômetros Quadrados (ex: 120000):\n");   //Pergunta
        scanf("%f", &area_c2); //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo o Produto Interno Bruto (PIB) da Cidade (ex: 120000):\n"); //Pergunta
        scanf("%f", &PIB_c2);  //Resposta
        printf("\n");   //Quebra de Linha

        printf("Insira abaixo a Quantidade de Pontos Turísticos da Cidade (ex: 120):\n"); //Pergunta
        scanf("%d", &numeroDePontosTuristicos_c2); //Resposta
        printf("\n");   //Quebra de Linha

            //Cálculos
            densidadePopulacional_c2 = (float) populacao_c2 / area_c2;
            pibPerCapita_c2 = (float) PIB_c2 / populacao_c2;

        printf("[!] - Os dados da CARTA 2 foram preenchidos.\n");   //-------------------------------------------
        printf("\n");

    // Área para exibição dos dados da cidade
    printf("~ * ~ INFORMAÇÕES DA CARTA 1 ~ * ~");
    printf("\n");

    printf("Estado: %c\n", estado_c1); //imprime valor armazenado no estado
    printf("Código: %c%s\n", estado_c1, codigoDaCarta_c1);    //imprime os valores armazenados em estado + códigodacarta
    printf("Nome da Cidade: %s\n", nomeDaCidade_c1); //imprime o valor armazenado no nomeDaCidade
    printf("População: %ld\n", populacao_c1); //imprime o valor armazenado na populacao
    printf("Área: %.2f km²\n", area_c1); //imprime o valor armazenado em area e aplica formatação
    printf("PIB: %.2f\n", PIB_c1); //imprime o valor armazenado em PIB
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos_c1); //imprime o valor armazenado em numeroDePontosTuristicos
    printf("Densidade Populacional: %.4f hab/km²\n", densidadePopulacional_c1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_c1);

    printf("~ * ~ -------------------= CARTA 1 =------------------- ~ * ~");
    printf("\n");

    printf("\n");
    printf("---------= * =----------");
    printf("\n");
    printf("\n");

    printf("~ * ~ INFORMAÇÕES DA CARTA 2 ~ * ~");
    printf("\n");

    printf("Estado: %c\n", estado_c2); //imprime valor armazenado no estado
    printf("Código: %c%s\n", estado_c2, codigoDaCarta_c2);    //imprime os valores armazenados em estado + códigodacarta
    printf("Nome da Cidade: %s\n", nomeDaCidade_c2); //imprime o valor armazenado no nomeDaCidade
    printf("População: %ld\n", populacao_c2); //imprime o valor armazenado na populacao
    printf("Área: %.2f km²\n", area_c2); //imprime o valor armazenado em area e aplica formatação
    printf("PIB: %.2f\n", PIB_c2); //imprime o valor armazenado em PIB
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos_c2); //imprime o valor armazenado em numeroDePontosTuristicos
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_c2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita_c2);

    printf("~ * ~ -------------------= CARTA 2 =------------------- ~ * ~");
    printf("\n");

    printf("\n");
    printf("---------= * =----------");
    printf("\n");
    printf("\n");

    printf("~ * ~ COMPARAÇÕES DAS CARTAS ~ * ~");
    printf("\n");

    superpoder_c1 = (populacao_c1 + area_c1 + PIB_c1 + numeroDePontosTuristicos_c1 + pibPerCapita_c1 + (1 / densidadePopulacional_c1)) / 100000000000.0;
    superpoder_c2 = (populacao_c2 + area_c2 + PIB_c2 + numeroDePontosTuristicos_c2 + pibPerCapita_c2 +(1 / densidadePopulacional_c2)) / 100000000000.0;

    printf("População: Carta 1 venceu (%d)\n", populacao_c1 > populacao_c2);
    printf("Área: Carta 1 venceu (%d)\n", area_c1 > area_c2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB_c1 > PIB_c2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numeroDePontosTuristicos_c1 > numeroDePontosTuristicos_c2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional_c1 > densidadePopulacional_c2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita_c1 > pibPerCapita_c2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder_c1 > superpoder_c2);

    printf("~ * ~ -------------------= COMPARAÇÕES =------------------- ~ * ~");
    printf("\n");

    return 0;
}