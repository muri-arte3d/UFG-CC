/*Maior segmento crescente de uma sequencia*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int maior = 0;
    int grava_maior = 1;
    int ant = -1;
    int i;
    for (i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp > ant)
        {
            maior++;
        }
        else
        {
            maior = 1;
        }
        if (maior > grava_maior)
        {
            grava_maior = maior;
        }
        /*printf("anterior = %d\n", ant);
        printf("atual = %d\n", temp);
        printf("maior seq = %d\n", maior);
        printf("Grava maior = %d\n", grava_maior);*/
        ant = temp;
    }
    printf("O comprimento do segmento crescente maximo e: %d\n", grava_maior);

    return 0;
}