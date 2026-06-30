#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main () {

//vetores

float temperatura[TAM] = {0};

//variaveis

float atual_t;
float menor_t;
float maior_t;
float media_t;
int limite_critico = 0;

//codigo

printf("SEJA BEM-VINDO AO OTIMIZADOR DE HARDWARE\n\n");

printf("Informe a temperatura inicial do processador: ");
scanf("%f", &atual_t);
menor_t = atual_t;
maior_t = atual_t;
media_t = atual_t;
temperatura[0] = atual_t;

if (atual_t>80.0) {
    limite_critico++;
}


for (int i = 1; i<TAM; i++) { 

    system("cls");

    printf("\nInforme a temperatura atual do processador: ");
    scanf("%f", &atual_t);

    media_t+=atual_t;
    temperatura[i] = atual_t;

    if (atual_t>80.0) {
    limite_critico++;
    }
    
    if (atual_t>maior_t) {
        maior_t = atual_t;
    }

    if (atual_t<menor_t) {
        menor_t = atual_t;
    }
}

int k = 9;
for (int j = 0; j<5; j++) {
    
    int salvar = temperatura[j];
    temperatura[j]= temperatura[k];
    temperatura[k] = salvar;
    k--;
}

    printf("TEMPERATURAS OBTIDAS: ");
    for (int m = 0; m<TAM; m++) {

        printf("%.1fC ", temperatura[m]);
    }

    printf("\n\nMAIOR TEMPERATURA: %.1f", maior_t);
    printf("\nMENOR TEMPERATURA: %.1f", menor_t);
    media_t /= 10;
    printf("\nMEDIA DE TEMPERATURA: %.1f", media_t);

    if (limite_critico > 0) {
        printf("\n\nALERTA DE SUPERAQUECIMENTO!\n");
        printf("Foi registrado %d dados de temperatura acima do saudavel", limite_critico);
    }
    else {
        printf("\n\nO SISTEMA OPEROU COM SEGURANCA");
    }

    return 0;
}