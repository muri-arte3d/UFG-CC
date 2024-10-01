/*Conversao de Nota em Conceito*/
#include <stdio.h>

int main()
{
    float nota;
    scanf("%f", &nota);
    char conc;

    printf("NOTA = %.1f ", nota);

    if (nota >= 0 && nota < 6)
    {
        conc = 'D';
    }
    else if (nota >= 6 && nota < 7.5)
    {
        conc = 'C';
    }
    else if (nota >= 7.5 && nota < 9)
    {
        conc = 'B';
    }
    else if (nota >= 9 && nota <= 100)
    {
        conc = 'A';
    }
    printf("CONCEITO = %c\n", conc);

    return 0;
}