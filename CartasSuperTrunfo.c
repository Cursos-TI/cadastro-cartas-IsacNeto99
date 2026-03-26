#include <stdio.h>
#include <string.h>

int main() {

    //Variaveis
        int primeiroAtributo, segundoAtributo, comparacaoFinal, somaAtributos_c1, somaAtributos_c2, somaAtributosFinal;
        int numeroDePontosTuristicos_c1, numeroDePontosTuristicos_c2, dig_c1 = 25, dig_c2 = 25;
        float area_c1, area_c2, PIB_c1, PIB_c2, densidadePopulacional_c1, densidadePopulacional_c2, pibPerCapita_c1, pibPerCapita_c2, superpoder_c1, superpoder_c2;
        char estado_c1, estado_c2, codigoDaCarta_c1[3], codigoDaCarta_c2[3], nomeDaCidade_c1[25], nomeDaCidade_c2[25], selecaoAtributo_c1[40], selecaoAtributo_c2[40];
        signed long int populacao_c1, populacao_c2;

    //Entrada de Dados
        printf("~ * ~ ---= JOGO SUPER TRUNFO =--- ~ * ~\n\n");

        printf("[!] - Você deverá selecionar dois atributos para comparação, siga as instruções abaixo com CLAREZA!\n\n");

        printf("[!] - Escolha o PRIMEIRO atributo abaixo:\n");
        printf("1. ÁREA\n");
        printf("2. DENSIDADE POPULACIONAL\n");
        printf("3. NÚMERO DE PONTOS TURÍSTICOS\n");
        printf("4. PIB\n");
        printf("5. PIB PER CAPITA\n");
        printf("6. POPULAÇÃO\n\n");

        printf("[!] - Qual será o primeiro atributo? Insira a seleção abaixo!\n");
        scanf("%d", &primeiroAtributo);

            switch (primeiroAtributo){
            case 1:
                printf("[!] - Escolha o SEGUNDO atributo abaixo:\n");
                printf("2. DENSIDADE POPULACIONAL\n");
                printf("3. NÚMERO DE PONTOS TURÍSTICOS\n");
                printf("4. PIB\n");
                printf("5. PIB PER CAPITA\n");
                printf("6. POPULAÇÃO\n\n");

                printf("[!] - Qual será o SEGUNDO atributo? Insira a selação abaixo!\n\n");
                scanf("%d", &segundoAtributo);

                    primeiroAtributo == segundoAtributo ? printf("Por gentileza, informe um atributo diferente ao anterior!\n\n") : printf("Atributos de comparação SELECIONADOS!\n\n");

                break;
            case 2:
                printf("[!] - Escolha o SEGUNDO atributo abaixo:\n");
                printf("1. ÁREA\n");
                printf("3. NÚMERO DE PONTOS TURÍSTICOS\n");
                printf("4. PIB\n");
                printf("5. PIB PER CAPITA\n");
                printf("6. POPULAÇÃO\n\n");

                printf("[!] - Qual será o SEGUNDO atributo? Insira a selação abaixo!\n\n");
                scanf("%d", &segundoAtributo);

                    primeiroAtributo == segundoAtributo ? printf("Por gentileza, informe um atributo diferente ao anterior!\n\n") : printf("Atributos de comparação SELECIONADOS!\n\n");

                break;
            case 3:
                printf("[!] - Escolha o SEGUNDO atributo abaixo:\n");
                printf("1. ÁREA\n");
                printf("2. DENSIDADE POPULACIONAL\n");
                printf("4. PIB\n");
                printf("5. PIB PER CAPITA\n");
                printf("6. POPULAÇÃO\n\n");

                printf("[!] - Qual será o SEGUNDO atributo? Insira a selação abaixo!\n\n");
                scanf("%d", &segundoAtributo);

                    primeiroAtributo == segundoAtributo ? printf("Por gentileza, informe um atributo diferente ao anterior!\n\n") : printf("Atributos de comparação SELECIONADOS!\n\n");
                    
                break;
            case 4:
                printf("[!] - Escolha o SEGUNDO atributo abaixo:\n");
                printf("1. ÁREA\n");
                printf("2. DENSIDADE POPULACIONAL\n");
                printf("3. NÚMERO DE PONTOS TURÍSTICOS\n");
                printf("5. PIB PER CAPITA\n");
                printf("6. POPULAÇÃO\n\n");

                printf("[!] - Qual será o SEGUNDO atributo? Insira a selação abaixo!\n\n");
                scanf("%d", &segundoAtributo);

                    primeiroAtributo == segundoAtributo ? printf("Por gentileza, informe um atributo diferente ao anterior!\n\n") : printf("Atributos de comparação SELECIONADOS!\n\n");
                    
                break;
            case 5:
                printf("[!] - Escolha o SEGUNDO atributo abaixo:\n");
                printf("1. ÁREA\n");
                printf("2. DENSIDADE POPULACIONAL\n");
                printf("3. NÚMERO DE PONTOS TURÍSTICOS\n");
                printf("4. PIB\n");
                printf("6. POPULAÇÃO\n\n");

                printf("[!] - Qual será o SEGUNDO atributo? Insira a selação abaixo!\n\n");
                scanf("%d", &segundoAtributo);

                    primeiroAtributo == segundoAtributo ? printf("Por gentileza, informe um atributo diferente ao anterior!\n\n") : printf("Atributos de comparação SELECIONADOS!\n\n");
                    
                break;                
            case 6:
                printf("[!] - Escolha o SEGUNDO atributo abaixo:\n");
                printf("1. ÁREA\n");
                printf("2. DENSIDADE POPULACIONAL\n");
                printf("3. NÚMERO DE PONTOS TURÍSTICOS\n");
                printf("4. PIB\n");
                printf("5. PIB PER CAPITA\n\n");

                printf("[!] - Qual será o SEGUNDO atributo? Insira a selação abaixo!\n\n");
                scanf("%d", &segundoAtributo);

                    primeiroAtributo == segundoAtributo ? printf("Por gentileza, informe um atributo diferente ao anterior!\n\n") : printf("Atributos de comparação SELECIONADOS!\n\n");
                    
                break;
            }

        printf("[!] - Agora você entrará com as informações das cartas. Siga ATENTAMENTE o que lhe é solicitado!\n\n");

        printf("~ * ~ ---= CARTAS (1) =--- ~ * ~\n");

        printf("Insira abaixo a inicial do Estado (ex. de A até H):\n");
        scanf(" %c", &estado_c1);

        printf("Insira abaixo o Código da Carta (ex. de 01 a 04):\n");
        scanf("%s", codigoDaCarta_c1);

        printf("Insira abaixo o Nome da Cidade:\n");
        getchar();
        fgets(nomeDaCidade_c1, dig_c1, stdin);
        nomeDaCidade_c1[strcspn(nomeDaCidade_c1, "\n")] = '\0';

        printf("Insira o Número de Habitantes da Cidade (ex: 120000):\n");
        scanf("%ld", &populacao_c1);

        printf("Insira abaixo a Área da Cidade em Quilômetros Quadrados (ex: 120000):\n");
        scanf("%f", &area_c1);

        printf("Insira abaixo o Produto Interno Bruto (PIB) da Cidade (ex: 120000):\n");
        scanf("%f", &PIB_c1);

        printf("Insira abaixo a Quantidade de Pontos Turísticos da Cidade (ex: 120):\n");
        scanf("%d", &numeroDePontosTuristicos_c1);

            //Cálculo Densidade Populacional e PIB per Capita.
                densidadePopulacional_c1 = (float)populacao_c1 / area_c1;
                pibPerCapita_c1 = (float)PIB_c1 / populacao_c1;

        printf("[!] - CARTAS (1) CADASTRADAS!\n\n");

        printf("~ * ~ ---= CARTAS (2) =--- ~ * ~\n");

        printf("Insira abaixo a inicial do Estado (ex. de A até H):\n");
        scanf(" %c", &estado_c2);

        printf("Insira abaixo o Código da Carta (ex. de 01 a 04):\n");
        scanf("%s", codigoDaCarta_c2);

        printf("Insira abaixo o Nome da Cidade:\n");
        getchar();
        fgets(nomeDaCidade_c2, dig_c2, stdin);
        nomeDaCidade_c2[strcspn(nomeDaCidade_c2, "\n")] = '\0';

        printf("Insira o Número de Habitantes da Cidade (ex: 120000):\n");
        scanf("%ld", &populacao_c2);

        printf("Insira abaixo a Área da Cidade em Quilômetros Quadrados (ex: 120000):\n");
        scanf("%f", &area_c2);

        printf("Insira abaixo o Produto Interno Bruto (PIB) da Cidade (ex: 120000):\n");
        scanf("%f", &PIB_c2);

        printf("Insira abaixo a Quantidade de Pontos Turísticos da Cidade (ex: 120):\n");
        scanf("%d", &numeroDePontosTuristicos_c2);

            //Cálculo Densidade Populacional e PIB per Capita.
                densidadePopulacional_c2 = (float)populacao_c2 / area_c2;
                pibPerCapita_c2 = (float)PIB_c2 / populacao_c2;


        printf("[!] - CARTAS (2) CADASTRADAS!\n\n");

    //Captação dos valores contidos nas variaveis (Verifica a seleção feita pelo usuário e atribui a soma coerente com as opções escolhidas.)
        // Se o primeiro Atributo for igual a 1.
            if ((primeiroAtributo == 1) && (segundoAtributo == 2)){
                somaAtributos_c1 = area_c1 + densidadePopulacional_c1;
                somaAtributos_c2 = area_c2 + densidadePopulacional_c2;
            } else if ((primeiroAtributo == 1) && (segundoAtributo == 3)){
                somaAtributos_c1 = area_c1 + (float)numeroDePontosTuristicos_c1;
                somaAtributos_c2 = area_c2 + (float)numeroDePontosTuristicos_c2; 
            } else if ((primeiroAtributo == 1) && (segundoAtributo == 4)){
                somaAtributos_c1 = area_c1 + PIB_c1;
                somaAtributos_c2 = area_c2 + PIB_c2;
            } else if ((primeiroAtributo == 1) && (segundoAtributo == 5)){
                somaAtributos_c1 = area_c1 + pibPerCapita_c1;
                somaAtributos_c2 = area_c2 + pibPerCapita_c2;
            } else if ((primeiroAtributo == 1) && (segundoAtributo == 6)){
                somaAtributos_c1 = area_c1 + (float)populacao_c1;
                somaAtributos_c2 = area_c2 + (float)populacao_c2;
            }
        // Se o primeiro Atributo for igual a 2.
            if ((primeiroAtributo == 2) && (segundoAtributo == 1)){
                somaAtributos_c1 = densidadePopulacional_c1 + area_c1;
                somaAtributos_c2 = densidadePopulacional_c2 + area_c2;
            } else if ((primeiroAtributo == 2) && (segundoAtributo == 3)){
                somaAtributos_c1 = densidadePopulacional_c1 + (float)numeroDePontosTuristicos_c1;
                somaAtributos_c2 = densidadePopulacional_c2 + (float)numeroDePontosTuristicos_c2;
            } else if ((primeiroAtributo == 2) && (segundoAtributo == 4)){
                somaAtributos_c1 = densidadePopulacional_c1 + PIB_c1;
                somaAtributos_c2 = densidadePopulacional_c2 + PIB_c2;
            } else if ((primeiroAtributo == 2) && (segundoAtributo == 5)){
                somaAtributos_c1 = densidadePopulacional_c1 + pibPerCapita_c1;
                somaAtributos_c2 = densidadePopulacional_c2 + pibPerCapita_c2;
            } else if ((primeiroAtributo == 2) && (segundoAtributo == 6)){
                somaAtributos_c1 = densidadePopulacional_c1 + (float)populacao_c1;
                somaAtributos_c2 = densidadePopulacional_c2 + (float)populacao_c2;
            }
        // Se o primeiro Atributo for igual a 3.
            if ((primeiroAtributo == 3) && (segundoAtributo == 1)){
                somaAtributos_c1 = (float)numeroDePontosTuristicos_c1 + area_c1;
                somaAtributos_c2 = (float)numeroDePontosTuristicos_c2 + area_c2;
            } else if ((primeiroAtributo == 3) && (segundoAtributo == 2)){
                somaAtributos_c1 = (float)numeroDePontosTuristicos_c1 + densidadePopulacional_c1;
                somaAtributos_c2 = (float)numeroDePontosTuristicos_c2 + densidadePopulacional_c2;
            } else if ((primeiroAtributo == 3) && (segundoAtributo == 4)){
                somaAtributos_c1 = (float)numeroDePontosTuristicos_c1 + PIB_c1;
                somaAtributos_c2 = (float)numeroDePontosTuristicos_c2 + PIB_c2;
            } else if ((primeiroAtributo == 3) && (segundoAtributo == 5)){
                somaAtributos_c1 = (float)numeroDePontosTuristicos_c1 + pibPerCapita_c1;
                somaAtributos_c2 = (float)numeroDePontosTuristicos_c2 + pibPerCapita_c2;
            } else if ((primeiroAtributo == 3) && (segundoAtributo == 6)){
                somaAtributos_c1 = (float)numeroDePontosTuristicos_c1 + populacao_c1;
                somaAtributos_c2 = (float)numeroDePontosTuristicos_c2 + populacao_c2;
            }
        // Se o primeiro Atributo for igual a 4.
            if ((primeiroAtributo == 4) && (segundoAtributo == 1)){
                somaAtributos_c1 = PIB_c1 + area_c1;
                somaAtributos_c2 = PIB_c2 + area_c2;
            } else if ((primeiroAtributo == 4) && (segundoAtributo == 2)){
                somaAtributos_c1 = PIB_c1 + densidadePopulacional_c1;
                somaAtributos_c2 = PIB_c2 + densidadePopulacional_c2;
            } else if ((primeiroAtributo == 4) && (segundoAtributo == 3)){
                somaAtributos_c1 = PIB_c1 + (float)numeroDePontosTuristicos_c1;
                somaAtributos_c2 = PIB_c2 + (float)numeroDePontosTuristicos_c2;
            } else if ((primeiroAtributo == 4) && (segundoAtributo == 5)){
                somaAtributos_c1 = PIB_c1 + pibPerCapita_c1;
                somaAtributos_c2 = PIB_c2 + pibPerCapita_c2;
            } else if ((primeiroAtributo == 4) && (segundoAtributo == 6)){
                somaAtributos_c1 = PIB_c1 + (float)populacao_c1;
                somaAtributos_c2 = PIB_c2 + (float)populacao_c2;
            }
        // Se o primeiro Atributo for igual a 5.
            if ((primeiroAtributo == 5) && (segundoAtributo == 1)){
                somaAtributos_c1 = pibPerCapita_c1 + area_c1;
                somaAtributos_c2 = pibPerCapita_c2 + area_c2;
            } else if ((primeiroAtributo == 5) && (segundoAtributo == 2)){
                somaAtributos_c1 = pibPerCapita_c1 + densidadePopulacional_c1;
                somaAtributos_c2 = pibPerCapita_c2 + densidadePopulacional_c2;
            } else if ((primeiroAtributo == 5) && (segundoAtributo == 3)){
                somaAtributos_c1 = pibPerCapita_c1 + (float)numeroDePontosTuristicos_c1;
                somaAtributos_c2 = pibPerCapita_c2 + (float)numeroDePontosTuristicos_c2;
            } else if ((primeiroAtributo == 5) && (segundoAtributo == 4)){
                somaAtributos_c1 = pibPerCapita_c1 + PIB_c1;
                somaAtributos_c2 = pibPerCapita_c2 + PIB_c2;
            } else if ((primeiroAtributo == 5) && (segundoAtributo == 6)){
                somaAtributos_c1 = pibPerCapita_c1 + (float)populacao_c1;
                somaAtributos_c2 = pibPerCapita_c2 + (float)populacao_c2;
            }
        // Se o primeiro Atributo for igual a 6.
            if ((primeiroAtributo == 6) && (segundoAtributo == 1)){
                somaAtributos_c1 = (float)populacao_c1 + area_c1;
                somaAtributos_c2 = (float)populacao_c2 + area_c2;
            } else if ((primeiroAtributo == 6) && (segundoAtributo == 2)){
                somaAtributos_c1 = (float)populacao_c1 + densidadePopulacional_c1;
                somaAtributos_c2 = (float)populacao_c2 + densidadePopulacional_c2;
            } else if ((primeiroAtributo == 6) && (segundoAtributo == 3)){
                somaAtributos_c1 = (float)populacao_c1 + numeroDePontosTuristicos_c1;
                somaAtributos_c2 = (float)populacao_c2 + numeroDePontosTuristicos_c2;
            } else if ((primeiroAtributo == 6) && (segundoAtributo == 4)){
                somaAtributos_c1 = (float)populacao_c1 + PIB_c1;
                somaAtributos_c2 = (float)populacao_c2 + PIB_c2;
            } else if ((primeiroAtributo == 6) && (segundoAtributo == 5)){
                somaAtributos_c1 = (float)populacao_c1 + pibPerCapita_c1;
                somaAtributos_c2 = (float)populacao_c2 + pibPerCapita_c2;
            }

            //Cálculo do Super Poder
                superpoder_c1 = (populacao_c1 + area_c1 + PIB_c1 + numeroDePontosTuristicos_c1 + pibPerCapita_c1 + (1 / densidadePopulacional_c1)) / 100000000000.0;
                superpoder_c2 = (populacao_c2 + area_c2 + PIB_c2 + numeroDePontosTuristicos_c2 + pibPerCapita_c2 + (1 / densidadePopulacional_c2)) / 100000000000.0;

    //Área de exibição dos dados das Cidades
        printf("~ * ~ ---= INFORMAÇÕES DA CARTA (1) =--- ~ * ~\n");

        printf("Estado: %c\n", estado_c1); //imprime valor armazenado no estado
        printf("Código: %c%s\n", estado_c1, codigoDaCarta_c1);    //imprime os valores armazenados em estado + códigodacarta
        printf("Nome da Cidade: %s\n", nomeDaCidade_c1); //imprime o valor armazenado no nomeDaCidade
        printf("População: %ld\n", populacao_c1); //imprime o valor armazenado na populacao
        printf("Área: %.2f km²\n", area_c1); //imprime o valor armazenado em area e aplica formatação
        printf("PIB: %.2f\n", PIB_c1); //imprime o valor armazenado em PIB
        printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos_c1); //imprime o valor armazenado em numeroDePontosTuristicos
        printf("Densidade Populacional: %.4f hab/km²\n", densidadePopulacional_c1);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita_c1);
        printf("Super Poder: %.2f\n", superpoder_c1);

        printf("~ * ~ ---= X =--- ~ * ~\n\n");

        printf("~ * ~ ---= INFORMAÇÕES DA CARTA (2) =--- ~ * ~\n");

        printf("Estado: %c\n", estado_c2); //imprime valor armazenado no estado
        printf("Código: %c%s\n", estado_c2, codigoDaCarta_c2);    //imprime os valores armazenados em estado + códigodacarta
        printf("Nome da Cidade: %s\n", nomeDaCidade_c2); //imprime o valor armazenado no nomeDaCidade
        printf("População: %ld\n", populacao_c2); //imprime o valor armazenado na populacao
        printf("Área: %.2f km²\n", area_c2); //imprime o valor armazenado em area e aplica formatação
        printf("PIB: %.2f\n", PIB_c2); //imprime o valor armazenado em PIB
        printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos_c2); //imprime o valor armazenado em numeroDePontosTuristicos
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional_c2);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita_c2);
        printf("Super Poder: %.2f\n", superpoder_c2);

        printf("~ * ~ ---= X =--- ~ * ~\n\n");
        
        printf("~ * ~ ---= COMPARAÇÃO DAS CARTAS =--- ~ * ~\n");

            //Código de seleção de atributo (Apenas para mostrar a seleção feita pelo usuário anteriormente em forma de string!)
                //Primeiro Atributo
                    if (primeiroAtributo == 1){
                        strcpy(selecaoAtributo_c1, "ÁREA");
                    } else if (primeiroAtributo == 2){
                        strcpy(selecaoAtributo_c1, "DENSIDADE POPULACIONAL");
                    } else if (primeiroAtributo == 3){
                        strcpy(selecaoAtributo_c1, "NÚMERO DE PONTOS TURÍSTICOS");
                    } else if (primeiroAtributo == 4){
                        strcpy(selecaoAtributo_c1, "PIB");
                    } else if (primeiroAtributo == 5){
                        strcpy(selecaoAtributo_c1, "PIB PER CAPITA");
                    } else {
                        strcpy(selecaoAtributo_c1, "POPULAÇÃO");
                    }

                //Segundo Atributo
                    if (segundoAtributo == 1){
                        strcpy(selecaoAtributo_c2, "ÁREA");
                    } else if (segundoAtributo == 2){
                        strcpy(selecaoAtributo_c2, "DENSIDADE POPULACIONAL");
                    } else if (segundoAtributo == 3){
                        strcpy(selecaoAtributo_c2, "NÚMERO DE PONTOS TURÍSTICOS");
                    } else if (segundoAtributo == 4){
                        strcpy(selecaoAtributo_c2, "PIB");
                    } else if (segundoAtributo == 5){
                        strcpy(selecaoAtributo_c2, "PIB PER CAPITA");
                    } else {
                        strcpy(selecaoAtributo_c2, "POPULAÇAO");
                    }

        printf("Atributos SELECIONADOS para comparação: %s e %s\n\n", selecaoAtributo_c1, selecaoAtributo_c2);

    //Resultado Final
        //Comparação dos Atributos
            switch (primeiroAtributo){
            case 1:
                printf("(1) - %s\n", nomeDaCidade_c1);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c1);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c1, area_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c1, area_c2);

                break;
            case 2:
                printf("(1) - %s\n", nomeDaCidade_c1);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c1);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c1, densidadePopulacional_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c1, densidadePopulacional_c2);

                break;
            case 3:
                printf("(1) - %s\n", nomeDaCidade_c1);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c1);
                printf("(1) - %s (%d)\n", selecaoAtributo_c1, numeroDePontosTuristicos_c1);
                printf("(2) - %s (%d)\n\n", selecaoAtributo_c1, numeroDePontosTuristicos_c2);

                break;
            case 4:
                printf("(1) - %s\n", nomeDaCidade_c1);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c1);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c1, PIB_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c1, PIB_c2);

                break;
            case 5:
                printf("(1) - %s\n", nomeDaCidade_c1);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c1);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c1, pibPerCapita_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c1, pibPerCapita_c2);

                break;
            case 6:
                printf("(1) - %s\n", nomeDaCidade_c1);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c1);
                printf("(1) - %s (%ld)\n", selecaoAtributo_c1, populacao_c1);
                printf("(2) - %s (%ld)\n\n", selecaoAtributo_c1, populacao_c2);

                break;
            }
            switch (segundoAtributo){
            case 1:
                printf("(2) - %s\n", nomeDaCidade_c2);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c2);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c2, area_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c2, area_c2);

                printf("~ * ~ -= RESULTADO =- ~ * ~\n\n");

                printf("(1) - Soma dos Atributos SELECIONADOS: %f", (float)somaAtributos_c1);
                printf("(2) - Soma dos Atributos SELECIONADOS: %f", (float)somaAtributos_c2);

                if (somaAtributos_c1 > somaAtributos_c2){
                    printf("(1) - CARTA VENCEDORA!\n\n");
                } else if (somaAtributos_c2 > somaAtributos_c1){
                    printf("(2) - CARTA VENCEDORA!\n\n");
                } else {
                    printf("[!] - HOUVE UM EMPATE!\n\n");
                }
                break;
            case 2:
                printf("(2) - %s\n", nomeDaCidade_c2);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c2);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c2, densidadePopulacional_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c2, densidadePopulacional_c2);

                printf("~ * ~ -= RESULTADO =- ~ * ~\n\n");

                printf("(1) - Soma dos Atributos SELECIONADOS: %.2f\n", (float)somaAtributos_c1);
                printf("(2) - Soma dos Atributos SELECIONADOS: %.2f\n\n", (float)somaAtributos_c2);

                if (somaAtributos_c1 > somaAtributos_c2){
                    printf("(1) - CARTA VENCEDORA!\n\n");
                } else if (somaAtributos_c2 > somaAtributos_c1){
                    printf("(2) - CARTA VENCEDORA!\n\n");
                } else {
                    printf("[!] - HOUVE UM EMPATE!\n\n");
                }
                break;
            case 3:
                printf("(2) - %s\n", nomeDaCidade_c2);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c2);
                printf("(1) - %s (%d)\n", selecaoAtributo_c2, numeroDePontosTuristicos_c1);
                printf("(2) - %s (%d)\n\n", selecaoAtributo_c2, numeroDePontosTuristicos_c2);

                printf("~ * ~ -= RESULTADO =- ~ * ~\n\n");

                printf("(1) - Soma dos Atributos SELECIONADOS: %.2f\n", (float)somaAtributos_c1);
                printf("(2) - Soma dos Atributos SELECIONADOS: %.2f\n\n", (float)somaAtributos_c2);

                if (somaAtributos_c1 > somaAtributos_c2){
                    printf("(1) - CARTA VENCEDORA!\n\n");
                } else if (somaAtributos_c2 > somaAtributos_c1){
                    printf("(2) - CARTA VENCEDORA!\n\n");
                } else {
                    printf("[!] - HOUVE UM EMPATE!\n\n");
                }
                break;
            case 4:
                printf("(2) - %s\n", nomeDaCidade_c2);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c2);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c2, PIB_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c2, PIB_c2);

                printf("~ * ~ -= RESULTADO =- ~ * ~\n\n");

                printf("(1) - Soma dos Atributos SELECIONADOS: %.2f\n", (float)somaAtributos_c1);
                printf("(2) - Soma dos Atributos SELECIONADOS: %.2f\n\n", (float)somaAtributos_c2);

                if (somaAtributos_c1 > somaAtributos_c2){
                    printf("(1) - CARTA VENCEDORA!\n\n");
                } else if (somaAtributos_c2 > somaAtributos_c1){
                    printf("(2) - CARTA VENCEDORA!\n\n");
                } else {
                    printf("[!] - HOUVE UM EMPATE!\n\n");
                }
                break;
            case 5:
                printf("(2) - %s\n", nomeDaCidade_c2);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c2);
                printf("(1) - %s (%.2f)\n", selecaoAtributo_c2, pibPerCapita_c1);
                printf("(2) - %s (%.2f)\n\n", selecaoAtributo_c2, pibPerCapita_c2);

                printf("~ * ~ -= RESULTADO =- ~ * ~\n\n");

                printf("(1) - Soma dos Atributos SELECIONADOS: %.2f\n", (float)somaAtributos_c1);
                printf("(2) - Soma dos Atributos SELECIONADOS: %.2f\n\n", (float)somaAtributos_c2);

                if (somaAtributos_c1 > somaAtributos_c2){
                    printf("(1) - CARTA VENCEDORA!\n\n");
                } else if (somaAtributos_c2 > somaAtributos_c1){
                    printf("(2) - CARTA VENCEDORA!\n\n");
                } else {
                    printf("[!] - HOUVE UM EMPATE!\n\n");
                }
                break;
            case 6:
                printf("(2) - %s\n", nomeDaCidade_c2);
                printf("Atributo a ser COMPARADO: %s\n", selecaoAtributo_c2);
                printf("(1) - %s (%ld)\n", selecaoAtributo_c2, populacao_c1);
                printf("(2) - %s (%ld)\n\n", selecaoAtributo_c2, populacao_c2);

                printf("~ * ~ -= RESULTADO =- ~ * ~\n\n");

                printf("(1) - Soma dos Atributos SELECIONADOS: %.2f\n", (float)somaAtributos_c1);
                printf("(2) - Soma dos Atributos SELECIONADOS: %.2f\n\n", (float)somaAtributos_c2);

                if (somaAtributos_c1 > somaAtributos_c2){
                    printf("(1) - CARTA VENCEDORA!\n\n");
                } else if (somaAtributos_c2 > somaAtributos_c1){
                    printf("(2) - CARTA VENCEDORA!\n\n");
                } else {
                    printf("[!] - HOUVE UM EMPATE!\n\n");
                }
                break;
            }
            
    return 0;
}