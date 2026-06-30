#include <stdio.h>
int main () {

// ATIVIDADE 1

//int n1;
//printf("digite um numero\n");
//scanf("%d", &n1);
//
//int n2 = 1;
//int soma = 0;
//
//while (n1>=n2){
//
//    soma += n2;
//    n2++;
//    
//}
//printf("a sequencia de numeros somados ate %d, eh %d\n", n1, soma);

 //ATIVIDADE 2

//int n1;
//printf("digite um numero\n");
//scanf("%d", &n1);
//
//int res;
//
//for(int n2 = 0; n2<=10; n2++) {
//    res = n1*n2;
//    printf("%d x %d = %d\n", n1, n2, res);
//}

// ATIVIDADE 3:

//int n1;
//printf("Digite um numero inteiro positivo: \n");
//scanf("%d", &n1);
//
//int res = 1;
//
//for (int fat=n1; fat>1; fat--){
//    res = res*fat;
//    
//}
//
//printf("O fatorial de %d, e igual a: %d", n1, res);

//ATIVIDADE 4:

//printf("PRIMEIROS TERMOS DA SEQUENCIA DE FIBONACCI: \n");
//
//int atual = 1;
//int anterior = 0;
//int prox;
//int termos = 8;
//
//printf("%d, %d, ", anterior, atual);
//
//for (int i=3; i<=termos; i++){
//    prox = atual+anterior;
//    printf ("%d, ", prox);
//
//    anterior = atual;
//    atual = prox;
//}
//    printf("...");
//

//ATIVIDADE 5:
//
//float nota_valida;
//
//do {
//    printf("Digite sua nota (0 a 10): ");
//    scanf("%f", &nota_valida);
//    if(nota_valida <0 || nota_valida>10) {
//        printf("ERRO: Valor invalido. \n");
//    }
//}
//while (nota_valida <0 || nota_valida>10);
//    printf("VALIDADO!, voce digitou a nota: %.1f", nota_valida);

// ATIVIDADE 6:

//printf("VERIFICACAO DE NUMERO PRIMO\n");
//
//int n1;
//printf("Digite um numero inteiro positivo: ");
//scanf("%d", &n1);
//
//int divisores = 0;
//
//int resto;
//
//    for (int n2 = 1; n2<=n1; n2++) {
//        resto = n1%n2;
//
//        if (resto == 0)
//        {
//            divisores++;
//        }
//    }
//
//if (!(divisores == 2)) {
//    return printf("O seu numero nao e primo");
//}
//else {
//    printf("O seu numero e primo");
//}

// ATIVIDADE 7

//printf("MEDIA DA TURMA \n");
//
//int num_alunos = 0;
//float nota_alunos;
//float media_arit = 0;
//
//    while (nota_alunos>=0){
//    printf("Escreva a nota do aluno: ");
//    scanf("%f", &nota_alunos);
//    if (nota_alunos >= 0) {
//        num_alunos++;
//        media_arit += nota_alunos;
//    }
//    }
//
//    media_arit = media_arit/num_alunos;
//    printf("A media aritmetica das notas da turma e igual a: %.2f", media_arit);

// ATIVIDADE 8:

//printf("TABELA DE CONVERSAO DE CELSIUS PARA FAHRENHEIT\n");
//float fahren;
//for (float cels = 0; cels<=100; cels+=5) {
//    fahren = cels*1.8+32;
//    printf("%.1f C = %.1f F\n", cels, fahren);
//}

//ATIVIDADE 9:

//int n1;
//printf("Digite o numero de linhas: ");
//scanf("%d", &n1);
//
//for (int linha = 1; linha<=n1; linha++) {
//
//    for (int coluna = 1; coluna<=linha; coluna++) {
//    printf("*");
//}
//printf("\n");
//}

//ATIVIDADE 10:

//#include <math.h>
//printf("SIMULADOR DE INVESTIMENTO\n");
//
//printf("Informe o capital inicial: ");
//float capital;
//scanf("%f", &capital);
//
//printf("Informe a taxa de juros mensal (em porcentagem): ");
//float taxa_juros;
//scanf("%f", &taxa_juros);
//taxa_juros = taxa_juros/100;
//
//printf("Informe o periodo (em meses): ");
//int periodo;
//scanf("%d", &periodo);
//
//float montante;
//
//for (int prev = 1; prev<=periodo; prev++)
//{
//    montante = capital * pow((1+taxa_juros), prev);
//    printf("O montante final do mes %d, e igual a: R$%.2f\n", prev, montante);
//    
//}

return 0;
}