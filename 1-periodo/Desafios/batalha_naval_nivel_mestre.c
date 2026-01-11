#include <stdio.h>
#include <stdlib.h>

//definir tamanho das linhas e colunas das habilidades
#define LINHAS 5
#define COLUNAS 5

int main() {
    //definir variável do "centro" da matriz de cada habilidade
    int centroLinha = LINHAS / 2;
    int centroColuna = COLUNAS / 2;
    // inicializa o tabuleiro com água (0)
    int tabuleiro[10][10] = {0};
    //definindo matrizes das habilidades e lógicas

    int habilidadeCone[LINHAS][COLUNAS] = {0};
    //origem da habilidade cone + lógica da habilidade
    int origemLinhaCone = 6;
    int origemColunaCone = 7;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (j >= centroColuna - i && j <= centroColuna + i) {
                habilidadeCone[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (habilidadeCone[i][j] == 1) {
                int linhaTab = origemLinhaCone + i;
                int colunaTab = origemColunaCone + (j - centroColuna);
                if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                    if (tabuleiro[linhaTab][colunaTab] == 0) {
                        tabuleiro[linhaTab][colunaTab] = 5;
                    }
                }
            }
        }
    }

    //marcando origem de linha e coluna para a habilidade cruz
    // lógica da habilidade
    int habilidadeCruz[LINHAS][COLUNAS] = {0};
    int origemLinhaCruz = 3;
    int origemColunaCruz = 7;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (i == centroLinha || j == centroColuna) {
                habilidadeCruz[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (habilidadeCruz[i][j] == 1) {
                int linhaTab = origemLinhaCruz + (i - centroLinha);
                int colunaTab = origemColunaCruz + (j - centroColuna);

                //verificar limites do tabuleiro
                if (linhaTab >= 0 && linhaTab < 10 && colunaTab >= 0 && colunaTab < 10) {
                    //marcar se for agua(0)
                    if (tabuleiro[linhaTab][colunaTab] == 0) {
                        tabuleiro[linhaTab][colunaTab] = 5;
                    }
                }
            }
        }
    }

    // montar a matriz do octaedro
    int habilidadeOctaedro[LINHAS][COLUNAS] = {0};

    int origemLinhaOct = 4;
    int origemColunaOct = 4;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (abs(i - centroLinha) + abs(j - centroColuna) <= centroLinha) {
                habilidadeOctaedro[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (habilidadeOctaedro[i][j] == 1) {
                int linhaTab = origemLinhaOct + (i - centroLinha);
                int colunaTab = origemColunaOct + (j - centroColuna);

                if (linhaTab >= 0 && linhaTab < 10 &&
                    colunaTab >= 0 && colunaTab < 10) {

                    if (tabuleiro[linhaTab][colunaTab] == 0) {
                        tabuleiro[linhaTab][colunaTab] = 5;
                    }
                }
            }
        }
    }

    int tamanhoNavio = 3;

    // coordenadas iniciais
    int linhaH = 2, colunaH = 4;   // navio horizontal
    int linhaV = 5, colunaV = 1;   // navio vertical
    int linhaD = 5, colunaD = 3;   // 1º navio diagonal
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
