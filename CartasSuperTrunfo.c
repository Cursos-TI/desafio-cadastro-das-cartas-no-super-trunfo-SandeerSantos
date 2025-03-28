#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



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
}
