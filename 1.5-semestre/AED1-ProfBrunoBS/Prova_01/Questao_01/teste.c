#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int linhas, colunas;
    printf("Digite o numero de linhas e colunas do labirinto:\n");
    scanf("%d%d", &linhas, &colunas);
    getchar();
    // Alocacao dinâmica do labirinto para passar à função recursiva por referência
    char **labirinto = (char **)malloc(linhas * sizeof(char *));
    for (int i = 0; i < linhas; i++)
    {
        labirinto[i] = (char *)malloc(colunas * sizeof(char));
    }

    printf("Leitura do labirinto:\n");
    // Leitura do labirinto
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf(" %c", &labirinto[i][j]);
        }
    }

    // Desenhando a matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            //printf("i: %d e j: %d -- Simbolo: ", i, j);
            printf("%c ", labirinto[i][j]);
        }
        printf("\n");
    }

    return 0;
}