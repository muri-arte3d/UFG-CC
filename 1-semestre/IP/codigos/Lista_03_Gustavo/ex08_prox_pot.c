/**
 * Proxima potencia
 * Nivel: +++
 * Murilo Bueno Julião Lemos
 * 11-10-2024
 */

#include <stdio.h>
#include <math.h>

/**
 * Função que calcula a potencia de p mais proximo a n.
 * @param n valor inteiro
 * @param p valor da potencia
 * @return retorna o valor da potencia mais proxima.
 */
int next_power(int n, int p);

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);

    int pot = (next_power(n, p));
    int res_pot = pow((double) pot, (double) p);
    printf("%d -> %d^%d = %d\n", n, pot, p, res_pot);

    return 0;
}

int next_power(int n, int p)
{
    double res = 0;
    double next_res = 0;
    int i;
    for (i = 0; i <= n / 2; i++)
    {
        res = pow((double)i, (double)p);
        if (res > n)
        {
            return --i;
        }
    }
}