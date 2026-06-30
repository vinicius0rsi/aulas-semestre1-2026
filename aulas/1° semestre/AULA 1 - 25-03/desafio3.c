#include <stdio.h>
int main(){

    float valor_pao;
    float quant;

    printf("Digite o preco do pao: \n");
    scanf("%f", &valor_pao);

    printf("Qual e a quantidade de paes vendidos em 1 dia? \n");
    scanf("%f", &quant);

    float valor_total = valor_pao * quant;

    printf("O valor total da renda e: R$ %.2f", valor_total);

    return 0;
}