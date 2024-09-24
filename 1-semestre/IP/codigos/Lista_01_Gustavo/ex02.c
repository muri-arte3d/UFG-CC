#include <stdio.h>

int main(){
    float fah, cel;
    float pol, milimetros;
    //Ler em Fahrenheit
    //Transforma F para C
    //Ler chuva em pol.
    //Transforma pol. para mm

    scanf("%f", &fah);
    scanf("%f", &pol);

    cel = 5 * (fah - 32)/9.0;
    milimetros = pol * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", cel);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", milimetros);

    return 0;
}