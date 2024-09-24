/*Hipotenusas inteiras*/
#include <stdio.h>
#include <math.h>

void catetos_hipotenusa(int);

int main()
{
    int m_hipo; // será lido pelo usuario
    scanf("%d", &m_hipo);

    // testar todos os catetos para determinada hipotenusa
    // testar de 1 até n
    int i;
    for (i = 1; i <= m_hipo; i++)
    {
        catetos_hipotenusa(i);
    }

    return 0;
}

void catetos_hipotenusa(int hipo)
{
    int c1;
    int c2;
    for (c1 = 1; c1 < hipo; c1++)
    {
        for (c2 = 1; c2 < hipo; c2++)
        {
            if (c1 > c2)
            {
                continue;
            }
            // printf("c1 = %d\n", c1);
            // printf("c2 = %d\n\n", c2);
            if (hipo == sqrt(c1 * c1 + c2 * c2))
            {
                printf("hipotenusa = %d, catetos %d e %d\n", hipo, c1, c2);
            }
        }
    }
}