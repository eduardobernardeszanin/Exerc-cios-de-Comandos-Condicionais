/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:.Numa empresa, cada funcionário recebe mensalmente o ordenado mais um prêmio referente a comissões.
 São dados os seguintes valores: 
    . salário bruto e prêmio, além dos valores da base do INSS, base do imposto de renda e respectivas taxas ( INSS e IR). 
Deseja-se emitir o demonstrativo de pagamento de um funcionário, contendo os valores do salário bruto, prêmio, rendimento, desconto de IR e salário líquido. 
O rendimento do funcionário é a soma do sal. bruto com o prêmio, o desconto do INSS somente incide se o rendimento for maior do que a base do INSS e o desconto do imposto de renda somente se a diferença entre os valores do rendimento e o valor do desconto do INSS for maior do que a base do IR. 

*/

#include <stdio.h>

int main() {
    
    
    float salario_bruto, premio, base_inss, taxa_inss, base_ir, taxa_ir;
    float rendimento, desconto_inss, desconto_ir, salario_liquido;

    // Input values
    printf("Digite o salario bruto: ");
    scanf("%f", &salario_bruto);

    printf("Digite o premio: ");
    scanf("%f", &premio);

    printf("Digite a base do INSS: ");
    scanf("%f", &base_inss);

    printf("Digite a taxa do INSS: ");
    scanf("%f", &taxa_inss);

    printf("Digite a base do IR: ");
    scanf("%f", &base_ir);

    printf("Digite a taxa do IR: ");
    scanf("%f", &taxa_ir);

    // Calculate income
    rendimento = salario_bruto + premio;

    // Calculate INSS discount
    if (rendimento > base_inss) {
        desconto_inss = salario_bruto * taxa_inss;
    } else {
        desconto_inss = 0;
    }

    // Calculate IR discount
    if ((rendimento - desconto_inss) > base_ir) {
        desconto_ir = (rendimento - desconto_inss - base_ir) * taxa_ir;
    } else {
        desconto_ir = 0;
    }

    // Calculate net salary
    salario_liquido = rendimento - desconto_inss - desconto_ir;

    // Output payment statement
    printf("\nDemonstrativo de Pagamento:\n");
    printf("Salario Bruto: R$ %.2f\n", salario_bruto);
    printf("Premio: R$ %.2f\n", premio);
    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Desconto INSS: R$ %.2f\n", desconto_inss);
    printf("Desconto IR: R$ %.2f\n", desconto_ir);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);

}