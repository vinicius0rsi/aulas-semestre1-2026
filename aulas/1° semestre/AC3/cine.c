//escolha de um lugar no cinema
#include <stdio.h>
#include <stdlib.h>

#define FILAS     10
#define ASSENTOS  10

#define VAZIO 0
#define OCUPADO 1

#define ANSI_RESET "\x1b[0m"
#define ANSI_CIANO "\x1b[36m"
#define ANSI_VERDE "\x1b[32m"  //livre
#define ANSI_VERMELHO "\x1b[31m"  //ocupado

int main () 
{

    int sala[FILAS][ASSENTOS];

    int opcao = 1;  // 0 = sair
    int fileira, assento;

    //definir os valores livres (assentos livres)
    //livre = 0
    //ocupado = 1

    for (int i = 0; i<FILAS; i++) 
    {
        for (int j = 0; j<ASSENTOS; j++) 
        {
            sala[i][j] = VAZIO;
        }
    }

    while (opcao!=0) 
    {
        printf(ANSI_CIANO "========================================\n" ANSI_RESET);
        printf(ANSI_CIANO "=========     CINE UNIVALI     =========\n" ANSI_RESET);
        printf(ANSI_CIANO "========================================\n\n" ANSI_RESET);

        printf("     ");
        for(int i = 0; i<ASSENTOS; i++) 
        {
            printf("[%d]  ", i);
        }
        printf("\n");

        for (int i = 0; i<FILAS; i++) 
        {
            printf(" [%d] ", i);
            for (int j = 0; j<ASSENTOS; j++) 
            {
                if (sala[i][j] == VAZIO) 
                {
                    printf(ANSI_VERDE " .   " ANSI_RESET);
                }
                else 
                {
                    printf(ANSI_VERMELHO " X   " ANSI_RESET);
                }
            }
            printf("\n");
        }
        
        printf("\n");
        printf("1 - Reservar Assento\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == OCUPADO) {
            printf("Digite a fileira e o assento desejado (ex: 1 5): ");
            scanf("%d %d", &fileira, &assento);

            //aqui poderia fazer tratamento de limites e tratamento de ocupados

            sala[fileira][assento] = OCUPADO;
  
        }

    }


    return 0;
}