#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int opcao;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      srand(time(0));
      numeroSecreto = rand() % 10;
      printf("Digite um numero de 0 a 9: ");
      scanf("%d", &palpite);
      if (numeroSecreto == palpite)
      {
        printf("Voce acertou!\n");
        printf("numero secreto %d\n", numeroSecreto);
      } else {
        printf("Voce errou!\n");
        printf("numero secreto %d\n", numeroSecreto);
      }
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. sei lá\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}