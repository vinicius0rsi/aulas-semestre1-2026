// aula 08/04
//
//---------------------------------------------------------------------------------------------------------------------------------------------------- 
//
//  TABELA VERDADE: define/descreve os resultados das operações lógicas.
//
//  * o numero de linhas é 2^n, onde n é o número de variáveis proposicionais.
//
//  * os principais operadores lógicos utilizados na tabela verdade são:
//  AND (&&) - tautologia: sempre verdadeiro, contradição: sempre falso
//  OR (||) - contingência: pode ser verdadeiro ou falso dependendo dos valores das variáveis
//  NOT (!) - contradição: inverte o valor lógico de uma proposição
//
//----------------------------------------------------------------------------------------------------------------------------------------------------
//
//  CODIGO SEQUENCIAL: cada informacao e executada de forma sequencial, ou seja, uma linha de código é executada após a outra
//  * logica e linear
//  * nao envolve condicoes ou repeticoes
// 
//----------------------------------------------------------------------------------------------------------------------------------------------------
//
//  ESTRUTURAS DE CONDICAO: permitem a tomada de decisao e o desvio de fluxo de execucao do programa com base em certas condicoes
//  * gera resultados diferentes dependendo das entradas ou do estado do programa
//
//
//  Estrutura SIMPLES (if): executa um bloco de código se uma condição for verdadeira
//  * sintaxe: if (condicao) {comando1;}
//
//
//  Estrutura COMPOSTA (if-else): executa um bloco de código se uma condição for verdadeira e outro bloco se for falsa
//  * sintaxe: if (condicao) {comando1;} else {comando2;}
//
//
//  Estrutura ENCADEADA (else if): permite verificar múltiplas condições em sequência, executando o bloco correspondente à primeira condição verdadeira
//  *else if: ainda e verdadeiro, mas a primeira condicao e falsa, entao verifica a segunda condicao
//  *sintaxe: if (condicao1) {comando1;} else if (condicao2) {comando2;} else {comando3;}
//
//
//  Estrutura SWITCH: e uma selecao de casos que permite executar diferentes blocos de código com base no valor de uma expressão
//  * avalia uma variavel (char, float, int) e executa o bloco de código correspondente ao valor da variavel
//  * lembrar de utilizar break ao final de cada caso para evitar a execução dos casos seguintes
//  * se baseia em um valor, ou seja, nao e boleano
//
//  * sintaxe: switch (variavel) {case valor1: comando1; break; case valor2: comando2; break; default: comando3; break;}
//  * o valor da case se for char deve ser colocado entre aspas simples, se for string deve ser colocado entre aspas duplas
//  * se for int ou float nao precisa de aspas
//
//----------------------------------------------------------------------------------------------------------------------------------------------------
//
//  DICA: avaliar quais as melhores condicoes a serem seguidas:
//  
//  CLEAN CODE: escrever um código limpo, legível e fácil de entender, seguindo boas práticas de programação
//  -> Guard Clouses: evitar o uso de else, utilizando return para sair da função quando a condição for satisfeita
//  * diminui verificacoes, mais eficiente e menos processamento para o programa
//  * trocar encadiamentos por retornos diretos
//  
//  exemplo:
//  if (condicao1) {
//     if condicao2) {
//         if (condicao3) {
//             // printf ("comando 1", condicao1)
//         } else {
//             // printf ("comando 2", condicao2)
//         }
//     } else {
//             // printf ("comando 3", condicao3)
//
//
//   TROCAR PARA:
//
//   if (!condicao1) {
//   return printf ("ERRO: condicao1 nao satisfeita");
//
//   if (!condicao2) {
//   return printf ("ERRO: condicao2 nao satisfeita");
//
//   if (!condicao3) {
//   return printf ("ERRO: condicao3 nao satisfeita");