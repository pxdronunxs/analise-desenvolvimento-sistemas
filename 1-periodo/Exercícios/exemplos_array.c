// #include <stdio.h>

// int main(void) {
    
//     float notas[3] = {85.5, 90.0, 78.3};

//     printf("Nota do aluno 1 é: %.1f \n", notas[0]);
//     printf("Nota do aluno 2 é: %.1f \n", notas[1]);
//     printf("Nota do aluno 3 é: %.1f \n", notas[2]);
    
//     return 0;
// }

/*=====================================================*/

// #include <stdio.h>

// int main(void) {
    
//     char letras[4] = {'A', 'B', 'C', 'D'};

//     printf("Primeira letra: %c \n", letras[0]);
//     printf("Segunda letra: %c \n", letras[1]);
//     printf("Terceira letra: %c \n", letras[2]);
//     printf("Quarta letra: %c \n", letras[3]);

//     return 0;
// }

/*=====================================================*/

#include <stdio.h>

int main() {
    
    char *nomes[] = {"Pedro", "Esther", "Aurora"};

    for (int i = 0; i <= 2; i++)
    {
        printf("%s \n", nomes[i]);
    }

    return 0;
}