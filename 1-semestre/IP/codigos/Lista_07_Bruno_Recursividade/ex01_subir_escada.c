/*
Contando Formas de Subir Escadarias

Objetivo: Encontrar um numero de formas de subir uma escada
com n degraus.

Só se pode dar passos de 1 ou 2 degraus.

Entrada: n (int)
Saída: total (int)

Se n = 1
1
Total = 1

Se n = 2
1 + 1
2
Total = 2

Se n = 3
1 + 1 + 1
1 + 2
2 + 1
Total = 3

Se n = 4
1 + 1 + 1 + 1
1 + 1 + 2
1 + 2 + 1
2 + 1 + 1
2 + 2
Total = 5

Se n = 5
1 + 1 + 1 + 1 + 1
2 + 1 + 1 + 1
1 + 1 + 1 + 2
1 + 2 + 1 + 1
1 + 1 + 2 + 1
2 + 2 + 1
2 + 1 + 2
1 + 2 + 2
Total = 8

Se n = 6
1 + 1 + 1 + 1 + 1 + 1
2 + 1 + 1 + 1 + 1
1 + 2 + 1 + 1 + 1
1 + 1 + 2 + 1 + 1
1 + 1 + 1 + 2 + 1
1 + 1 + 1 + 1 + 2
2 + 2 + 1 + 1
2 + 1 + 2 + 1
2 + 1 + 1 + 2
2 + 2 + 2
Total = 13

Claramente segue a sequência de fibonacci
*/
#include <stdio.h>

int escada(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return escada(n - 1) + escada(n - 2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d\n", escada(n));

    return 0;
}