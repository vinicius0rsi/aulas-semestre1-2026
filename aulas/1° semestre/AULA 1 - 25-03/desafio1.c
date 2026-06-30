#include <stdio.h>
int main() {
    
    char nome[50] = "Monitor Gamer";
    int quantidade = 50;
    float uni = 500.00;
    char secao = 'A';
    float e = quantidade * uni;

    printf("Nome do produto: %s\n", nome);
    printf("Quantidade: %d\n", quantidade);
    printf("Preço da unidade: %.2f\n", uni);
    printf("Seção: %c\n", secao);
    printf("Valor total dos produtos: %.2f\n", e);

    return 0;
}