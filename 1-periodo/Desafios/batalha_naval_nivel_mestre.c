#include <stdio.h>
//definir tamanho das linhas e colunas das habilidades
#define LINHAS 5
#define COLUNAS 5


int main() {

    //definir variável do "centro" da matriz de cada habilidade
    int centroLinha = LINHAS / 2;
    int centroColuna = COLUNAS / 2;
    // inicializa o tabuleiro com água (0)
    int tabuleiro[10][10] = {0};
    //definindo matrizes das habilidades
    int habilidadeCone[LINHAS][COLUNAS] = {0};
    int habilidadeCruz[LINHAS][COLUNAS] = {0};
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (i == centroLinha || j == centroColuna) {
                habilidadeCruz[i][j] = 1;
            }
        }
    }
    int habilidadeOctaedro[LINHAS][COLUNAS] = {0};


    int tamanhoNavio = 3;

    // coordenadas iniciais
    int linhaH = 2, colunaH = 4; // navio horizontal
    int linhaV = 5, colunaV = 1; // navio vertical
    int linhaD = 5, colunaD = 3; // 1º navio diagonal
    int linhaDD = 0, colunaDD = 3; // 2º navio diagonal

    // posicionamento do 1º navio diagonal
    if (linhaD + tamanhoNavio <= 10 && colunaD + tamanhoNavio <= 10) {

    int podeColocar = 1;

    // verificar sobreposição
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaD + i][colunaD + i] != 0) {
            podeColocar = 0;
        }
    }

    // se não houver sobreposição, posiciona
    if (podeColocar) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaD + i][colunaD + i] = 3;
        }
    }
}

    // posicionamento do 2º navio diagonal
    if (linhaDD + tamanhoNavio <= 10 && colunaDD + tamanhoNavio <= 10) {

    int podeColocar = 1;

    //verificar sobreposição
    for (int i = 0; i < tamanhoNavio; i++) {
        if (tabuleiro[linhaDD + i][colunaDD - i] != 0) {
            podeColocar = 0;
        }
    }
    // se nao houver sobreposicao, posiciona
    if (podeColocar) {
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaDD + i][colunaDD - i] = 3;
        }
    }
        
}


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
