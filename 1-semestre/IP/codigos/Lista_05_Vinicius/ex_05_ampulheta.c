/**
 * Ampulheta
 *
 * Entrada: Matriz quadrada de ordem 6
 *
 * Saída: Inteiro que é a maior soma de uma
 * ampulheta
 *
 * Formato da ampulheta
 * A[i][j]       A[i][j+1]       A[i][j+2]
 *             A[i+1][j+1]
 * A[i][j+2]   A[i+1][j+2]       A[i+2][j+2]
 *
 * Teste máximo
 * de i = 0 até i = 3
 * de j = 0 até j = 3
 */
#include <stdio.h>
#define LINHA 6
#define COLUNA 6

int main()
{
    int A[LINHA][COLUNA];
    int soma = 0;
    int maior;

    // Leitura da matriz
    int i, j;
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Teste de soma
    for (i = 0; i < LINHA - 2; i++)
    {
        for (j = 0; j < COLUNA - 2; j++)
        {
            //printf("Iterando A[%d][%d]\n", i, j);
            soma = A[i][j] + A[i][j + 1] + A[i][j + 2] + A[i + 1][j + 1] + A[i + 2][j] + A[i + 2][j + 1] + A[i + 2][j + 2];
            if (i == 0 && j == 0)
            {
                maior = soma;
            }
            if (soma > maior)
            {
                maior = soma;
            }
        }
    }

    printf("Maior: %d\n", maior);

    return 0;
}