/**
 * Crie um programa que leia uma matriz 3x3,
 * e imprima o somatório de sua diagonal
 * principal.
 */
#include <stdio.h>
#define MAX 3

void preenchematrizQuad(int mat[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

int somadiagPrinc(int mat[MAX][MAX])
{
    int i, j, soma = 0;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            if (i == j)
            {
                soma += mat[i][j];
            }
        }
    }
    return soma;
}

int main()
{
    int A[MAX][MAX];
    preenchematrizQuad(A);
    printf("A soma das diagonais eh: %d\n", somadiagPrinc(A));
    return 0;
}