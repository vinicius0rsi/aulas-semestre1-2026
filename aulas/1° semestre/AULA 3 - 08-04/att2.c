//ATIVIDADE 2:

#include <stdio.h>

int main () {
    int estoque_prod;
    printf("Informe a quantidade de produtos no estoque: \n");
    scanf("%d", &estoque_prod);

    if (estoque_prod < 5) {
        printf("Estoque critico, favor repor.");
    }


    return 0;
}