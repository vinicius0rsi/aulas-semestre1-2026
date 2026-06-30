#include <stdio.h>

int main() {
    float frequencia; 
    printf("Digite sua frequencia (em %%): \n");
    scanf("%f", &frequencia);
    
    // Em C, usamos int para valores booleanos (0 ou 1)
    int prova_freq = frequencia >= 75;

    float media1, media2;
    printf("Digite sua media 1: \n");
    scanf("%f", &media1);
    printf("Digite sua media 2: \n");
    scanf("%f", &media2);

    float media_final = (media1 + media2) / 2;

    // não se pode usar 5 <= media <= 6.9. 
    // É preciso separar com o operador && (E).
    int exame_media = (media_final >= 5 && media_final <= 6.9);
    int media7 = media_final >= 7;

    float nota_projeto;
    printf("Digite sua nota do projeto: \n");
    scanf("%f", &nota_projeto);

    int proj10 = (nota_projeto == 10);

   
    if (prova_freq && (media7 || (exame_media && proj10))) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}

//4.	Escreva um trecho de código em C que verifique se um aluno foi aprovado. A lógica deve ser:
//•	O aluno deve ter frequencia maior ou igual a 75%.
//•	A media deve ser maior ou igual a 7.0.
//•	OU, se a média estiver entre 5.0 e 6.9, ele pode ser aprovado se a nota_projeto for igual a 10.

