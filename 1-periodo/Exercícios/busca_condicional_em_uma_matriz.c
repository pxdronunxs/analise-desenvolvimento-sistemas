#include <stdio.h>
#define LINHA 3
#define COLUNA 3

int main(void) {
    
    int matriz[LINHA][COLUNA];
    int target = 5;
    int found = 0;
    int soma = 1;

    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("Elemento %d não encontrado na matriz\n", target);
    }

    return 0;
}