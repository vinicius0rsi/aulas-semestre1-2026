//ATIVIDADE 6:

#include <stdio.h>
int main (){

    float valor_compra;
    printf("informe o valor total da compra (em reais):\n");
    scanf("%f", &valor_compra);

    float desconto;

if (valor_compra >= 500) {
    desconto = valor_compra*0.15;
    valor_compra -= desconto;
    printf("DESCONTO: R$%.2f, VALOR FINAL R$%.2f\n", desconto, valor_compra);
}

else if (valor_compra>=200 && valor_compra<500) {
    desconto = valor_compra*0.10;
    valor_compra -= desconto;
    printf("DESCONTO: R$%.2f, VALOR FINAL R$%.2f\n", desconto, valor_compra);
}

else {
    printf("DESCONTO: R$0.00 VALOR FINAL: R$%.2f\n", valor_compra);
}

    return 0;
}