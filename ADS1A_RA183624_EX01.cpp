/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....37/05/2024
   OBJETIVO:.A partir do salário de um funcionário. Calcule o desconto do INSS, adotando as seguintes regras: Até R$ 1570,00 descontar 8%, acima deste valor descontar 9%.

*/

#include <stdio.h>


int main() {


    float salario, inss;


/// PEDIR AS INFORMAÇOES DO  USUÁRIO 

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if( salario <= 1570.00) {
       inss = (salario * 0.08);
    } else {
       inss = (salario * 0.09);
}

// EXIBE O DESCONTO DO INSS 

    printf("Desconto do INSS: R$ %.2f \n", inss);
}








