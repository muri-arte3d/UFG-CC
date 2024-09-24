/*Verifica se um numero de até 5 digito é um palindromo*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 99999) // possui mais de 5 digitos
    {
        printf("NUMERO INVALIDO\n");
    }
    else if (num > 9999) // possui 5 digitos
    {
        int a5, a4, a3, a2, a1;
        a5 = num / 10000;
        a4 = (num - a5 * 10000) / 1000;
        a3 = (num - a5 * 10000 - a4 * 1000) / 100;
        a2 = (num - a5 * 10000 - a4 * 1000 - a3 * 100) / 10;
        a1 = (num - a5 * 10000 - a4 * 1000 - a3 * 100 - a2 * 10);

        if (a1 == a5 && a2 == a4)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if (num > 999) // possui 4 digitos
    {
        int a4, a3, a2, a1;
        a4 = num / 1000;
        a3 = (num - a4 * 1000) / 100;
        a2 = (num - a4 * 1000 - a3 * 100) / 10;
        a1 = (num - a4 * 1000 - a3 * 100 - a2 * 10);

        if (a1 == a4 && a2 == a3)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if (num > 99) // possui 3 digitos
    {
        int a3, a2, a1;
        a3 = num / 100;
        a2 = (num - a3 * 100) / 10;
        a1 = (num - a3 * 100 - a2 * 10);

        if (a1 == a3)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if (num > 9) // possui 2 digitos
    {
        int a2, a1;
        if (a1 == a2)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }
    }
    else if (num > -1)
    {
        printf("PALINDROMO\n");
    }
    else{
        printf("VOCE NEM DEVERIA ESTAR AQUI\n");
    }

    return 0;
}