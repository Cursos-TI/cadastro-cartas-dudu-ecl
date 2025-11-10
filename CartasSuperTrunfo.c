#include <stdio.h>

/*
===========================================================
PROGRAMA: Super Trunfo - Nível Intermediário
AUTOR: Carlos Eduardo
DATA: 09/11/2025
VERSÃO: 3.0
LINGUAGEM: C

DESCRIÇÃO:
Este programa permite ao usuário cadastrar e exibir informações
de duas cartas do jogo Super Trunfo. Para cada cidade, são
armazenados e exibidos os seguintes dados:

- Estado (A-H)
- Código da carta (ex: A01, B03)
- Nome da cidade
- População
- Área (em km²)
- PIB (em bilhões de reais)
- Número de pontos turísticos

Além disso, o programa calcula e exibe:
- Densidade Populacional = População / Área
- PIB per Capita = (PIB * 1.000.000.000) / População
- Super Poder (soma dos atributos numéricos, incluindo o inverso da densidade)

Em seguida, ele compara as cartas atributo por atributo, 
mostrando qual carta vence em cada aspecto.

O código não utiliza estruturas de repetição (for, while) nem
estruturas de decisão (if, else), sendo uma sequência linear
de instruções.

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

    // Cálculos da Densidade populacional, PIB per Capita e Super Poder da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

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

    // Cálculos da Densidade populacional, PIB per Capita e Super Poder da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

  // Área para exibição das comparações
  printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2 ? 0 : 1);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0;
} 
