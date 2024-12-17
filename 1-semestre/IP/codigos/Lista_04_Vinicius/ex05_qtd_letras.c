/**
 * PROGRAM: QUANTAS LETRAS? (+)
 * NOME: MURILO BUENO JULIÃO LEMOS
 * DATA: 07-11-2024
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int num_linhas;
    scanf("%d", &num_linhas);
    char linha[10001];

    int i;
    for (i = 0; i < num_linhas; i++)
    {
        fflush(stdin);
        fgets(linha, sizeof(linha), stdin);

        int letras = 0;
        int vogais = 0;
        int consoantes = 0;

        printf("Linhas lida: **%s**\n", linha);

        int j;
        for (j = 0; linha[j] != '\0' && linha[j] != '\n'; j++)
        {
            char c = linha[j];
            if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            {
                letras++;
                
                if(c >= 'A' && c <= 'Z')
                {
                    c = c + ('a' - 'A');
                }

                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                {
                    vogais++;
                }
                else
                {
                    consoantes++;
                }
            }
        }
        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }

    return 0;
}