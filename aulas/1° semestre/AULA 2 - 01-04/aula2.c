// 01/04/2026

// operadores aritméticos, relacionais e lógicos

// sao simbolos que permitem a manipulacao de dados e a tomada de decisões em um programa. 
// operadores aritméticos: +, -, *, /, % (resto da divisão inteira) e atribuicao composta: +=, -=, *=, /=, %=
// operadores relacionais: >, <, >=, <=, == (igualdade), != (diferente)   -> sao usados para comparar dois valores, gerando um valor logico booleano (verdadeiro ou falso).
// operadores lógicos: && (e) (conjuncao), || (ou) (disjuncao), ! (não) (negação)
// conjuncao: A && B é verdadeiro somente se ambos A e B forem verdadeiros.
// disjuncao: A || B é verdadeiro se pelo menos um dos operandos for verdadeiro.
// negacao: !A é verdadeiro se A for falso, e falso se A for verdadeiro

//hierarquia: 1. parenteses, 2. funcoes e operadores unarios (como !), 3. multiplicacao, divisao e modulo, 4. adicao e subtracao, 5. operadores relacionais, 6. operadores logicos (&& tem precedencia sobre ||)

// && = AND (E) tem precedencia sobre || = OR (OU)

// PARA CONDICOES USAR: if (condicao) { ... } else { ... }

// quando esta ++ ou -- antes da variavel, o valor é incrementado ou decrementado antes de ser usado na expressão.
// quando esta ++ ou -- depois da variavel, o valor é usado na expressão e depois
// exemplo:
#include <stdio.h>
int main() {
    int a = 5;
    printf("Valor de a: %d\n", a); // Imprime 5
    printf("Valor de a++: %d\n", a++); // Imprime 5, depois a se torna 6
    printf("Valor de a: %d\n", a); // Imprime 6
    printf("Valor de ++a: %d\n", ++a); // a se torna 7, depois imprime 7
    printf("Valor de a: %d\n", a); // Imprime 7
    return 0;
}