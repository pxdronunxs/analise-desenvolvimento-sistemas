#include <stdio.h>

int main () {
    printf("Movimentação de Peças de Xadrez\n");

    int torre = 5;
    int bispo = 5;
    int rainha;

    while (torre > 0) {
        printf("Torre: Direita\n");
        torre--;
    }

    do {
        printf("Bispo: Cima, Direita\n");
        bispo--;
    } while (bispo > 0);

    for (rainha = 8; rainha > 0; rainha--) {
        printf("Rainha: Esquerda\n");
    }

    return 0;
}
