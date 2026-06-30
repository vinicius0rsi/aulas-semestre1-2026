#include <stdio.h>
int main () {

//conteudo

//int matriz[3][3];  //matriz 3x3
//
//for (int i = 0; i<3; i++) {
//    for (int j = 0; j<3; j++) {
//        matriz[i][j] = i + j;
//        if (j==2) {
//            printf("%d\n", matriz[i][j]);
//        }
//        else {
//            printf("%d ", matriz[i][j]);
//        }
//    }
//}



// atividade 1

//int matriz[3][2];  //matriz 3x2
//int num;
//
//for (int i = 0; i<3; i++) {
//    for (int j = 0; j<2; j++) {
//        printf("\nEscreva um numero: ");
//        scanf("%d", &num);
//        matriz[i][j] = num;
//    }
//}
//
//printf("\n\nMatriz formada:\n\n");
//for (int i = 0; i<3; i++) {
//    for (int j = 0; j<2; j++) {
//        if (j==1) {
//        printf("%d\n", matriz[i][j]);
//        }
//        else {
//            printf("%d ", matriz[i][j]);
//        }
//}
//}



// atividade 2

//int matriz[3][3];  //matriz 3x3
//int num;
//int pares = 0;
//
//for (int i = 0; i<3; i++) {
//    for (int j = 0; j<3; j++) {
//        printf("\nEscreva um numero: ");
//        scanf("%d", &num);
//        matriz[i][j] = num;
//    }
//}
//
//printf("\n\nMatriz formada:\n\n");
//for (int i = 0; i<3; i++) {
//    for (int j = 0; j<3; j++) {
//
//        if (matriz[i][j] % 2 == 0) {
//
//            pares += matriz[i][j];
//
//            if (j==2) {
//            printf("[%d]\n", matriz[i][j]);
//            }
//            else {
//            printf("[%d] ", matriz[i][j]);
//            }
//        }
//
//        else {
//            if (j==2) {
//            printf("%d\n", matriz[i][j]);
//            }
//            else {
//                printf("%d ", matriz[i][j]);
//            }
//        }
//
//}
//}
//
//printf("\n\nSomatorio dos numeros pares: %d", pares);


// atividade 3

//int matriz[4][4];  //matriz 4x4
//
//for (int i = 0; i<4; i++) {
//    for (int j = 0; j<4; j++) {
//        
//        if (i == j) {
//            matriz[i][j] = 1;
//        }
//
//        else {
//            matriz[i][j] = 0;
//        }
//        if (j==3) {
//            printf("%d\n", matriz[i][j]);
//        }
//        else {
//            printf("%d ", matriz[i][j]);
//        }
//    }
//}


// atividade 4

//int matriz[4][4];  //matriz 4x4
//int num;
//int diagonal = 0;
//int produto_linha2 = 1;
//int maior_coluna3 = 0;
//
//for (int i = 0; i<4; i++) {
//    for (int j = 0; j<4; j++) {
//        printf("\nEscreva um numero: ");
//        scanf("%d", &num);
//        matriz[i][j] = num;
//    }
//}
//
//printf("\n\nMatriz formada:\n\n");
//for (int i = 0; i<4; i++) {
//    for (int j = 0; j<4; j++) {
//
//        if (i == j) {
//            diagonal += matriz[i][j];
//        }
//
//        if (i==1) {
//            produto_linha2 *= matriz[i][j];
//        }
//
//        if (j==2) {
//            if (matriz[i][j] >= maior_coluna3){
//                maior_coluna3 = matriz[i][j];
//            }
//        }
//        
//            if (j==3) {
//            printf("%d\n", matriz[i][j]);
//            }
//            else {
//            printf("%d ", matriz[i][j]);
//            }
//    }
//
//}
//
//printf("\n\nSomatorio dos numeros na diagonal: %d", diagonal);
//printf("\n\nProduto dos numeros da linha 2: %d", produto_linha2);
//printf("\n\nMaior numero na coluna 3: %d", maior_coluna3);


    return 0;
}