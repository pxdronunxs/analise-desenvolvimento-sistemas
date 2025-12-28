#include <stdio.h>

int main() {
    char produto1[30] = "1";
    char produto2[30] = "2";

    unsigned int estoque1 = 1000;
    unsigned int estoque2 = 2000;

    float valor1 = 10.50;
    float valor2 = 20.40;

    unsigned int estoqueMin1 = 500;
    unsigned int estoqueMin2 = 2500;

    double valorTotal1 = estoque1 * valor1;
    double valorTotal2 = estoque2 * valor2;

    printf("Produto %s: estoque %u, valor unitário R$ %.2f\n", produto1, estoque1, valor1);
    printf("Produto %s: estoque %u, valor unitário R$ %.2f\n", produto2, estoque2, valor2);

    printf("Produto %s acima do estoque mínimo? %s\n",
           produto1, estoque1 > estoqueMin1 ? "Sim" : "Não");

    printf("Produto %s acima do estoque mínimo? %s\n",
           produto2, estoque2 > estoqueMin2 ? "Sim" : "Não");

    printf("Valor total do produto %s (R$ %.2f) é maior que o do produto %s (R$ %.2f)? %s\n",
           produto1, valorTotal1,
           produto2, valorTotal2,
           valorTotal1 > valorTotal2 ? "Sim" : "Não");

    return 0;
}
