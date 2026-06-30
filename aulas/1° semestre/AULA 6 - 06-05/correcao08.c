#include <stdio.h>
int main () {

// ATT 1:

//int n1;
//printf("Informe um numero: ");
//scanf("%d", &n1);
//
//int soma = 0;
//
//for (int i = 2; i<=n1; i++) {
//    if (i % 2 == 0) {
//        soma += i;
//    }
//}
//printf("A soma de todos os numeros pares entre 1 e %d e igual a: %d", n1, soma);


// ATT 2:

//float altura_1;
//printf("Informe sua altura: ");
//scanf("%f", &altura_1);
//
//float altura_menor = altura_1;
//float altura_maior = altura_1;
//
//for (int i = 1; i<10; i++) {
//printf("Informe sua altura: \n");
//scanf("%f", &altura_1);
//
//if (altura_1>altura_maior) {
//    altura_maior = altura_1;
//}
//if (altura_1<altura_menor) {
//    altura_menor = altura_1;
//}
//}
//
//printf("A menor altura entre as pessoas e: %.2f\n", altura_menor);
//printf("A maior altura entre as pessoas e: %.2f", altura_maior);


// ATT 3:

//int total_itens = 0;
//char produto[50];
//int opcao;
//
//while (opcao != 0) {
//
//    printf("DIGITE '1' PARA CONTINUAR OU '0' PARA SAIR: ");
//    scanf("%d", &opcao);
//    
//if (opcao == 1) {
//    printf("Informe o produto: \n");
//    scanf("%s", &produto);
//    total_itens++;
//}
//else if (opcao == 0) {
//    return printf("O total de itens informados foi: %d", total_itens);
//}
//
//else {
//    printf("ERRO: OPCAO SELECIONADA INVALIDA\n");
//}
//}


// ATT 4:

//int base;
//printf("Informe a base: ");
//scanf("%d", &base);
//
//int expo;
//printf("Informe o expoente: ");
//scanf("%d", &expo);
//
//int pote = base;
//for (int i = 1; i<=expo; i++) {
//    if (i>=2) {
//        pote*=base;
//    }
//}
//printf("Resultado: %d", pote);


// ATT 5:

//int senha = 1234;
//int tentativa;
//
//printf("Digite a senha: ");
//scanf("%d", &tentativa);
//do{
//    if (tentativa!=senha) {
//        printf("SENHA INCORRETA\n");
//        printf("Digite a senha: ");
//        scanf("%d", &tentativa);
//    }
//}
//while (tentativa!=senha);
//printf("Acesso liberado");


// ATT 6:

//int tempo;
//printf("Digite o tempo: ");
//scanf("%d", &tempo);
//
//for (int i = tempo; i>0; i--) {
//    printf("%d, ", i);
//}
//printf("0!\n");
//printf("TEMPO ESGOTADO!");


// ATT 7:

//for (int i = 1; i<=50; i++) {
//    if (i%3==0) {
//        printf("%d e multiplo de 3\n", i);
//    }
//
//    if (i%5==0) {
//        printf("%d e multiplo de 5\n", i);
//    }
//}


// ATT 8:

//int opcao;
//int n1;
//int n2;
//int resultado;
//
//while(opcao!=3) {
//
//    printf("selecione '1' para somar\n");
//    printf("selecione '2' para subtrair\n");
//    printf("selecione '3' para sair\n");
//    scanf("%d", &opcao);
//
//    switch (opcao) {
//
//        case 1:
//            printf("Digite um numero: ");
//            scanf("%d", &n1);
//            printf("Digite outro numero: ");
//            scanf("%d", &n2);
//            resultado = n1+n2;
//            printf("%d + %d = %d\n", n1, n2, resultado);
//        break;
//
//        case 2:
//            printf("Digite um numero: ");
//            scanf("%d", &n1);
//            printf("Digite outro numero: ");
//            scanf("%d", &n2);
//            resultado = n1-n2;
//            printf("%d - %d = %d\n", n1, n2, resultado);
//        break;
//
//        case 3:
//            return printf("voce saiu");
//        break;
//
//        default:
//            printf("ERRO: OPCAO INVALIDA");
//        break;
//    }
//
//}

    return 0;
}