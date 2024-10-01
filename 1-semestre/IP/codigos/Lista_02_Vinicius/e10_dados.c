/*Dados (++)*/
#include <stdio.h>

int main()
{
    int n, poss = 0;
    scanf("%d", &n);

    int d1 = 0;
    int d2 = 0;
    for (d1 = 1; d1 < 7; d1++)
    {
        for (d2 = 1; d2 < 7; d2++)
        {
            if ((d1 + d2 == n) && (d1 != d2))
            {
                printf("D1: %d, D2: %d\n", d1, d2);
                poss++;
            }
        }
    }
    if (poss != 0)
    {
        printf("Ha %d possibilidades\n", poss);
    }
    else
    {
        printf("Combinacao impossivel\n");
    }

    return 0;
}

/*
    if (n > 2)
    {
        int i;
        for (i = 1; i < n; i++)
        {
            printf("D1: %d, D2: %d\n", i, n-i);
        }
        printf("Ha %d possibilidades\n", n - 1);
    }
    else
    {
        printf("Combinacao impossivel\n");
    }
*/