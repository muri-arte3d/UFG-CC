/**
 * Calculo da raiz quadrada
 * Nível ++
 * Murilo Bueno Julião Lemos
 * 09-10-2024
 * Exercício meio sem sentido na função "raiz"
 */
#include <stdio.h>

/**
 * Função que calcula a raiz quadrada de n.
 * @param n um numero real qualquer
 * @param p precisao do calculo
 * @return a raiz quadrada de n
 */
double raiz(double n, double p);

/**
 * Valor absoluto de um numero qualquer
 * @param n um numero real qualquer
 * @return o valor absoluto de n
 */
double absoluto(double n);

int main()
{
    double n, erro;
    scanf("%lf", &n);
    scanf("%lf", &erro);

    raiz(n, erro);

    return 0;
}

double raiz(double n, double p)
{
    double res = 1;
    double erro;
    while (absoluto(n - res * res) > p)
    {
        res = (res + (n / res)) / 2.0;
        erro = absoluto(n - res * res);
        
        printf("r: %.9lf, err: %.9lf\n", res, erro);
    }
    return res;
}

double absoluto(double n)
{
    if (n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}