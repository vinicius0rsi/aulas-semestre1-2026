//ATIVIDADE 5:

#include <stdio.h>
int main () {

    int idade;
    printf("Informe sua idade: \n");
    scanf("%d", &idade);

    if (idade >= 5 && idade <=10){
        return printf("Categoria: infantil");
    }

    else if (idade >=11 && idade <=17) {
        return printf("Categoria: Juvenil");
    }

    else if (idade >=18) {
        return printf("Categoria: Adulto");
    }

    else {
        return printf("Nao permitido");
    }
    
    return 0;
}