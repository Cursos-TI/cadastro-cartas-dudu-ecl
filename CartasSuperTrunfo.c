#include <stdio.h>

/*
===========================================================
PROGRAMA: Super Trunfo - Nível Avançado (Desafio Final)
AUTOR: Carlos Eduardo
DATA: 11/11/2025
VERSÃO: 6.0
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
    

  // ===== Menu Interativo para escolha dos atributos =====
    int opcao1, opcao2;
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");

    // Escolha do primeiro atributo
    printf("Escolha o PRIMEIRO atributo para comparar (1-5): ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo, impedindo repetição
    do {
        printf("Escolha o SEGUNDO atributo para comparar (1-5, diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao2 == opcao1)
            printf("❌ Você já escolheu esse atributo! Escolha outro.\n");
    } while (opcao2 == opcao1);

    // ===== Área de comparação entre as cartas =====
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;
    float soma1, soma2;

    // --- Atributo 1 ---
    switch (opcao1) {
        case 1:
            printf("\n=== Comparação 1: População ===\n");
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            break;
        case 2:
            printf("\n=== Comparação 1: Área ===\n");
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;
        case 3:
            printf("\n=== Comparação 1: PIB ===\n");
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;
        case 4:
            printf("\n=== Comparação 1: Pontos Turísticos ===\n");
            valor1_attr1 = pontosTuristicos1;
            valor2_attr1 = pontosTuristicos2;
            break;
        case 5:
            printf("\n=== Comparação 1: Densidade Demográfica ===\n");
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            break;
        default:
            printf("\nOpção inválida! Encerrando o programa.\n");
            return 0;
    }

    // --- Atributo 2 ---
    switch (opcao2) {
        case 1:
            printf("\n=== Comparação 2: População ===\n");
            valor1_attr2 = populacao1;
            valor2_attr2 = populacao2;
            break;
        case 2:
            printf("\n=== Comparação 2: Área ===\n");
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            break;
        case 3:
            printf("\n=== Comparação 2: PIB ===\n");
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;
        case 4:
            printf("\n=== Comparação 2: Pontos Turísticos ===\n");
            valor1_attr2 = pontosTuristicos1;
            valor2_attr2 = pontosTuristicos2;
            break;
        case 5:
            printf("\n=== Comparação 2: Densidade Demográfica ===\n");
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            break;
        default:
            printf("\nOpção inválida! Encerrando o programa.\n");
            return 0;
    }

    // ===== Exibição dos valores e cálculo das somas =====
    printf("\n%s -> Atributos: %.2f e %.2f\n", nomeCidade1, valor1_attr1, valor1_attr2);
    printf("%s -> Atributos: %.2f e %.2f\n", nomeCidade2, valor2_attr1, valor2_attr2);

    // Soma dos atributos
    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    printf("\n=== Soma dos Atributos ===\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    // Resultado final (uso do operador ternário)
    printf("\n===== RESULTADO FINAL =====\n");
    (soma1 > soma2) ? printf("🏆 %s venceu!\n", nomeCidade1)
    : (soma2 > soma1) ? printf("🏆 %s venceu!\n", nomeCidade2)
    : printf("🤝 Empate!\n");

    printf("\nObrigado por jogar Super Trunfo - Desafio Final!\n");

    // Fim do programa

return 0;
} 
