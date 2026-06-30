#include <stdio.h>
#define TAM 5  //constante
int main () {
//    int vetorInt[TAM] = {10, 40, 5, 23, 0};  //para iniciar ja com valores utilizar igual e chave
//    //posso omitir a quantidade de elementos que irá identificar automaticamente
//    // no c não tem inteiro nulo, então se coloquei 10 elementos total e colocar apenas 5 dentro, o resto é lixo de memória
//
//    printf("---------- VETOR DE INTEIROS ----------\n");
//    printf("Cada elemento tem o tamanho de: %d bytes\n", sizeof(int)); //size of (tipo de dado) -> pega o tamanho desse tipo de dado e imprima
//    for (int i = 0; i < TAM; i++) {
//        printf("Indice [%d] | Valor: %d | Endereco: %p\n", i, vetorInt[i], &vetorInt[i]);    // indice = i (do for)     -    valor= o que estiver naquela posição
//
//    }

// endereço vem em numero hexadecimal, ex: 0061FF08 = 8 (pegar os dois ultimos digitos (08) e colocar na calculadora de hexadecimal para decimal)

//    char vetorChar[TAM] = {'a', 'd', 'y', 'z', 'w'};
//        printf("---------- VETOR DE CHAR ----------\n");
//        printf("Cada elemento tem o tamanho de: %d bytes\n", sizeof(char));
//    for (int i = 0; i < TAM; i++) {
//        printf("Indice [%d] | Valor %c | Endereco: %p\n", i, vetorChar[i], &vetorChar[i]);
//    }

//float vetorFloat[TAM];
//
//for (int i = 0; i<TAM; i++) {
//printf("informe um digito para a posicao %d:\n", i);
//scanf("%f", &vetorFloat[i]);
//}
//
//printf("---------- VETOR DE FLOAT ----------\n");
//printf("Cada elemento tem o tamanho de: %d bytes\n", sizeof(float));
//
//for (int i = 0; i<TAM; i++) {
//    printf("Indice [%d] | Valor %.2f | Endereco: %p\n", i, vetorFloat[i], &vetorFloat[i]);
//}


//   ATIVIDADES VETORES:

// ATT 1:

//   int vetorInt[TAM] = {1, 5, 7, 21, 34};
//   for (int i = 0; i<TAM; i++) {
//       printf("Valor %d | Endereco: %p\n", vetorInt[i], &vetorInt[i]);
//   }


// ATT 2:

//int vetorInt[TAM] = {4, 10, 23, 2, 3};
//int base = 4;
//
//int i;
//printf("Informe um indice: ");
//scanf("%d", &i);
//int endereco_cal = base + (i*sizeof(int));
//
//printf("endereco calculado: %p\n", endereco_cal);
//printf("Endereco: %p\n", &vetorInt[i]);


// ATT 2: CORRIGIDO

//int vetor[5] = {4, 2, 3, 6, 7};
//int indice;
//printf("Informe um indice: ");
//scanf("%d", &indice);
//
//unsigned long endereco = (unsigned long)&vetor[0];   // conversão   - UNSIGNED LONG = valor real do numero
//unsigned long endereco_cal = endereco + (indice*sizeof(int));
//
//printf("endereco calculado: %p\n", &vetor[indice]);
//printf("endereco real: %p", &vetor[indice]);


// ATT 3:

int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


for (int i = 0; i<10; i++) {
int posicao = vetor[i];

for (int a = 10; i>0; i--) {
vetor[i] = vetor [a];
vetor[a] = posicao;
}
}

for (int b = 0; b<10; b++) {
printf("Valor %d", vetor[b]);

    return 0;
}
}