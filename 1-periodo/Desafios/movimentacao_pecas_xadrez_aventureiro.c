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
    // linha em branco pra separar o movimento do cavalo
        printf("\n");

    // movimento do Cavalo: 2 casas para baixo e 1 para esquerda
    int casas_baixo = 2;
    int casas_esquerda = 1;

    // loop externo (for): controla a sequencia do movimento em "L"

    for (int movimento = 0; movimento < 1; movimento++) {
        // loop interno (while): movimento 2 casas para baixo
        while (casas_baixo > 0) {
            printf("Baixo\n");
            casas_baixo--;
        }

        // movimento final do "L": 1 casa para a esquerda
        printf("Esquerda\n");
        casas_esquerda--;
    }

    return 0;
}