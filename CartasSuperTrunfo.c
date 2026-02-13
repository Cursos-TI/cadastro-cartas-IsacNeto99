#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;    //Estado
    char codigoDaCarta[3], nomeDaCidade[25];   //Código da Carta e Nome da Cidade
    int populacao, numeroDePontosTuristicos;    //População e Número de Pontos Turísticos
    float area, PIB;    //Área em Km² e Produto Interno Bruto
    int dig = 25;  //número inteiro para o fgets
    // Área para entrada de dados
      printf("Insira abaixo a inicial do Estado (ex. de A até H):\n");    //Pergunta
      scanf(" %c", &estado);  //onde recebe a entrada
      printf("\n");   //apenas para pular uma linha da próxima pergunta

      printf("Insira abaixo o Código da Carta (ex. de 01 a 04):\n");  //Pergunta
      scanf("%s", codigoDaCarta); //onde recebe a entrada
      printf("\n");   //apenas para pular uma linha da próxima pergunta

      printf("Insira abaixo o Nome da Cidade:\n");    //Pergunta
      getchar(); //limpa o /n do buffer, sem ele o código já pula pro fim.
      fgets(nomeDaCidade, dig, stdin);    //onde recebe a entrada - permite colocar strings com espaços sem corta-las ao meio
      nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';   //remove a quebra de linha
      printf("\n");   //apenas para pular uma linha da próxima pergunta

      printf("Insira o Número de Habitantes da Cidade:\n");   //Pergunta
      scanf("%d", &populacao);    //onde recebe a entrada
      printf("\n");   //apenas para pular uma linha da próxima pergunta

      printf("Insira abaixo a Área da Cidade em Quilômetros Quadrados:\n");   //Pergunta
      scanf("%f", &area); //onde recebe a entrada
      printf("\n");   //apenas para pular uma linha da próxima pergunta

      printf("Insira abaixo o Produto Interno Bruto (PIB) da Cidade:\n"); //Pergunta
      scanf("%f", &PIB);  //onde recebe a entrada
      printf("\n");   //apenas para pular uma linha da próxima pergunta

      printf("Insira abaixo a Quantidade de Pontos Turísticos da Cidade:\n"); //Pergunta
      scanf("%d", &numeroDePontosTuristicos); //onde recebe a entrada
      printf("\n");   //apenas para pular uma linha da próxima pergunta
  // Área para exibição dos dados da cidade
    printf("Estado: %c\n", estado); //imprime valor armazenado no estado
    printf("Código: %c%s\n", estado, codigoDaCarta);    //imprime os valores armazenados em estado + códigodacarta
    printf("Nome da Cidade: %s\n", nomeDaCidade); //imprime o valor armazenado no nomeDaCidade
    printf("População: %d\n", populacao); //imprime o valor armazenado na populacao
    printf("Área: %.2f km²\n", area); //imprime o valor armazenado em area e aplica formatação
    printf("PIB: %.2f\n", PIB); //imprime o valor armazenado em PIB
    printf("Número de Pontos Turísticos: %d\n", numeroDePontosTuristicos); //imprime o valor armazenado em numeroDePontosTuristicos
return 0;
} 
