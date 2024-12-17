#include <stdio.h>

int main()
{
    double A[2][2];
    double B[2][2]; // B = A * A
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            B[i][j] = 0;
            for (k = 0; k < 2; k++)
            {
                B[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%.3lf ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

/**
 * Anotacoes
 *
 * A00 A01 A02
 * A10 A11 A12
 * A20 A21 A22
 *
 * A00 * A00 + A01 * A10 + A02 * A20
 * A00 * A01 + A01 * A11 + A02 * A21
 *
 * Aij
 */