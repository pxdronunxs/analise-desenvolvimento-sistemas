#include <stdio.h>

int main() {

    // simulação de movimentação das peças de xadrez

    int torre = 5;
    int bispo = 5;
    int rainha;

    // movimento da Torre: 5 casas para a direita (while)
    while (torre > 0) {
        printf("Direita\n");
        torre--;
    }

    // movimento do Bispo: 5 casas na diagonal (do-while)
    do {
        printf("Cima Direita\n");
        bispo--;
    } while (bispo > 0);

    // movimento da Rainha: 8 casas para a esquerda (for)
    for (rainha = 8; rainha > 0; rainha--) {
        printf("Esquerda\n");
    }

    return 0;
}