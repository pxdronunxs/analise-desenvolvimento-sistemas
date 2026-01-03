#include <stdio.h>

void loopRecursivo(int n) {
    if (n > 0) {
        printf("%d ", n);
        loopRecursivo(n - 1);
    }
}

int main() {
    int numero = 5;
    printf("Contagem Regressiva: ");
    loopRecursivo(numero);
    return 0;
    
}