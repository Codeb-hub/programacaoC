#include <stdio.h>
int main(){

    int index; //índice

    char * nomesAlunos [3][3]={
        {"Aluno0","Pt: 30","Mt:90"},
        {"Aluno1","Pt:60","Mt:60"},
        {"Aluno2","Pt:90","Mt:30"}
    };

    printf("Digite o número do aluno que queira ver as notas:\n");
    printf("Aluno 0, digite 0\n");
    printf("Aluno 1, digite 1\n");
    printf("Aluno 2, digite 2\n");

    scanf("%d", &index);

    printf("As notas do %s são: %s , %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);

    return 0;
}