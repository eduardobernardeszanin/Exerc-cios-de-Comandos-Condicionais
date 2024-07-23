/*

   AUTOR:....EDUARDO BENARDES ZANIN
   DATA:.....07/05/2024
   OBJETIVO:. 3. Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas extras e no número de horas que o empregado faltou ao trabalho. O valor do prêmio é obtido pela consulta a tabela abaixo, em que H é o número de horas extras subtraído do número de horas faltas.
H( horas)                              Prêmio (R$)
[0,10]                                            20,00
(10,20]                                          40,00
(20,30]                                          60,00
(30,40]                                          80,00
(40,100]                                       100,00
OBS.: O símbolo de parênteses ( indica valores maior que
          O símbolo de colchetes [ Indica inclusive 
Exemplo: (10,20] são os valores maiores que 10 e menores ou iguais a 20 

*/


#include <stdio.h>


int main() {

    float horas_extras, horas_faltas, H, premio;


    // SOLICITA AS ENTRADAS 

    printf("Digite o numero de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);

    printf("Digite o numero de horas que voce faltou ao trabalho: ");
    scanf("%f", &horas_faltas);

    // (horas etras -  horas faltas)

    H = horas_extras - horas_faltas;

    // VALOR DO PREMIO COM BASE EM H

    if (H >= 0 && H <= 10 ) {
        premio = 20.00;
    } else if (H >= 10 && H <= 20) {
        premio = 40.00;
    } else if (H >= 20 && H <= 30) {
        premio = 60.00;
    } else if (H >= 30 && H <= 40) {
        premio = 80.00;
    } else if (H >= 40 && H <= 100) {
        premio = 100.00;
    } else {
        printf("Valor de H do intervalo especificado na tabela. \n");
        return 1;
    }

    //EXIBE O PREMIO CORRESPONDENTE
    printf("o premio de Natal e: R$%.2f \n", premio);
    
    return 0;
}