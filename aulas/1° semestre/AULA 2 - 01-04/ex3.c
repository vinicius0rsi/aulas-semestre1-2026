#include <stdio.h>
int main() {

int x = 0, y = 10;
if (x != 0 && (y / x) > 1) { //no exercício, com a negação lógica é verdadeiro.
printf("Sucesso \n");
}
int a = 1, b = 0;
if (a == 1 || (++b > 0)) {
printf("Sucesso B. Valor de b: %d", b);
}

    return 0;
}

//Determine se a função printf será executada nos dois cenários e explique o porquê com base no comportamento dos operadores && e ||.
//
//int x = 0, y = 10;
//if (x != 0 && (y / x) > 1) { printf("Sucesso A");
//}
//int a = 1, b = 0;
//if (a == 1 || (++b > 0)) { printf("Sucesso B. Valor de b: %d", b);
//}

// na primeira, x = 0 e qualquer numero dividido por 0 e indefinido.
// segunda esta correta (ambos)
