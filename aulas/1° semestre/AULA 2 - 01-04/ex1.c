#include <stdio.h>
int main() {
   int a = 7;
   int b = 2;
   float x, y;
   printf("1 valor de a: %d\n", a);
   printf("1 valor de b: %d\n", b);
   printf("1 valor de x: %.2f\n", x);
   printf("1 valor de y: %.2f\n", y);

   x = a / b;
   printf("2 valor de a: %d\n", a);
   printf("2 valor de b: %d\n", b);
   printf("2 valor de x: %.2f\n", x);
   printf("2 valor de y: %.2f\n", y);


   y = (float)a / b;    // isso é uma conversão -> vira float
   printf("3 valor de a: %d\n", a);
   printf("3 valor de b: %d\n", b);
   printf("3 valor de x: %.2f\n", x);
   printf("3 valor de y: %.2f\n", y);

   a = a%b;
   printf("4 valor de a: %d\n", a);
   printf("4 valor de b: %d\n", b);
   printf("4 valor de x: %.2f\n", x);
   printf("4 valor de y: %.2f\n", y);

   return 0;
}

// a atividade era: preencher a tabela
// na inicializacao, o valor de a, b, x, y eh oq
// e quando: x = a / b
// e quando: y = (float)a / b
// e quando: a % b