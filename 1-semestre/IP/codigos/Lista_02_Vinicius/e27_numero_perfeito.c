/*Numero perfeito*/
#include <stdio.h>

int main()
{
    int somador = 0;
    int n;
    scanf("%d", &n);

    printf("%d =", n);

    int i;
    for (i = 1; i < n; i++)
    {
        if (i == 1)
        {
            printf(" %d", i);
            somador += i;
        }
        else if (n % i == 0)
        {
            printf(" + %d", i);
            somador += i;
        }
    }

    if (somador == n)
    {
        printf(" = %d (NUMERO PERFEITO)\n", somador);
    }
    else
    {
        printf(" = %d (NUMERO NAO E PERFEITO)\n", somador);
    }

    return 0;
}