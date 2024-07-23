/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:.Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem dizendo que o aluno foi aprovado, se o valor da media escolar for maior ou igual a 7. Se o valor da media for menor que 7 mostrar a mensagem que o aluno reprovou. 

*/

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7.0) {
        printf("Aluno aprovado! Media: %.2f\n", media);
    } else {
        printf("Aluno reprovado! Media: %.2f\n", media);
    }


}