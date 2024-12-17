/**
 * Contagem (+)
 * Murilo Bueno
 * 31-10-2024
 */
#include <stdio.h>

int main()
{
    int vet[1000];
    int n; //Numero de valores em vet
    int qtdMaioresIgual = 0;

    do
    {
        scanf("%d", &n);
    } while (n < 1 || n > 1000);

    int itera;
    for (itera = 0; itera < n; itera++)
    {
        scanf("%d ", &vet[itera]);
    }

    int valorbase;
    scanf("%d", &valorbase);

    for(itera = 0; itera < n; itera++)
    {
        if (vet[itera] >= valorbase){
            qtdMaioresIgual++;
        }
    }

    printf("%d\n", qtdMaioresIgual);

    return 0;
}