//ATIVIDADE 1:

#include <stdio.h> 
int main () {

    int velo_veic;
        printf("Informe a velocidade do veiculo (em km): ");
        scanf ("%d", &velo_veic);
    
    if (velo_veic > 80) {
        printf("MULTA POR EXCESSO DE VELOCIDADE\n");
    }

    return 0;
}