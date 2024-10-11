/***********************************
 * Programa: Calculo de PI
 * Nivel: ++++
 * Autor: Murilo Bueno Julião Lemos
 * Data: 11/10/2024
 ***********************************/
#include <stdio.h>

/**
 * Função que calcula o valor de pi usando a série proposta
 *      por John Wallis.
 * @param n quantidade de termos da série.
 * @return o valor aproximado da constante pi.
 */
double compute_pi(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("%.12lf\n", compute_pi(n));

    return 0;
}

double compute_pi(int n)
{
    double pi = 1;
    int count = 0;
    int num = 2;
    int den = 1;
    while (count < n)
    {
        pi *= (double) num / den;
        if (count % 2 == 0)
        {
            den += 2;
        }
        else
        {
            num += 2;
        }
        count++;
    }
    return pi * 2;
}