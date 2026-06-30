#include <stdio.h>
#include <stdlib.h> //biblioteca para limpar terminal
#include <ctype.h>  //biblioteca para verificar e transformar maiusculos para minusculos
#define max 6
#define tam 4

int main()
{

    // dados do programa
    char palavra_correta[5] = "gato"; //esta com 5 nos colchetes pois eh uma string, tendo o terminador nulo(parada) como +1 elemento
    char letras_tentadas[10] = {0};
    char mascara_de_exibicao[tam] = {'_', '_', '_', '_'};
    char letras_da_palavra[tam] = {'g', 'a', 't', 'o'};

    // dados resgatados pelo usuario
    char letra_escolhida;
    int erros = 0;
    int acertos = 0;
    int indice_letras_usadas = 0;
    // apresentação do jogo
    printf("\nBEM VINDO AO JOGO DA FORCA\n");
    printf("--------------------------\n");
    printf("Tema da palavra: animal\n");
    printf("--------------------------\n");
    printf("Voce pode errar apenas 6 vezes!\n");
    printf("Palavra: ");
    int acertou = 0;

    while (erros < max && acertos < tam) // laço de rep. que termina quando as tentativas acabam ou qaundo o usário acerta a palavra
    {
        acertou = 0;

        for (int j = 0; j < tam; j++) // laço de repetição que exibi a mascara para a quantidade de letras
        {
            printf("%c ", mascara_de_exibicao[j]);
        }

        printf("| Letras usadas: [%s]", letras_tentadas);

        int validez_char;
        while(validez_char!=1) {
            printf("\nDigite uma letra: ");
            scanf(" %c", &letra_escolhida);

            if (isalpha(letra_escolhida)) {
                letra_escolhida = tolower(letra_escolhida); // Transforma em minusculo
                break; // Entrada válida, sai do loop de validação
            } else {
                printf("Erro! Voce digitou um numero ou simbolo. Tente novamente.");
            }
        }

        system("cls"); //comando para limpar terminal

        int ja_usada = 0;

        for (int k = 0; k < indice_letras_usadas; k++) // laço de rep. para verificar se uma letra já foi escolhida
        {
            if (letras_tentadas[k] == letra_escolhida)
            {
                printf("\nEssa letra ja foi usada, tente outra letra\n");
                ja_usada = 1;
                break;
            }
        }
        if (ja_usada == 1)
        {
            continue;
        }

        letras_tentadas[indice_letras_usadas] = letra_escolhida;
        indice_letras_usadas++;

        for (int j = 0; j < tam; j++) // laço que verifica se a letra escolhida é igual a uma das letras da palavra
        {

            if (letra_escolhida == letras_da_palavra[j])
            {
                printf("\nEsta letra esta correta!\n");

                mascara_de_exibicao[j] = letra_escolhida;
                acertou = 1;
                acertos++;
                break;
            }
        }

        if (acertou == 0)
        {
            printf("\nEsta letra nao esta na palavra\n");
            erros++;
        }

        switch (erros) {  // switch utilizado para mostrar o boneco, que as partes do corpo correspondem a quantidade de erros

        case 1: 
            printf("\nVIDA: \n");
            printf("\n O\n\n");
            break;

        case 2:
            printf("\nVIDA: \n");
            printf("\n O\n");
            printf(" |\n\n"); 
            break;
            
        case 3:
            printf("\nVIDA: \n");
            printf("\n O\n");
            printf("\\"); 
            printf("|\n\n"); 
            break;

        case 4:
            printf("\nVIDA: \n");
            printf("\n O\n");
            printf("\\"); 
            printf("|"); 
            printf("/\n\n");
            break;

        case 5:
            printf("\nVIDA: \n");
            printf("\n O\n");
            printf("\\"); 
            printf("|"); 
            printf("/\n");
            printf("/ \n\n");
            break;

        case 6:
            printf("\nVIDA: \n");
            printf("\n O\n");
            printf("\\"); 
            printf("|"); 
            printf("/\n");
            printf("/ ");
            printf("\\ \n\n");
            break;

        default:
            break;
    }

    }

    if (erros == max)
    {
        printf("\nVoce foi enforcado\n");
    }
    else if (acertos == tam)
    {
        printf("\nParabens, voce venceu!\n");
        printf("Palavra correta: %s\n", palavra_correta);
    }

    return 0;
}