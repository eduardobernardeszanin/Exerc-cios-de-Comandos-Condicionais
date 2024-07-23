/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:.Elaborar a leitura de um número inteiro e apresentar uma mensagem informando se o número é par ou impar. 

*/

#include <stdio.h>

int main() {


    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num %2 == 0) {
        printf("Este numero e par!");
    } else {
        printf("Este numero e impar!");
    }

}