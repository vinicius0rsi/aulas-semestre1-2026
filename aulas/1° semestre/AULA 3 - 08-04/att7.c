//ATIVIDADE 7

#include <stdio.h>
int main () {

    float num1, num2, res;
    char oper;

        printf("Diga um numero real:\n");
        scanf("%f", &num1);
        printf("Diga outro numero real:\n");
        scanf("%f", &num2);
        printf("informe a operacao: +, -, *, /, \n");
        scanf("%s", &oper);

        switch (oper) {
            case '+':
            res = num1+num2;
            printf("RESULTADO: %.3f", res);
            break;

            case '-':
            res = num1-num2;
            printf("RESULTADO: %.3f", res);
            break;

            case '*':
            res = num1*num2;
            printf("RESULTADO: %.3f", res);
            break;
            
            case '/':
            res = num1/num2;
            printf("RESULTADO: %.3f", res);
            break;

            default:
            printf("ERRO: operacao invalida %.3f", res);
            break;
        }
    return 0;
}