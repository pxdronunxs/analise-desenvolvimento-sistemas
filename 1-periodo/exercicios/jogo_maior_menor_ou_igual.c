#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char comparacao;

    srand(time(0));
    numeroComputador = rand() % 100 + 1;

    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação:\n");
    printf("M. para Maior\n");
    printf("m. para Menor\n");
    printf("I. para Igual\n");
    scanf(" %c", &comparacao);

    printf("Digite seu número (1-100): ");
    scanf("%d", &numeroJogador);

    printf("Número do Computador: %d\n", numeroComputador);

    switch (comparacao)
    {
    case 'M':
        printf("Você escolheu Maior.\n");
        resultado = (numeroJogador > numeroComputador) ? 1 : 0;
        break;
    case 'm':
        printf("Você escolheu Menor.\n");
        resultado = (numeroJogador < numeroComputador) ? 1 : 0;
        break;
    case 'I':
        printf("Você escolheu Igual.\n");
        resultado = (numeroJogador == numeroComputador) ? 1 : 0;
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    printf("O numero do jogador foi: %d e o numero do computador foi: %d\n", numeroJogador, numeroComputador);

    if (resultado == 1) {
        printf("Parabéns! Você venceu!\n");
    } else {
        printf("Que pena! Você perdeu!\n");
    }
    return 0;
}