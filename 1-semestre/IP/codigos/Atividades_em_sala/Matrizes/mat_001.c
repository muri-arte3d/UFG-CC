/**
 * Crie um programa que leia
 * duas matrizes, A e B, de
 * dimensão 3 e calcule a matriz
 * C = A + B.
 */

#include <stdio.h>
#define MAX 3

int main()
{
    int A[MAX][MAX];
    int B[MAX][MAX];
    int C[MAX][MAX];

    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("C[%d][%d] = %d\n", i, j, C[i][j]);
        }
    }

    return 0;
}