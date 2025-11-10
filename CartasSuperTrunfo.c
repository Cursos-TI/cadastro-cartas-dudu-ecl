#include <stdio.h>

/*
===========================================================
PROGRAMA: Super Trunfo - Nível Intermediário
AUTOR: Carlos Eduardo
DATA: 10/11/2025
VERSÃO: 4.0
LINGUAGEM: C

DESCRIÇÃO:
Este programa cadastra duas cartas do jogo Super Trunfo, 
armazenando informações sobre cidades. Em seguida, ele calcula
a Densidade Populacional e o PIB per Capita de cada cidade,
e compara as cartas com base no atributo "População".

A carta com a MAIOR população vence.

O código não utiliza estruturas de repetição (for, while).

===========================================================
*/

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;     // Super Poder da carta (soma dos atributos numéricos)

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

  // Área para entrada de dados
  // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Para lêr a string com espaços

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Densidade populacional e PIB per Capita da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    
  // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);  // Para lêr a string com espaços

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Densidade populacional e PIB per Capita da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    

  // Área para exibição das comparações das Cartas
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomeCidade2, estado2, populacao2);

  // Lógica de comparação usando if e if-else
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate! As duas cidades possuem a mesma populacao.\n");
    }

return 0;
} 
