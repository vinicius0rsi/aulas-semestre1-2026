#include <stdio.h>
int main () {

// ATIVIDADE 1
//
//  int n1;
//printf("Informe um numero: ");
//scanf("%d", &n1);
//
//int soma = 0;
//
//for (int n2 = 1; n2<=n1; n2++) {
//if (n2%2 == 0) {
//    soma += n2;
//}
//}
//printf("A soma de %d com todos os numeros pares entre 1 e %d e igual a: %d", n1, n1, soma);

//ATIVIDADE 2
//
//float maior;
//
//printf("Escreva sua altura: \n");
//    scanf("%f", &maior);
//
//int pessoas = 1;
//float altura;
//float menor = maior;
//
//while (pessoas<10) {
//    printf("Escreva sua altura: \n");
//    scanf("%f", &altura);
//    pessoas++;
//
//    if (altura>maior){
//    maior = altura;
//    }
//
//    if (altura<maior) {
//        menor = altura;
//    }
//
//}
//printf("A menor altura informada foi: %.2f\n", menor);
//printf("A maior altura informada foi: %.2f\n", maior);

//ATIVIDADE 3:
//
//char item[50];
//int total = 0;
//int verific;
//
//printf("SEJA BEM-VINDO, BOAS COMPRAS! \n");
//
//while(verific != 0){
//printf("Digite 1 para adicionar um produto ou 0 para sair: \n");
//scanf("%d", &verific);
//if (verific==0) {
//    return printf("Total de produtos: %d", total);
//}
//
//printf("Digite o nome do produto: ");
//scanf("%s", &item);
//total++;;
//
//}
//

//ATIVIDADE 4:
//
//int base;
//printf("Informe a base: ");
//scanf("%d", &base);
//
//int expoente;
//printf("Informe o expoente: ");
//scanf("%d", &expoente);
//
//int potencia = base*base;
//int vfex = 2;
//
//if (expoente == 0) {
//    return printf ("RESULTADO: 1");
//}
//
//else if (expoente == 1) {
//    return printf ("RESULTADO: %d", base);
//}
//
//else if (expoente<0) {
//    return printf ("ESSA CALCULADORA EH PARA NUMEROS POSITIVOS E INTEIROS");
//    
//}
//
//else {
//    while (vfex < expoente) {
//    potencia = potencia*base;
//    vfex++;
//    }
//}
//
//printf("RESULTADO: %d", potencia);

//ATIVIDADE 5:
//
//int senha = 1234;
//int tentativa;
//
//do {
//printf("Informe sua senha (4 digitos): ");
//scanf("%d", &tentativa);
//if(tentativa != senha) {
//    printf("ERRO: SENHA INVALIDA.\n");
//}
//}
//while (tentativa!=senha);
//    printf("SENHA VALIDA! \nBEM VINDO");

//ATIVIDADE 6:
//
//int segundos;
//printf("Informe o valor da contagem regressiva (em segundos): ");
//scanf("%d", &segundos);
//
//for (int i = segundos; i>=0; i--){
//    printf("%d\n", i);
//}
//printf("TEMPO ESGOTADO!");

//ATIVIDADE 7:
//

//for (int i = 50; i>1; i--){
//
//if (i%3==0){
//printf("%d eh multiplo de 3\n", i);
//}
//
//if (i%5==0) {
//printf("%d eh multiplo de 5\n", i);
//
//}
//}

//ATIVIDADE 8:
//
//printf("CALCULADORA DE SOMA E SUBTRACAO:\n");
//printf("Escreva um numero: ");
//int n1;
//scanf("%d", &n1);
//
//int n2;
//int res;
//int vef;
//
//do {
//    printf("\nEscreva: \n (1) para somar\n (2) para subtrair\n (3) para sair\n\n");
//    scanf("%d", &vef);
//
//    if (vef == 1) {
//    printf("\ninforme o numero que voce ira somar com %d\n", n1);
//    scanf("%d", &n2);
//    res = n1+n2;
//    printf("\nTOTAL: %d\n\n", res);
//    n1 = res;
//        
//    }
//
//    else if (vef == 2){
//    printf("\ninforme o numero que voce ira subtrair com %d\n", n1);
//    scanf("%d", &n2);
//    res = n1-n2;
//    printf("\nTOTAL: %d\n\n", res);
//    n1 = res;
//    }
//
//    else if (vef>3 && vef<1) {
//    printf("ERRO: numero selecionado eh invalido\n");
//    }
//
//}
//while (vef!=3);
//printf("\nVoce saiu da calculadora :( ");

return 0;
}