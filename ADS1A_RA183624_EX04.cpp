/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:.4. Faça um programa que analisa a quantidade de peças vendidas por um funcionário de uma loja com afinalidade de conceder gratificação no salário dentro dos parâmetros:

         até 30           - sem gratificação;
         31 a 60         - 10% sobre o salário;
         61 a 100       - 15% sobre o salário;
         101 a 150      - 20% sobre o salário;
           mais de 150 - 30% sobre o salário.
Fornecer saída tipo: Funcionário João das Dores gratificação R$ ____ , __ Salário total R$______, ___
Obs.: Será necessário ler o nome do Funcionário, seu salario por mês e a quantidade de  peças vendidas 

*/

#include <stdio.h>

int main() {


    char nome[100];
    float salario_por_mes;
    int gratificacao = 0.;
    int vendas;
    

    // SOLICITAR A ENTRADA DO USUARIO

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite seu salario por mes: ");
    scanf("%f", &salario_por_mes);

    printf("Digite a quantidade de pecas vendidas: ");
    scanf("%d", &vendas);

    // CALCULAR GRATIFICAÇÃO 
    if (vendas <= 30) {
        gratificacao = 0;
    } else if (vendas <= 60) {
        gratificacao = salario_por_mes * 0.10;
    } else if (vendas <= 100) {
        gratificacao = salario_por_mes * 0.15;
    } else if (vendas <= 150) {
        gratificacao = salario_por_mes * 0.20;
    } else {
        gratificacao = salario_por_mes * 0.30;
    }
    
    
    printf("Funcionario %s, gratificacao R$%.2f, Salario Total: %.2f \n", nome, gratificacao,  salario_por_mes + gratificacao);


    return 0;

}
