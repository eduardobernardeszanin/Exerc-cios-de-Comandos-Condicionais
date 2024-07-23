/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....31/03/2024
   OBJETIVO:.5. Faça um programa que lendo o nome, idade em anos e sexo de um associado de um clube concede desconto na mensalidade a ser paga, observando:
     sexo feminino  até 30 anos desconto  de 20% 
     sexo feminino  31 a 40 anos desconto de 30%
     sexo feminino  acima de 41 anos desconto de 35%

     sexo masculino até 25 anos sem desconto
     sexo masculino acima de 25 anos desconto de 25%.

Forneça nome, idade e mensalidade a pagar. 

*/

#include <stdio.h>

int main() {
    
    char nome[50];
    
    int idade;
    
    char sexo;
    
    float mensalidade, mensalidade_final;
   
    
    printf("Digite o nome do associado: ");
    scanf("%s", nome);
    
    printf("Digite a idade do associado: ");
    scanf("%d", &idade);
    
    printf("Digite o sexo do associado (M/F): ");
    scanf(" %c", &sexo);
    
    printf("Digite o valor da mensalidade a pagar: ");
    scanf("%f", &mensalidade);
    
    if (sexo == 'F' || sexo == 'f') {
        if (idade <= 30)
            mensalidade_final = mensalidade * 0.8;
        else if (idade >= 31 || idade <= 40)
            mensalidade_final = mensalidade * 0.7;
        else
            mensalidade_final = mensalidade * 0.65;
    } else if (sexo == 'M' || sexo == 'm') {
        if (idade <= 25)
            mensalidade_final = mensalidade;
        else
            mensalidade_final = mensalidade * 0.75;
    } else {
        printf("Sexo invalido.\n");
        return 1; // Exit program with error
    }
    
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Mensalidade a pagar: R$%.2f\n", mensalidade_final);

}



