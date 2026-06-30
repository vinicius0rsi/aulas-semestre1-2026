#include <stdio.h>
int main () {

    int opcao;
    int n1, n2;
    float resultado;

    do {
        printf("-------------------------------\n");
        printf("----------CALCULADORA----------\n");
        printf("-------------------------------\n");
        printf("1. Somar \n");
        printf("2. Subtrair \n");
        printf("3. Multiplicar \n");
        printf("4. Dividir \n");
        printf("0. Sair \n");
        printf("Escolha uma opcao: \n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Informe o primeiro numero: ");
            scanf("%d", &n1);
            printf("Informe o segundo numero: ");
            scanf("%d", &n2);
        }

        printf("-------------------------------\n");
        switch (opcao) {
        case 1:
            resultado = n1+n2;
            printf("%d + %d = %.2f\n", n1, n2, resultado);
            break;

        case 2:
            resultado = n1-n2;
            printf("%d - %d = %.2f\n", n1, n2, resultado);
            break;

        case 3:
            resultado = n1*n2;
            printf("%d x %d = %.2f\n", n1, n2, resultado);
            break;

        case 4:
            if (n2 == 0) {
                printf("O denominador nao pode ser 0\n");
            }
            resultado = (float)n1/n2;
            printf("%d / %d = %.2f\n", n1, n2, resultado);
            break;
        
        case 0:
            break;

        default:
            printf("NUMERO INVALIDO!\n");
            break;
        }
    } while (opcao !=0);


    return 0;
}