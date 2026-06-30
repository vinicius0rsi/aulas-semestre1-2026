//ATIVIDADE 4:

#include <stdio.h>
int main () {

    int senha;
    printf("Informe sua senha: \n");
    scanf("%d", &senha);

    if (senha == 1234) {
        printf("Acesso permitido!");
    }

    else {
        printf("Acesso negado!");
    }
    return 0;
}