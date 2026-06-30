#include <stdio.h>
int main () {

    //INICIALIZACAO
    printf("UNIVERSIDADE DO VALE DE ITAJAI\n");
    printf("VERIFICACAO DE APTIDAO DE BOLSA\n\n");

    //COLETA DE DADOS
    printf("Informe seu curso: \n");
    char curso[50];
    scanf(" %[^\n]", curso);
    printf("Curso selecionado: %s\n", curso);
    
    //renda p/capita
    printf("Informe o numero de integrantes da sua familia: \n");
    int num_familia;
    scanf("%d", &num_familia);
     if (num_familia < 0)
        return printf ("ERRO: o numero de integrantes da familia tem que ser maior que 0");
    
    printf("Informe a renda mensal da sua familia: \n");
    float renda_familia_mensal;
    scanf("%f", &renda_familia_mensal);
    if (renda_familia_mensal < 0)
        return printf ("ERRO: sua renda mensal tem que ser maior que 0");
    
    float renda_per_capita;
    renda_per_capita = renda_familia_mensal/num_familia;
    printf("A renda per capita e igual a: %.2f\n", renda_per_capita);
    
    //notafinal
    float nota_psi;
    printf("Informe a sua nota do processo seletivo (0 a 10): \n");
    scanf("%f", &nota_psi);
    if (!(nota_psi >= 0 && nota_psi<=10))
        return printf ("ERRO: voce selecionou um numero invalido");
    
    float nota_enem;
    printf("Informe a sua nota geral do Enem (0 a 10): \n");
    scanf("%f", &nota_enem);
     if (!(nota_enem >= 0 && nota_enem<=10))
        return printf ("ERRO: voce selecionou um numero invalido");
    
    float media_em;
    printf("Informe a sua media geral do ensino medio (0 a 10): \n");
    scanf("%f", &media_em);
    if (!(media_em >= 0 && media_em<=10))
        return printf ("ERRO: voce selecionou um numero invalido");
    
    float nota_final;
    nota_final = (nota_psi*0.4)+(nota_enem*0.3)+(media_em*0.3);
    printf("Sua nota final e igual a: %.2f\n", nota_final);
    
    
    //vinculos sociais
    int deficiencia;
    printf("Voce possui alguma deficiencia? \n");
    printf("NAO [0]   -  SIM [1]\n");
    scanf("%d", &deficiencia);
    switch (deficiencia) {
        case 1:
        printf("Voce selecionou: possuo deficiencia\n\n");
        break;
        
        case 0:
        printf("Voce selecionou: nao possuo deficiencia\n\n");
        break;

        default:
        return printf("ERRO: Resposta invalida\n\n");
        break;
    }
    
    int origem_escolar;
    printf("Estudou em escola publica?\n");
    printf("NAO [0]   -  SIM [1]\n");
    scanf("%d", &origem_escolar);
    switch (origem_escolar) {
        case 1:
        printf("Estudante de escola publica\n\n");
        break;
        
        case 0:
        printf("Estudante de escola privada\n\n");
        break;

        default:
        return printf("ERRO: Resposta invalida\n");
        break;
    }
    
    //integrantes com bolsa na familia
    int num_familia_bolsa;
    printf("Insira o numero de integrantes de sua familia que possui bolsa na UNIVALI:\n");
    scanf("%d", &num_familia_bolsa);

    //CALCULO DA BOLSA

    int bolsa;
    if (renda_per_capita<=800 && nota_final>=8 && origem_escolar==1 && num_familia_bolsa==0) {
    bolsa = 100;
    }
    
    else if ((origem_escolar == 1 || deficiencia == 1) && renda_per_capita<=1600 && nota_final>=6 && num_familia_bolsa<=1) {
    bolsa = 50;
    }
    
    else if (origem_escolar == 0 && deficiencia == 0 && renda_per_capita <= 1600 && nota_final >= 7.5 && num_familia_bolsa <= 1) {
    bolsa = 50;
         
    }

    else {
    bolsa = 0;
    }

    //RELATORIO FINAL

    printf("\n------ RELATORIO FINAL ------\n\n");
    printf("CURSO: %s\n", curso);
    printf("MEDIA FINAL: %.2f\n", nota_final);
    printf("RENDA CALCULADA: %.2f\n\n", renda_per_capita);

    if (bolsa != 0){
        printf("VEREDITO: CONCEDIDO %d porcento de bolsa\n\n", bolsa);
    }
    else {
        printf("VEREDITO: INDEFIRIDO %d porcento de bolsa\n\n", bolsa);
        

    //INDEFERIMENTO

    if (renda_per_capita > 1600) {
    printf ("Criterio nao antigido: A renda percapita e maior que o limite para bolsas (1600.00)\n");
    printf ("Sua renda percapita: %.2f\n", renda_per_capita);
    }

    if((origem_escolar == 1 || deficiencia == 1) && nota_final < 6.0) {
    printf ("Criterio nao antigido: A sua nota final e inferior ao necessario (6.0)\n");
    printf ("Sua nota final: %.2f\n", nota_final);
    }

    if (origem_escolar == 0 && deficiencia == 0 && nota_final < 7.5) {
    printf ("Criterio nao antigido: A sua nota final e inferior ao necessario para pessoas sem deficiencia e que nao estudaram em escola publica (7.5)\n");
    printf ("Sua nota final: %.2f\n", nota_final);
    }

    if (num_familia_bolsa > 1) {
    printf ("Criterio nao antigido: O numero de pessoas com bolsas na familia e superior ao limite (1)\n");
    printf ("Numero de integrantes da sua familia que possui bolsa: %d\n", num_familia_bolsa);
    }

    }
        return 0;

}