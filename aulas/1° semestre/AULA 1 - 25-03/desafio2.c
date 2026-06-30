#include <stdio.h>
int main() {
    char nome[50] = "Vinicius Jose Orsi";
    char disciplina[50] = "Logica";
    float nota_1 = 8.5;
    float nota_2 = 5;

    float media = ((nota_1*3) + (nota_2*7))/10;
    char turma = 'C';

    printf("---BOLETIM ESCOLAR--- \n");
    printf("Nome do aluno: %s\n", nome);
    printf("Disciplina: %s\n", disciplina);
    printf("Nota AC1: %.1f\n", nota_1);
    printf("Nota P1: %.1f\n", nota_2);
    printf("Media do Aluno: %.2f\n", media);
    printf("Turma do aluno: %c\n", turma);

    return 0;
}