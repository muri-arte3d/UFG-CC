/*Grãos de milho no tabuleiro de xadrez (+++)*/
#include <stdio.h>

int main()
{
    // Entrada
    int num; // Primeiro quadrado
    scanf("%d", &num);

    // Saída
    int milhoTotal = 0;

    int i;
    int j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if (i % 2 == 1)
            { // Linha ímpar
                if (j % 2 == 1)
                { // Coluna ímpar
                    if (milhoTotal == 0)
                    { // Primeira casa
                        milhoTotal = num;
                    }
                    else
                    {
                        milhoTotal += 2 * num;
                    }
                }
                else
                {
                    milhoTotal += num;
                }
            }
            else
            {
                if (j % 2 == 1)
                {
                    milhoTotal += num;
                }
                else
                {
                    milhoTotal += 2 * num;
                }
            }
        }
    }
    printf("%d\n", milhoTotal);

    return 0;
}