/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:.Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 ou por 3.

*/


#include <stdio.h>


int main() {

    int numeros[4];
    int i;

    // FAZER A LEITURA DE QUATRO NUMEROS INTEIROS

    printf("Digite quatro numeros inteiros: \n");
    for (i = 0; i < 4; i++) {
        scanf("%d", &numeros[i]);
    }

    // VERIFICAR E APRESENTAR OS NUMEROS DIVISIVEIS POR 2 OU POR 3

    printf("Numeros divisiveis por 2 ou por 3: \n");
    for (i = 0; i < 4; i++) {
        if (numeros[i] % 2 == 0 || numeros[i] % 3 == 0 ) {
            printf("%d \n", numeros[i]);
        }
    }

}