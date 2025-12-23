#include <stdio.h>


// int main() {
    
//     int a = 10, b  = 5;

//     if (a > 0 && b > 0){
//         printf("Os dois números são positivos\n");
//     } else {
//         printf("Apenas um dos números é positivo\n");
//     }

// }

//--------------------------------------------------------------------------------//



// int main() {
    
//     int a = -10, b  = 5;

//     if (a > 0 && b > 0){
//         printf("Um dos números é positivo.\n");
//     } else {
//         printf("Os dois números são negativos.\n");
//     }

// }

//--------------------------------------------------------------------------------//

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (!(numero > 0)) {
        printf("O numero NAO e positivo\n");
    } else {
        printf("O numero e positivo\n");
    }

    return 0;
}