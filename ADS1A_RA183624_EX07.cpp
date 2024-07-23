/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:.Faça um programa que leia três valores inteiros e os escreva em ordem crescente. 

*/

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Digite um valor valor: ");
    scanf(" %d", &a);

    printf("Digite o segundo valor valor: ");
    scanf(" %d", &b);

    printf("Digite o segundo valor valor: ");
    scanf(" %d", &c);



    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

     printf("Valores em ordem crescente: %d %d %d\n", a, b, c);


}