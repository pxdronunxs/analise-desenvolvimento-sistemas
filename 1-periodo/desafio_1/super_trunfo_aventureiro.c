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
    float super_poder1;


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

    // calcular o sper poder
    // nao sera mais necessario calcular o super poder
    /*super_poder1 =
    (float) populacao1 +
    area1 +
    pib1 +
    (float) pontos_turisticos1 +
    pib_percapta1 +
    (1.0f / densidade1);*/


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
    float super_poder2;

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
    //PIB informado em bilhoes de reais e convertido para reais no calculo do PIB per capita*/

    // calcular o super poder
    /*super_poder2 =
    (float) populacao2 +
    area2 +
    pib2 +
    (float) pontos_turisticos2 +
    pib_percapta2 +
    (1.0f / densidade2);*/

    // declarando variaveis das cartas vencedoras + comparacao
    
    

    //nao sera necessario

    /*int v_populacao = populacao1 > populacao2;
    int v_area = area1 > area2;
    int v_pib = pib1 > pib2;
    int v_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    int v_densidade = densidade1 < densidade2;
    int v_pib_per_capita = pib_percapta1 > pib_percapta2;
    int v_super_poder = super_poder1 > super_poder2;*/



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
    int opcao;

    printf("Escolha uma opção:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &opcao);

  switch (opcao) {
    case 1:
        if (populacao1 > populacao2) {
            printf("Atributo escolhido: População\n");
            printf("Carta 1 (%s): %lu\n", cidade1, populacao1);
            printf("Carta 2 (%s): %lu\n", cidade2, populacao2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Atributo escolhido: População\n");
            printf("Carta 2 (%s): %lu\n", cidade2, populacao2);
            printf("Carta 1 (%s): %lu\n", cidade1, populacao1);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 2:
        if (area1 > area2) {
            printf("Atributo escolhido: Área\n");
            printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (area2 > area1) {
            printf("Atributo escolhido: Área\n");
            printf("Carta 2 (%s): %.2f km²\n", cidade2, area2);
            printf("Carta 1 (%s): %.2f km²\n", cidade1, area1);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 3:
        if (pib1 > pib2) {
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1 (%s): %.2f bilhões de reais\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhões de reais\n", cidade2, pib2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Atributo escolhido: PIB\n");
            printf("Carta 2 (%s): %.2f bilhões de reais\n", cidade2, pib2);
            printf("Carta 1 (%s): %.2f bilhões de reais\n", cidade1, pib1);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 4:
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Atributo escolhido: Número de pontos turísticos\n");
            printf("Carta 1 (%s): %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 (%s): %d\n", cidade2, pontos_turisticos2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (pontos_turisticos2 > pontos_turisticos1) {
            printf("Atributo escolhido: Número de pontos turísticos\n");
            printf("Carta 2 (%s): %d\n", cidade2, pontos_turisticos2);
            printf("Carta 1 (%s): %d\n", cidade1, pontos_turisticos1);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    case 5:
        if (densidade1 < densidade2) {
            printf("Atributo escolhido: Densidade demográfica\n");
            printf("Carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
            printf("Carta 2 (%s): %.2f hab/km²\n", cidade2, densidade2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
        } else if (densidade2 < densidade1) {
            printf("Atributo escolhido: Densidade demográfica\n");
            printf("Carta 2 (%s): %.2f hab/km²\n", cidade2, densidade2);
            printf("Carta 1 (%s): %.2f hab/km²\n", cidade1, densidade1);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
        break;
    default:
        printf("Opção inválida!\n");
  }

    printf("\n\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}