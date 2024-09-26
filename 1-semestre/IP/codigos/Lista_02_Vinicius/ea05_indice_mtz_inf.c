/*Indices da matriz inferior*/

#include <stdio.h>

int main()
{
    int nlinhas, ncolunas;
    scanf("%d", &nlinhas);
    scanf("%d", &ncolunas);

    int i;
    int j;
    // int count = 2;
    for (i = 2; i <= nlinhas; i++)
    {
        for (j = 1; j < i && j <= ncolunas; j++)
        {
            if (j != i - 1 && j < ncolunas)
            {
                printf("(%d,%d)-", i, j);
            }
            else
            {
                printf("(%d,%d)\n", i, j);
            }
        }
    }

    return 0;
}