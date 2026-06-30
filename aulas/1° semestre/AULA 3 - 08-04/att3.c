//ATIVIDADE 3:

#include <stdio.h>
int main () {

    int num;
    printf("Informe um numero inteiro: \n");
    scanf("%d", &num);

    if (num%2 == 0) {
        printf("O numero e par"); }

    else {
        printf("O numero e impar"); }

    return 0;
}