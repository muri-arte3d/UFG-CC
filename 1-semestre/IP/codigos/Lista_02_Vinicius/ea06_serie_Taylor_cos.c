/*Serie de Taylor para a funcao cosseno (++++)*/
#include <stdio.h>
#include <math.h>

int fatorial(int);

int main()
{
    double cos;

    double x;
    int n;
    scanf("%lf", &x);
    scanf("%d", &n);

    int i;
    for (i = 0; i <= n; i++)
    {
        cos += (pow(-1, i) * pow(x, 2 * i)) / (fatorial(2 * i));
        //    printf("Iteracao(%d): %.6lf\n", i, cos);
    }
    printf("cos(%.2lf) = %.6lf\n", x, cos);

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
    // printf("fatorial de %d eh %d\n", num, fat); Correto!
    return fat;
}