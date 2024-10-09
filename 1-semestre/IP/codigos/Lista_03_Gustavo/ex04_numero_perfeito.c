/*Numero Perfeito*/
#include <stdio.h>

/**
 * Soma divisores
 * @param num numero inteiro
 * @return soma dos divisores
 */
int somaDivisores(int num);

int main()
{
    int n;
    int res;
    scanf("%d", &n);

    res = somaDivisores(n);
    if (res == n)
    {
        printf(" (NUMERO PERFEITO)\n");
    }
    else
    {
        printf(" (NUMERO NAO E PERFEITO)\n");
    }

    return 0;
}

int somaDivisores(int num)
{
    int res = 0;
    printf("%d =", num);
    if (num == 0){
        printf("Zero não possiu divisor!\n");
        return -1;
    }

    printf(" 1");
    res++;
    // Testar se é divisor de 2 até (num - 1)
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf(" + %d", i);
            res += i;
        }
    }
    printf(" = %d", res);
    return res;
}