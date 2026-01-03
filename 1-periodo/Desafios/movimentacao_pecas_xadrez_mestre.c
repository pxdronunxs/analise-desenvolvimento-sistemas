#include <stdio.h>

//================= TORRE (RECURSIVA) =================
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1);
}

//================= BISPO (RECURSIVO + LOOPS ANINHADOS) =================
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    int horizontal = 1;

    //Loop interno: movimento horizontal
    while (horizontal > 0) {
        printf("Cima ");
        horizontal--;
    }

    printf("Direita\n");

    //Chamada recursiva controla o movimento vertical
    moverBispo(casas - 1);
}

//================= RAINHA (RECURSIVA) =================
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

//================= CAVALO (LOOPS COMPLEXOS) =================
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    //Loop externo: movimento vertical
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Cima\n");

        if (i == movimentosVerticais - 1) {
            break;
        }
    }

    //Loop horizontal
    int j = 0;
    while (j < movimentosHorizontais) {
        printf("Direita\n");
        j++;
    }
}

int main(void) {

    //Torre
    moverTorre(5);
    printf("\n");

    //Bispo
    moverBispo(5);
    printf("\n");

    //Rainha 
    moverRainha(8);
    printf("\n");

    //Cavalo
    moverCavalo();

    return 0;
}
