#include <stdio.h>
int main() {

int freq;
float med, notaP;

printf("Digite sua frequencia:");
scanf("%d", &freq);

printf("Digite sua media:");
scanf("%f", &med);

printf("Digite sua nota do projeto:");
scanf("%f", &notaP);

if (freq>= 75 && (med>=7 || 5.0 <= med <= 6.9 && notaP == 10)) {;
printf("APROVADO");
}
if (!(freq>= 75 && (med>=7 || 5.0 <= med <= 6.9 && notaP == 10))) {;
printf("REPROVADO");
}
    return 0;
}

//4.	Escreva um trecho de código em C que verifique se um aluno foi aprovado. A lógica deve ser:
//•	O aluno deve ter frequencia maior ou igual a 75%.
//•	A media deve ser maior ou igual a 7.0.
//•	OU, se a média estiver entre 5.0 e 6.9, ele pode ser aprovado se a nota_projeto for igual a 10.
