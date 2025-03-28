#include <stdio.h>

/*Informações importante:
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
scanf(''formato'', &variavel);*/


int main (){

// CARTA 01 - Variaveis

    char estado1, codigo1 [4], cidade1 [50];
    int populacao1, turisticos1;
    float area1, pib1;

// CARTA 02 - Variaveis

    char estado2, codigo2 [4], cidade2 [50];
    int populacao2, turisticos2;
    float area2, pib2;


// DADOS E/S

printf("Jogo Trunfo\n");

printf("Prencha os dados da carta01\n");
printf("Qual a inicial do estado?\n");
scanf(" %c", &estado1);
printf("Qual o Código da Carta01?\n");
scanf(" %s", codigo1);
printf("Qual o nome da Cidade?\n");
scanf("%s", cidade1);
printf("Qual a quantidade de habitantes da cidade?\n");
scanf(" %d", &populacao1);
printf("Qual a area da Cidade em quilometros quadrado?\n");
scanf("%f", &area1);
printf("Qual é o PIB da cidade?\n");
scanf("%f", &pib1);
printf("Quantos Pontos Turisticos tem na Cidade?\n");
scanf("%d", &turisticos1);

printf("---------------------------------------------------\n");

printf("Prencha os dados da carta02\n");
printf("Qual a inicial do estado?\n");
scanf(" %c", &estado2);
printf("Qual o Código da Carta02?\n");
scanf(" %s", codigo2);
printf("Qual o nome da Cidade?\n");
scanf("%s", cidade2);
printf("Qual a quantidade de habitantes da cidade?\n");
scanf("%d", &populacao2);
printf("Qual a area da Cidade em quilometros quadrado?\n");
scanf("%f", &area2);
printf("Qual é o PIB da cidade?\n");
scanf("%f", &pib2);
printf("Quantos Pontos Turisticos tem na Cidade?\n");
scanf("%d", &turisticos2);


printf("CARTA01:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacão: %d\n", populacao1);
printf("Área: %f km²\n",area1);
printf("PIB: %f\n", pib1);
printf("Números de pontos Turisticos: %d\n", turisticos1);

printf("----------------------------------------\n");

printf("CARTA02:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacão: %d\n", populacao2);
printf("Área: %f km²\n",area2);
printf("PIB: %f\n", pib2);
printf("Números de pontos Turisticos: %d\n", turisticos2);


return 0;

};