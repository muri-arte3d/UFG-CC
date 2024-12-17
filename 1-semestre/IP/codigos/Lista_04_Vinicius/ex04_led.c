/**
 * PROGRAMA: LED
 * NOME: MURILO BUENO JULIÃO LEMOS
 * DATA: 06-11-2024
 * ATUALIZACAO: 24-11-2024
 */
#include <stdio.h>
#include <string.h>

const int led[11] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
/**
 * Cola:
 * 0 = 6
 * 1 = 2
 * 2 = 5
 * 3 = 5
 * 4 = 4
 * 5 = 5
 * 6 = 6
 * 7 = 3
 * 8 = 7
 * 9 = 6
 */

int numleds(char num[])
{
    int num_leds = 0;
    int num_digitos = strlen(num);
    int i;
    for (i = 0; i < num_digitos; i++)
    {
        num_leds += led[num[i] - '0'];
    }

    return num_leds;
}

int main()
{
    char vet[1000];
    int tamanho;

    scanf("%d", &tamanho);
    if (tamanho >= 1 && tamanho <= 1000)
    {
        int i;
        for (i = 0; i < tamanho; i++)
        {
            scanf("%s", vet); // Lê o valor em string

            printf("%d leds\n", numleds(vet));
        }
    }

    return 0;
}