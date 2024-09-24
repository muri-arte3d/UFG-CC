/* Conversões para o Sistema Métrico (+) */

#include <stdio.h>

int main(){
    // leitura de fahrenheit
    float far, cel;
    scanf("%f", &far);

    // leitura de quantidade de chuva
    float pol, mm;
    scanf("%f", &pol);

    cel = 5 * (far - 32) / 9.0;
    mm = pol * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", cel);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", mm);

    return 0;
}