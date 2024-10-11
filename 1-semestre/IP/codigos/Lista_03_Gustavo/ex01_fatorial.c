/*Fatorial*/
#include <stdio.h>

/**
 * Funçao que calcula o fatorial de um numero n
 * @param n um numero inteiro positivo
 * @return o fatorial n;
 */
unsigned long int fatorial(unsigned int n);

int main()
{
    unsigned int num;
    unsigned long int fat;

    scanf("%d", &num);

    fat = fatorial(num);

    printf("%d! = %d\n", num, fat);
    return 0;
}

unsigned long int fatorial(unsigned int n)
{
    unsigned long int fat = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fat *= i;
    }
    return fat;
}