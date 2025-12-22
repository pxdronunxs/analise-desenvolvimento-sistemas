#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo;

    printf("Informe a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Informe a umidade: \n");
    scanf("%f", &umidade);

    printf("Informe o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura < 30) {
        printf("Temperatura alta.\n");
    } else {
        printf("Temperatura normal\n");
    }

    if (umidade > 50) {
        printf("Umidade elevada.\n");
    } else {
        printf("Umidade normal\n");
    }

    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo.\n");
    } else {
        printf("Estoque normal.");
    }
}