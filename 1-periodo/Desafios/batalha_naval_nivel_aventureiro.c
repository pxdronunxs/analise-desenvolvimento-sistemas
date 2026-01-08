#include <stdio.h>

int main() {

    // inicializa o tabuleiro com água (0)
    int tabuleiro[10][10] = {0};

    int tamanhoNavio = 3;

    // coordenadas iniciais
    int linhaH = 2, colunaH = 4; // navio horizontal
    int linhaV = 5, colunaV = 1; // navio vertical

    // posicionamento do navio horizontal
    if (colunaH + tamanhoNavio <= 10) {
        int podeColocar = 1;

        // verificar sobreposição
        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaH][colunaH + i] != 0) {
                podeColocar = 0;
            }
        }

        // se não houver sobreposição, posiciona
        if (podeColocar) {
            for (int i = 0; i < tamanhoNavio; i++) {
                tabuleiro[linhaH][colunaH + i] = 3;
            }
        }
    }

    // posicionamento do navio vertical
    if (linhaV + tamanhoNavio <= 10) {
        int podeColocar = 1;

        for (int i = 0; i < tamanhoNavio; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                podeColocar = 0;
            }
        }

        if (podeColocar) {
            for (int i = 0; i < tamanhoNavio; i++) {
                tabuleiro[linhaV + i][colunaV] = 3;
            }
        }
    }

    

    // impressão da interface
    printf("    ");
    for (char letras = 'A'; letras <= 'J'; letras++) {
        printf("%c ", letras);
    }
    printf("\n");

    // impressão do tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d - ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
