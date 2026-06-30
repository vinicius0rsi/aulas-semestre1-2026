// ATIVIDADE 8

#include <stdio.h>
int main () {

    
    printf("Informe seu DDD: \n");
    int cidade;
    scanf("%d", &cidade); 

    switch (cidade) {
    case 61:
        printf("NOME DA CIDADE: BRASILIA\n");
        break;

    case 71:
        printf("NOME DA CIDADE: SALVADOR\n");
        break;

    case 11:
        printf("NOME DA CIDADE: SAO PAULO\n");
        break;

    case 21:
        printf("NOME DA CIDADE: RIO DE JANEIRO\n");
        break;

    case 47:
        printf("NOME DA CIDADE: ITAJAI/REGIAO\n");
        break;

    default:
        printf("DDD NAO CADASTRADO\n");
        break;
        
    }
    return 0;
}