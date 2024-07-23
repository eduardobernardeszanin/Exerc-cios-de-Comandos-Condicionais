/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:.Dado um número inteiro positivo identificar se o mesmo é par, ímpar, múltiplo de 3, múltiplo de 5 ou múltiplo de 7. 

*/

#include <stdio.h>

int main() {

    int numero;

    //SOLICITA INSERIR UM NUMERO INTEIRO
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    
    //VERIFICA SE O NUMERO É PAR OU IMPAR 
    
    if (numero % 2 == 0) {
        printf("%d e par \n", numero);
    } else {
        printf("%d e impar \n", numero);
    }


    
    //VERIFICA SE O NUMERO É MULTIPLO DE 3

    if (numero % 3 == 0) {
        printf("%d e um multiplo de 3 \n", numero);
    }

    
    //VERIFICA SE  NUMERO E MULTIPLO DE 7
    
    if (numero % 7 == 0) {
        printf("%d e um multiplo de 7 \n", numero);
    }


}