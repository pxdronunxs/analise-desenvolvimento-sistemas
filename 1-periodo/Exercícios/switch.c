#include <stdio.h>

// int main() {
//   int opcao;

//   printf("Menu Principal\n");
//   printf("1. Iniciar Jogo\n");
//   printf("2. Ver Regras\n");
//   printf("3. Sair\n");
//   printf("Escolha uma opção: \n");
//   scanf("%d", &opcao);

//   switch (opcao) {
//     case 1:
//       printf("Iniciando o jogo...\n");
//       // Código para iniciar o jogo
//       break;
//     case 2:
//       printf("Regras do Jogo:\n");
//       printf("1. Regra 1\n");
//       printf("2. Regra 2\n");
//       printf("3. Regra 3\n");
//       // Código para exibir as regras
//       break;
//     case 3:
//       printf("Saindo...\n");
//       break;
//     default:
//       printf("Opção inválida. Tente novamente.\n");
//   }

//   return 0;
// }

//-----------------------------------------------------------------//

int main() {
  int opcao;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("Saldo atual: R$ 1.000,00\n");
      break;
    case 2:
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}