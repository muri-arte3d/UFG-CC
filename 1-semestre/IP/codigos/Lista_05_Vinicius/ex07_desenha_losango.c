/**
 * Desenha losango (+++)
 *
 * Matriz quadrada
 * Maximo 99x99
 * Losango de 45 graus
 *
 * Entrada: (int)  Dimensão (ímpar)
 * Entrada: (char) Desenho borda
 * Entrada: (char) Desenho interior
 *
 * Saída:
 *      Se Dimensão ímpar (Imprimir "Dimensão invalida!")
 *      Se Dimensão par (Continua)
 * Saída: Matriz n x n
 *
 * 0 0 1 0 0
 * 0 1 0 1 0
 * 1 0 0 0 1
 * 0 1 0 1 0
 * 0 0 1 0 0
 *
 * 0 0 0 1 0 0 0
 * 0 0 1 0 1 0 0
 * 0 1 0 0 0 1 0
 * 1 0 0 0 0 0 1
 * 0 1 0 0 0 1 0
 * 0 0 1 0 1 0 0
 * 0 0 0 1 0 0 0
 *
 */
#include <stdio.h>
#define MAX 100

int main()
{
    int dimensao;
    char borda;
    char miolo;
    char tabuleiro[MAX][MAX];
    int count = 1;
    int pos;
    int aux;

    scanf("%d %c %c", &dimensao, &borda, &miolo);
    if (dimensao % 2 == 0)
    {
        printf("Dimensao invalida!\n");
    }
    else
    {
        int i, j;
        for (i = 0; i < dimensao; i++)
        {
            for (j = 0; j < dimensao; j++)
            {
                pos = j + i * dimensao;
                if (i <= dimensao / 2)
                {
                    if ((pos == (dimensao / 2 - i) + i * dimensao) || (pos == (dimensao / 2 + i) + i * dimensao))
                    {
                        printf("%c ", borda);
                    }
                    else if ((pos > (dimensao / 2 - i) + i * dimensao) && (pos < (dimensao / 2 + i) + i * dimensao))
                    {
                        printf("%c ", miolo);
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                else
                {
                    if ((pos == (dimensao / 2 + 1 - (dimensao - i)) + i * dimensao) || (pos == (dimensao / 2 - 1 + (dimensao - i)) + i * dimensao))
                    {
                        printf("%c ", borda);
                        aux = pos;
                    }
                    else if ((pos > (dimensao / 2 + 1 - (dimensao - i)) + i * dimensao) && (pos < (dimensao / 2 - 1 + (dimensao - i)) + i * dimensao))
                    {
                        printf("%c ", miolo);
                    }
                    else
                    {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
        printf("aux = %d\n", aux);
    }

    return 0;
}

/**
 * if (i <= dimensao / 2)
                {
                    if ((pos == (dimensao / 2 - i) + i * dimensao) || (pos == (dimensao / 2 + i) + i * dimensao))
                    {
                        printf("%c ", borda);
                    }
                    else if ((pos > (dimensao / 2 - i) + i * dimensao) && (pos < (dimensao / 2 + i) + i * dimensao))
                    {
                        printf("%c ", miolo);
                    }
                    else
                    {
                        printf("  ");
                    }
                }
                else
                {
                    if ((pos == (count) + i * dimensao) || (pos == (dimensao - count) + i * dimensao))
                    {
                        printf("%c ", borda);
                    }
                    else if ((pos > (count) + i * dimensao) && (pos < (dimensao - count) + i * dimensao))
                    {
                        printf("%c ", miolo);
                    }
                    else
                    {
                        printf("  ");
                    }
                    count++;
                }
            }
            printf("\n");
        }
 */