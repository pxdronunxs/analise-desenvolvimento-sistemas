// #include <stdio.h>

// int main() {
//   int idade = 20;
//   char* resultado;

//   resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

//   printf("Resultado: %s\n", resultado);

//   return 0;
// }

//--------------------------------------------------------------//


// #include <stdio.h>

// int main() {
//   int temperatura = 28;
//   char* estado;

//   estado = (temperatura > 30) ? "Calor" : "Frio";

//   printf("Estado: %s\n", estado);

//   return 0;
// }

//--------------------------------------------------------------//

#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20;
  int maior;

  maior = (num1 > num2) ? num1 : num2;

  printf("O maior número é: %d\n", maior);

  return 0;
}