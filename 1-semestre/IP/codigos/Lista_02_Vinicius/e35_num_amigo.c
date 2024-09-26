/*Procura por numero amigo*/
#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 0;
    int soma2 = 0;
    int n;
    scanf("%d", &n);

    int n_achados = 0;

    // repete o programa n vezes
    while (n_achados != n)
    {
        n1++;
        int i, somador1 = 0;
        for (i = 1; i < n1; i++)
        {
            if (n1 % i == 0)
            {
                n2 += i;
            }
        }
        int j;
        for (j = 1; j < n2; j++)
        {
            if (n2 % j == 0)
            {
                soma2 += j;
            }
        }
        if (soma2 == n1 && n1 != n2 && n1 < n2)
        {
            n_achados++;
            printf("(%d,%d)\n", n1, n2);
        }
        else
        {
            n2 = 0;
            soma2 = 0;
        }
    }

    return 0;
}

/*
repete o programa n vezes
testa um numero n1 e ve quais seus divisores
soma1 seus divisores e guarda em n2
acha os divisores de n2
soma2 os divisores e guarda compara com n1
se soma2 = n1 printar
senao ignora
*/