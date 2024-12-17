/**
 * Crie um programa que leia uma matriz A, 3x3,
 * e uma constante c e calcule e imprima a matriz B = c * A.
 */
#include <stdio.h>
#define MAX 3

void preenchematrizQuad(int mat[MAX][MAX])
{
    printf("Digite a matriz: \n");
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiplicaMatEsc( int c, int A[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf("%d ", A[i][j] * c);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int A[MAX][MAX];
    int c;
    preenchematrizQuad(A);
    scanf("%d", &c);

    multiplicaMatEsc(c, A);

    return 0;
}