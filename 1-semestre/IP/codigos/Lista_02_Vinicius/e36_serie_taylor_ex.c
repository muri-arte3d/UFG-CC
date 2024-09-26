/*Serie de Taylor para a funcao e^x (++++)*/
#include <stdio.h>
#include <math.h>

int fatorial(int);

int main()
{
    double x, nep = 0;
    int n;
    scanf("%lf", &x);
    scanf("%d", &n);

    int i;
    for (i = 0; i <= n; i++)
    {
        nep += pow(x, i) / fatorial(i);
    }

    printf("e^%.2lf = %.6lf", x, nep);

    return 0;
}

int fatorial(int num)
{
    int fat = 1;
    int i;
    for (i = 1; i <= num; i++)
    {
        fat *= i;
    }
    return fat;
}

// declara x (double), n (int) e nep (double)
// leitura de x double
// leitura de n int

// declara i = 0
// loop de 0 até n
// nep += x^i / fat(i)
// printa resultado