/**
 * Atividade gerada do arquivo "trabalho.hex"
 * 
 * Entrada: str (char [256])
 * Saída: strp (char [256*3])
 */
#include <stdio.h>
#include <string.h>
#define MAX 256

int vogal(char letra)
{
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        return 1;
    }
    else if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char str[MAX];
    char strp[MAX*3];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; //Remove o \n do final

    int i = 0;
    int j = 0;
    while(str[i] != '\0')
    {
        if(vogal(str[i]))
        {
            strp[j] = str[i];
            strp[j + 1] = 'p';
            strp[j + 2] = str[i];
            j += 3;
        }
        else
        {
            strp[j] = str[i];
            j++;
        }
        i++;
    }
    strp[j] = '\0';

    printf("%s\n", strp);

    return 0;
}