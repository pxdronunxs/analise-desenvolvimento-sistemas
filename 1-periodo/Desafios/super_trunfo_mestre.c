#include <stdio.h>

// declarando variáveis da primeira carta

int main(){
    char estado1;
    char codigo1[5];
    char cidade1[35];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_percapta1;


    printf("=== CADASTRO CARTA 1 ===\n");

    printf("Estado (Letras de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex.: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %34[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // calculando densidade e pib per capita carta1

    densidade1 = (float) populacao1 / area1;
    pib_percapta1 = (float) (pib1 * 1000000000) / populacao1;
    // PIB informado em bilhoes de reais e convertido para reais no calculo do PIB per capita



// declarando variáveis da segunda carta

    char estado2;
    char codigo2[5];
    char cidade2[35];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_percapta2;

    printf("\n=== CADASTRO CARTA 2 ===\n");

    printf("Estado (Letras de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex.: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %34[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // calculando densidade e pib per capita carta2

    densidade2 = (float) populacao2 / area2;
    pib_percapta2 = (float) (pib2 * 1000000000) / populacao2;
    //PIB informado em bilhoes de reais e convertido para reais no calculo do PIB per capita



// imprimir os dados na tela

    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per capita: R$ %.2f por pessoa\n", pib_percapta1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per capita: R$ %.2f por pessoa\n", pib_percapta2);

    //imprimir comparação de cartas

    printf("\n=== COMPARAÇÃO DE CARTAS POR ATRIBUTO ===\n\n");
    printf("Escolha o primeiro atributo para comparar entre as cartas:\n");
    int opcao;

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &opcao);

    int opcao2;

    printf("\nEscolha o segundo atributo para comparar entre as cartas(diferente do primeiro):\n");
    if (opcao != 1) printf("1. Populacao\n");
    if (opcao != 2) printf("2. Area\n");
    if (opcao != 3) printf("3. PIB\n");
    if (opcao != 4) printf("4. Numero de pontos turísticos\n");
    if (opcao != 5) printf("5. Densidade demográfica\n");
    scanf("%d", &opcao2);

    if (opcao == opcao2) {
        printf("Opcao inválida! Os atributos devem ser diferentes.\n");
        return 0;
    }

    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;



  switch (opcao) {
    case 1:
        valor1_carta1 = populacao1;
        valor1_carta2 = populacao2;
        break;
    case 2:
        valor1_carta1 = area1;
        valor1_carta2 = area2;
        break;
    case 3:
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        break;
    case 4:
        valor1_carta1 = pontos_turisticos1;
        valor1_carta2 = pontos_turisticos2;
        break;
    case 5:
        valor1_carta1 = 1 / densidade1;
        valor1_carta2 = 1 / densidade2;
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
  }

    switch (opcao2) {
    case 1:
        valor2_carta1 = populacao1;
        valor2_carta2 = populacao2;
        break;
    case 2:
        valor2_carta1 = area1;
        valor2_carta2 = area2;
        break;
    case 3:
        valor2_carta1 = pib1;
        valor2_carta2 = pib2;
        break;
    case 4:
        valor2_carta1 = pontos_turisticos1;
        valor2_carta2 = pontos_turisticos2;
        break;
    case 5:
        valor2_carta1 = 1 / densidade1;
        valor2_carta2 = 1 / densidade2;
        break;
    default:
        printf("Opção inválida!\n");
        return 0;
}

printf("\nAtributos escolhidos:\n");
printf("Atributo 1: opção %d\n", opcao);
printf("Atributo 2: opção %d\n", opcao2);

float soma1 = valor1_carta1 + valor2_carta1;
float soma2 = valor1_carta2 + valor2_carta2;

printf("\nSoma dos atributos:\n");
printf("Carta 1 (%s): %.2f\n", cidade1, soma1);
printf("Carta 2 (%s): %.2f\n", cidade2, soma2);

if (soma1 > soma2) {
    printf("\nResultado final: Carta 1 (%s) venceu!\n", cidade1);
} else if (soma2 > soma1) {
    printf("\nResultado final: Carta 2 (%s) venceu!\n", cidade2);
} else {
    printf("\nResultado final: Empate!\n");
}

    printf("\n\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
