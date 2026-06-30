#include <stdio.h>
int main() {

int idade, possui_carteira;

printf("Digite sua idade:");
scanf("%d", &idade);

printf("Voce possui carteira de motorista? (1 para sim, 0 para nao):");
scanf("%d", &possui_carteira);

if (idade<18 || possui_carteira==0) {  
    printf("Não pode dirigir");
}
}

// mesma coisa que: if (!(idade>=18 && possui_carteira==1)) {

//Transforme a condição abaixo em sua negação lógica simplificada, retirando o operador !.
//Expressão Original: if ( !(idade >= 18 && possui_carteira == 1) )
//Sua resposta deve ser: if ( ... || ... )
