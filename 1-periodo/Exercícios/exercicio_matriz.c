#include <stdio.h>

int main() {
    
    int index;

    char * nomesAlunos[3][3] = {
        {"Aluno 0", "Portugês: 30", "Matemática: 90"},
        {"Aluno 1", "Portugês: 60", "Matemática: 60"},
        {"Aluno 2", "Portugês: 90", "Matemática: 30"}
    };

    printf("Digite o número do aluno para visualizar notas...\n");
    printf("Para Aluno 0, digite 0\n");
    printf("Para Aluno 1, digite 1\n");
    printf("Para Aluno 2, digite 2\n");

    scanf("%d", &index);

    printf("As notas do %s são: %s , %s. \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}