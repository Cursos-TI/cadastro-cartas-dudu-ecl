#include <stdio.h>

/*
===========================================================
PROGRAMA: Super Trunfo - Nível Intermediário
AUTOR: Carlos Eduardo
DATA: 10/11/2025
VERSÃO: 5.0
LINGUAGEM: C

===========================================================
DESCRIÇÃO GERAL:
Este programa simula a comparação entre duas cartas do jogo 
Super Trunfo, representando cidades ou países, utilizando 
atributos como população, área, PIB, número de pontos turísticos 
e densidade demográfica.

Nesta versão, o sistema foi aprimorado com a adição de um 
menu interativo, permitindo ao jogador escolher qual atributo 
será usado para comparar as cartas. A interface do menu foi 
desenvolvida utilizando a estrutura de decisão "switch", e 
a lógica de comparação entre os atributos utiliza estruturas 
"if" e "if-else" aninhadas para criar regras específicas 
para cada tipo de atributo.

===========================================================
FUNCIONALIDADES PRINCIPAIS:

1. Cadastro das Cartas:
   - O jogador insere os dados de duas cartas, incluindo:
     • Estado
     • Código da carta
     • Nome da cidade
     • População
     • Área (km²)
     • PIB (em bilhões de reais)
     • Número de pontos turísticos

2. Cálculos Automáticos:
   - O programa calcula automaticamente:
     • Densidade Demográfica = População / Área
     • PIB per Capita = (PIB × 1.000.000.000) / População

3. Menu Interativo com "switch":
   - Após o cadastro, o jogador escolhe o atributo de comparação:
       1 - População
       2 - Área
       3 - PIB
       4 - Número de Pontos Turísticos
       5 - Densidade Demográfica
       6 - Sair
   - A opção “6 - Sair” encerra o programa de forma amigável.

4. Regras de Comparação:
   - Regra geral: vence a carta com o MAIOR valor do atributo escolhido.
   - Exceção: para a Densidade Demográfica, vence a carta com o MENOR valor.
   - Em caso de igualdade, o programa exibe a mensagem “Empate!”.

===========================================================
CONCEITOS DE PROGRAMAÇÃO UTILIZADOS:
- Entrada e saída de dados (scanf, printf)
- Estruturas de decisão:
  • if, else if, else
  • switch para seleção de opções no menu
- Operações matemáticas:
  • Cálculo de densidade demográfica e PIB per capita
- Tratamento de opções inválidas com "default" no switch

===========================================================
OBJETIVO DO NÍVEL:
Desenvolver a lógica de decisão e interação com o usuário,
introduzindo o uso combinado de "switch" e "if-else" aninhados,
além de reforçar boas práticas de programação como:
• Código limpo e bem comentado
• Saídas claras e intuitivas
• Organização das etapas do programa
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
    

  // ===== Menu Interativo com opção de sair =====
    int opcao;
        printf("\n=== MENU DE COMPARACAO ===\n");
        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Numero de Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("6 - Sair\n");
        printf("Escolha um atributo para comparar (1-6): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // População
                printf("\n=== Comparacao: Populacao ===\n");
                printf("%s: %d habitantes\n", nomeCidade1, populacao1);
                printf("%s: %d habitantes\n", nomeCidade2, populacao2);

                if (populacao1 > populacao2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (populacao2 > populacao1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 2: // Área
                printf("\n=== Comparacao: Area ===\n");
                printf("%s: %.2f km²\n", nomeCidade1, area1);
                printf("%s: %.2f km²\n", nomeCidade2, area2);

                if (area1 > area2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (area2 > area1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 3: // PIB
                printf("\n=== Comparacao: PIB ===\n");
                printf("%s: %.2f bilhões de R$\n", nomeCidade1, pib1);
                printf("%s: %.2f bilhões de R$\n", nomeCidade2, pib2);

                if (pib1 > pib2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (pib2 > pib1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 4: // Pontos turísticos
                printf("\n=== Comparacao: Pontos Turisticos ===\n");
                printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
                printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("Resultado: %s venceu!\n", nomeCidade1);
                } else if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Resultado: %s venceu!\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 5: // Densidade Demográfica (menor vence)
                printf("\n=== Comparacao: Densidade Demografica ===\n");
                printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
                printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);

                if (densidade1 < densidade2) {
                    printf("Resultado: %s venceu! (menor densidade)\n", nomeCidade1);
                } else if (densidade2 < densidade1) {
                    printf("Resultado: %s venceu! (menor densidade)\n", nomeCidade2);
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;

            case 6:
                printf("\nSaindo do programa... Obrigado por jogar Super Trunfo!\n");
                break;

            default:
                printf("\nOpcao invalida! Escolha um número entre 1 e 6.\n");
                break;
        }

return 0;
} 
