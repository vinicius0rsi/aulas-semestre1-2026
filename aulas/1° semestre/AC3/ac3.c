#include <stdio.h>
#include <stdlib.h> //biblioteca para limpar terminal

#define TAM_NOME 15
#define ORDEM 4

#define ANSI_VERDE "\x1b[32m"    // jogador 1
#define ANSI_VERMELHO "\x1b[31m" // jogador 2
#define ANSI_RESET "\x1b[0m"

int main()
{

    // VARIÁVEIS
    char jogador1[TAM_NOME];
    char jogador2[TAM_NOME];
    char tabuleiro[ORDEM][ORDEM];
    int linha, coluna;
    int jogadas = 0;

    for (int i = 0; i < ORDEM; i++) // preenchimento da matriz
    {
        for (int j = 0; j < ORDEM; j++)
        {
            tabuleiro[i][j] = '.';
        }
    }

    printf("------------------------------\n");
    printf("--------JOGO DA VELHA---------\n");
    printf("------------------------------\n\n");

    printf("JOGADOR 1 - Digite seu nome: ");
    scanf("%s", jogador1);
    printf("JOGADOR 2 - Digite seu nome: ");
    scanf("%s", jogador2);

    while (1){
        
        // TABULEIRO
        printf("\nTABULEIRO: \n\n");
        for (int i = 1; i < ORDEM; i++)
        {
            for (int j = 1; j < ORDEM; j++)
            {
                if (j != 3)
                {
                    printf(" %c |", tabuleiro[i][j]);
                }
                else
                {
                    printf(" %c\n", tabuleiro[i][j]);
                    if (i != 3)
                    {
                        printf("-----------\n");
                    }
                }
            }
        }

        // JOGADAS
        if (jogadas == 0)
        {
            printf(ANSI_VERDE "\n%s: VOCE EH [X] E COMECA JOGANDO%s\n", jogador1, ANSI_RESET);
            printf(ANSI_VERMELHO "%s: VOCE EH [O] E JOGA DEPOIS%s\n", jogador2, ANSI_RESET);
            printf("PARA JOGAR, INFORME A LINHA E A COLUNA (ex: 3 1)\n");
            printf("POSICAO VAGA = [.]\n\n");
            printf("\nJOGADA DA VEZ: %s\n", jogador1);
            printf("Digite a posicao: ");
            scanf("%d %d", &linha, &coluna);

            if ((linha < 1 || linha > 3 )||(coluna < 1 || coluna > 3))
            {
                system("cls");
                printf("\nEssa posição não é disponível! Escreva uma posição válida!");
                continue;
            }

            jogadas++;
            tabuleiro[linha][coluna] = 'X';
        }
        else if (jogadas % 2 != 0)
        {
            printf("\nJOGADA DA VEZ %s\n", jogador2);
            printf("Digite a posicao: ");
            scanf("%d %d", &linha, &coluna);

            if ((linha < 1 || linha > 3 )||(coluna < 1 || coluna > 3))
            {
                system("cls");
                printf("\nEssa posição não é disponível! Escreva uma posição válida!");
                continue;
            }
            else if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O')
            {
                system("cls");
                printf("\nEste espaço já foi ocupado! Tente outra vez.");
                continue;
            }
            

            jogadas++;
            tabuleiro[linha][coluna] = 'O';
        }
        else if (jogadas % 2 == 0)
        {
            printf("\nJOGADA DA VEZ %s\n", jogador1);
            printf("Digite a posicao: ");
            scanf("%d %d", &linha, &coluna);

            if ((linha < 1 || linha > 3) || (coluna < 1 || coluna > 3)){
                system("cls");
                printf("\nEssa posição não é disponível! Escreva uma posição válida!");
                continue;
            }

            if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O')
            {
                system("cls");
                printf("Este espaço já foi ocupado! Tente outra vez.");
                continue;
            }

            jogadas++;
            tabuleiro[linha][coluna] = 'X';
        }
        system("cls");
        
    

    // PARADAS

    //horizontal
    for (int i = 1; i<ORDEM; i++) {
        int condicaoH_1 = 0;
        int condicaoH_2 = 0;

        for (int j = 1; j<ORDEM; j++) {
            if (tabuleiro[i][j] == 'X') {
                condicaoH_1++;
            }
            if (condicaoH_1==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
                printf("\nPARABENS %s, VOCE VENCEU!\n", jogador1);
                return 0;
            }
            if (tabuleiro[i][j] == 'O') {
                condicaoH_2++;
            }
            if (condicaoH_2==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
                printf("\nPARABENS %s, VOCE VENCEU!\n", jogador2);
                return 0;
            }
        }
    }
            
    //vertical
    for (int i = 1; i<ORDEM; i++) {
        int condicaoV_1 = 0;
        int condicaoV_2 = 0;
        for (int j = 1; j<ORDEM; j++) {
            if (tabuleiro[j][i] == 'X') {
                condicaoV_1++;
            }
            if (condicaoV_1==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
                printf("\nPARABENS %s, VOCE VENCEU!\n", jogador1);
                return 0;
            }

            if (tabuleiro[j][i] == 'O') {
                condicaoV_2++;
            }
            if (condicaoV_2==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
                printf("\nPARABENS %s, VOCE VENCEU!\n", jogador2);
                return 0;
            }
        }
    }

    //DIAGONAL PRINCIPAL
    int condicaoDP_1 = 0;
    int condicaoDP_2 = 0;
    
    for (int i = 1; i<ORDEM; i++) {
        int j = i;
        if (tabuleiro[i][j] == 'X') {
            condicaoDP_1++;
        }
        if (condicaoDP_1==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
            printf("\nPARABENS %s, VOCE VENCEU!\n", jogador1);
            return 0;
        }

        if (tabuleiro[i][j] == 'O') {
            condicaoDP_2++;
        }
        if (condicaoDP_2==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
            printf("\nPARABENS %s, VOCE VENCEU!\n", jogador2);
            return 0;
        }
    }

    //DIAGONAL SECUNDARIA
    int condicaoDS_1 = 0;
    int condicaoDS_2 = 0;

    for (int i = 1; i<ORDEM; i++) {
        int j = 4 - i;
            if (tabuleiro[i][j] == 'X') {
                condicaoDS_1++;
            }
            if (condicaoDS_1==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
                printf("\nPARABENS %s, VOCE VENCEU!\n", jogador1);
                return 0;
            }

            if (tabuleiro[i][j] == 'O') {
                condicaoDS_2++;
            }
            if (condicaoDS_2==3) {
                printf("\nTABULEIRO: \n\n");
                for (int i = 1; i < ORDEM; i++)
                {
                    for (int j = 1; j < ORDEM; j++)
                    {
                        if (j != 3)
                        {
                            printf(" %c |", tabuleiro[i][j]);
                        }
                        else
                        {
                            printf(" %c\n", tabuleiro[i][j]);
                            if (i != 3)
                            {
                                printf("-----------\n");
                            }
                        }
                    }       
                }
                printf("\nPARABENS %s, VOCE VENCEU!\n", jogador2);
                return 0;
            }
        }
    

    if (jogadas==9) {
        printf("\nTABULEIRO: \n\n");
        for (int i = 1; i < ORDEM; i++)
        {
            for (int j = 1; j < ORDEM; j++)
            {
                if (j != 3)
                {
                    printf(" %c |", tabuleiro[i][j]);
                }
                else
                {
                    printf(" %c\n", tabuleiro[i][j]);
                    if (i != 3)
                    {
                        printf("-----------\n");
                    }
                }
            }
        }
        printf("\nDEU VELHA!\n");
        return 0;
    }
}



    return 0;
}