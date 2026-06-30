#include <stdio.h>
int main(){
    int idade = 18;
    float altura = 1.678;
    float altura2 = 1.678;
    char sexo = 'M';
    char nome[50] = "Vinícius José Orsi";

    float e = altura + altura2;
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", ++idade);
    printf("Altura: %.3f\n", altura);
    printf("Altura2: %.3f\n", altura2);
    printf("Altura total: %.3f\n", e);
    printf("Sexo: %c\n", sexo);
    return 0;
}

//começar sempre com #include <stdio.h> para usar a função printf
//colocar a int main() para criar a função principal do programa
//colocar chave após main e terminar o código com outra chave para fechar a função
//tudo que formos escrever deve estar dentro das chaves
//terminar com return 0

//int = inteiro     -    não precisa de aspas
//float = número com vírgula    -    não precisa de aspas
//char = 1 caractere      -     quando for dar o valor de char, deve ser colocado entre aspas simples, exemplo: char sexo = 'M';
// tring = texto
// char[x] = string      -    quando for dar o valor de char[x] ou string, deve ser colocado entre aspas duplas, exemplo: char nome[50] = "Vinícius José Orsi"; 

// %s = string
// %d = inteiro
// %f = float
// %.3f = float com 3 casas decimais
// %c = char 
// \n = quebra de linha

// para compilar: gcc a.c -o a
// para rodar: ./a ou ctrl + alt + n (no vscode)
// shift + alt + seta pra baixo = duplicar linha
// idade++ = idade + 1   no comando fica: printf("Idade: %d\n", ++idade) 
// #define serve para criar uma constante, ou seja, um valor que não pode ser alterado durante a execução do programa. Exemplo: #define PI 3.14
// abrir terminal: ctrl + j ou ctrl + shift + ` (no vscode)

// double = número com vírgula, mas com mais casas decimais do que o float. Exemplo: double pi = 3.14159265358979323846;
// para notação de double, usamos %lf no printf. Exemplo: printf("Valor de pi: %.15lf\n", pi);

// nos caracteres, maisculos e minusculos são diferentes.

// para dar nomes possíveis a váriaveis: usar nomes significativos, CamelCase, Snake_case
// para dar nomes impossíveis a váriaveis: nomes genéricos, começar com números, espaços, carecteres especiais, palavras reservadas

// uma constante nunca muda de valor, exemplo: #define PI 3.14     -> facilita a manutenção de um tipo de valor
// uma variável pode mudar de valor, exemplo: int idade = 18; idade = 19;