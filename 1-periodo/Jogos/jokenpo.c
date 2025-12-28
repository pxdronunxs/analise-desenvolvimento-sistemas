#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int escolha_usuario, escolha_computador;
srand(time(0));

printf("Jokenpo - Pedra, Papel ou Tesoura\n");
printf("Escolha uma opcao:\n");
printf("1 - Pedra\n");
printf("2 - Papel\n");
printf("3 - Tesoura\n");
scanf("%d", &escolha_usuario);

escolha_computador = (rand() % 3) + 1;

switch (escolha_usuario) {
    case 1:
        printf("Voce escolheu Pedra.\n");
        break;
    case 2:
        printf("Voce escolheu Papel.\n");
        break;
    case 3:
        printf("Voce escolheu Tesoura.\n");
        break;
    default:
        printf("Escolha invalida!\n");
        break;
}

switch (escolha_computador) {
    case 1:
        printf("Computador escolheu Pedra.\n");
        break;
    case 2:
        printf("Computador escolheu Papel.\n");
        break;
    case 3:
        printf("Computador escolheu Tesoura.\n");
        break;
}

    if (escolha_usuario == escolha_computador) {
        printf("Empate!\n");
    } else if ((escolha_usuario == 1 && escolha_computador == 3) ||
               (escolha_usuario == 2 && escolha_computador == 1) ||
               (escolha_usuario == 3 && escolha_computador == 2)) {
        printf("Voce venceu!\n");
    } else {
        printf("Computador venceu!\n");
    }

    getchar();
    getchar();

    
    return 0;
}