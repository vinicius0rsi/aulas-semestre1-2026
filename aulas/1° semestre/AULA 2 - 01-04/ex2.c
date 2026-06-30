#include <stdio.h>
int main() {
   int i = 3;
   int j = 5;

   int res = ++i*(j-- + 2) > 20;
   printf("valor de res: %d\n", res);
   printf("valor de i: %d\n", i);
   printf("valor de j: %d", j);


   return 0;
}

// resultado de res é 1 porque é verdadeiro
// exercicio era: Analise a expressão complexa abaixo. Qual o valor final de res, i e j? 
// int i = 3, j = 5;
// int res = ++i * (j-- + 2) > 20;
