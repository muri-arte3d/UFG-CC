/*Fibonacci*/
#include <stdio.h>

/**
 * Retorna o n-ésimo termo da sequência de Fibonacci
 * @param t1 primeiro termo da sequência
 * @param t2 segundo termo da sequência
 * @param n a posição do termo desejado da sequência
 * @return o valor do n-ésimo termo da sequência
 */
int fibonacci(int t1, int t2, int n);

int main()
{
    int res;
    int t1, t2, n;
    scanf("%d %d %d", &t1, &t2, &n);

    res = fibonacci(t1, t2, n);

    printf("%d\n", res);

    return 0;
}

int fibonacci(int t1, int t2, int n)
{
    int fib = 0;
    int i;
    for (i = 2; i < n; i++)
    {
        fib = t1 + t2;
        t1 = t2;
        t2 = fib;
    }

    return fib;
}