#include <stdio.h>

int main () {

    int hp_heroi = 20, atk_heroi = 8, def_heroi = 4;
    int nivel = 1;
    int hp_monstro = 15, atk_monstro = 7, def_monstro = 2;
    int move;
    int dano_causado = atk_heroi - def_monstro;
    int dano_tomado = atk_monstro - def_heroi;

    printf("--- ARENA --- \n\n");
    printf("Voce encontrou um monstro! \n\n");

    printf("ATK HEROI: %d   -    ATK MONSTRO: %d\n", atk_heroi, atk_monstro);
    printf("DEF HEROI: %d   -    DEF MONSTRO: %d\n", def_heroi, def_monstro);


    while (hp_heroi > 0 && hp_monstro > 0) {
        printf("HP HEROI: %d   -    HP MONSTRO: %d\n\n", hp_heroi, hp_monstro);
        printf("O que voce deseja fazer? (0: Atacar | 1: Defender | 2: Fugir)\n\n");
        scanf("%d", &move);
    

    switch (move) {

        case 0:
            printf ("\n----------------------\n");
            printf ("\nVoce atacou e causou: %d de dano \n\n", dano_causado);
            hp_monstro -= dano_causado;
            
            if (hp_monstro <= 0) 
    {
        printf ("Voce matou o monstro!\n\n");
        nivel++;
        printf ("voce subiu de nivel: %d\n", nivel);
        return 0;
    }
            printf ("------ PROXIMO TURNO ------\n\n");
            printf ("Monstro atacou! voce sofreu %d de dano\n\n", dano_tomado);
            hp_heroi -= dano_tomado;
            printf ("------ PROXIMO TURNO ------\n\n");
            break;
        
        case 1:
            printf("\nVoce se preparou para se defender do monstro!\n");
            printf("O monstro atacou e voce se defendeu, porem sofreu 1 de dano \n\n");
            --hp_heroi;
            break;


        case 2:
            printf("\nO heroi arregou\n");
            printf("voce perdeu, seu mediocre\n\n");
            return 0;
            break;

        default:
            printf("ERRO: movimento invalido");
            break;
    }


    if (hp_heroi <= 0) 
    {
        printf ("Voce morreu\n");
        nivel--;
        printf ("voce perdeu um nivel: %d\n", nivel);
    }   
}
    return 0;
}

