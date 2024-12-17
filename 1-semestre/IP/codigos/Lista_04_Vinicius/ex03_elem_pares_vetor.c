/**
 * PROGRAMA: ELEMENTOS PARES DO VETOR
 * NOME: MURILO BUENO JULIÃO LEMOS
 * DATA: 06-11-2024
 */

#include <stdio.h>

int main()
{
    int vet[1000];
    int tamanho;
    scanf("%d", &tamanho);

    int i;
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vet[i]);
    }

    int vetpares[1000];
    int j = 0;
    for (i = 0; i < tamanho; i++)
    {
        if (vet[i] % 2 == 0)
        {
            vetpares[j] = vet[i];
            j++;
        }
    }

    int tamanhovetpares = 0;
    for (i = 0; i < j; i++)
    {
        printf("%d ", vetpares[i]);
    }
    printf("%d \n", j);

    return 0;
}