/**
 * Desenha bordas
 *
 * Entrada 01: (int) largura
 * Entrada 02: (int) altura
 * Entrada 03: (int) borda
 * Entrada 04: (int) desenho
 *
 * Saída 01: P2
 * Saída 02: (int) largura - (int) altura
 * Saída 03: 255
 * Saída 04: (int[][]) matriz
 *
 * Para borda única
 * Se i == 0 || i == altura || j == 0 || j == largura
 *
 * Para borda grossa
 * linha i
 * linha i + 1
 * linha i + 2
 * ...
 * linha i + borda
 *
 * coluna j
 * coluna j + 1
 * coluna j + 2
 * ...
 * coluna j + borda
 *
 */
#include <stdio.h>
#define MAX 100

int main()
{
    int largura;
    int altura;
    int borda;
    int desenho;

    scanf("%d %d %d %d", &largura, &altura, &borda, &desenho);

    printf("P2\n");
    printf("%d %d\n", largura, altura);
    printf("255\n");

    int A[MAX][MAX];

    int i, j;
    for (i = 0; i < altura; i++)
    {
        for (j = 0; j < largura; j++)
        {
            if (i < borda || i > altura - 1 - borda || j < borda || j > largura - 1 - borda)
            {
                printf("%d ", desenho);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}