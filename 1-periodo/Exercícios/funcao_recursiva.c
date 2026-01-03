#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0) {
        printf("%d \n", numero);

        recursivo(numero - 1);
    } 
}

int main() {

    int tamanho = 10;

    printf("Contagem Regressiva...");
    recursivo(tamanho);

    return 0;
}