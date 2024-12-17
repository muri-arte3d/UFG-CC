/*
Verificando Palíndromos

Objetivo: Verificar se uma string é palíndromo.

Entrada: A string
Saída: sim ou nao
*/

#include <stdio.h>
#include <string.h>

void removeespaco(char *s)
{
    int posicao = 0;
    int len = strlen(s);
    int i;
    for (i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            continue;
        }
        else
        {
            s[posicao] = s[i];
            posicao++;
        }
    }
    s[posicao] = '\0';
}

int palindromo(char *s, int len)
{
    //printf("s[%d] = %c -- s[0] = %c\n", len-1, s[len-1], s[0]);
    if (len <= 1)
    {
        return 1;
    }
    else
    {
        if (s[len-1] != s[0])
        {
            return 0;
        }
        else
        {
            char temp[100];
            int i;
            for (i = 0; i < len - 2; i++)
            {
                temp[i] = s[i + 1];
                //printf("temp[%d] = %c\n", i, temp[i]);
            }
            temp[len - 1] = '\0';
            palindromo(temp, len - 2);
        }
    }
}

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    removeespaco(s);
    s[strcspn(s, "\n")] = '\0';
    //printf("%s\n", s);
    //printf("%s\n", s);

    int len = strlen(s);
    if (palindromo(s, len))
    {
        printf("sim\n");
    }
    else
    {
        printf("não\n");
    }

    return 0;
}