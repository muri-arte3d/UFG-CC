/**
 * Proxima potencia
 * Nivel: +++
 * Murilo Bueno Julião Lemos
 * 11-10-2024
 */

#include <stdio.h>

/**
 * Função que calcula a potencia de p mais proximo a n.
 * @param n valor inteiro
 * @param p valor da potencia
 * @return retorna o valor da potencia mais proxima.
 */
int next_power(int n, int p);

/**
 * Calcula potencia.
 * @param base valor inteiro (entrada)
 * @param pot valor inteiro (entrada)
 * @return o valor da potencia em inteiro (saída)
 */
int potencia(int base, int pot);

/**
 * Invert valor de numero negativo
 * @param num valor interio (entrada)
 * @return valor absoluto
 */
int absoluto(int num);

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);

    int pot = (next_power(n, p));
    int res_pot = potencia(pot, p);
    printf("%d -> %d^%d = %d\n", n, pot, p, res_pot);

    return 0;
}

int next_power(int n, int p)
{
    int res = 0;
    int i = 0;
    // Resolve caso de 1^0
    if (n == 1 && p == 0)
    {
        return 1;
    }
    if (potencia(2, p) < 0)
    {
        return 0;
    }
    // Resolve casos gerais
    while (res <= n)
    {
        res = potencia(i, p);
        // printf("res: %d\n", res);
        if (res > n)
        {
            return --i;
        }
        i++;
    }
    // Resolve caso 0^0
    if (n == 0 && p == 0)
    {
        return 0;
    }
    if (p < 0 && (p * -1) % 2 != 0)
    {
        return 1;
    }
}

int potencia(int base, int pot)
{
    int tempot = absoluto(pot);
    int res = 1;
    int i;
    for (i = 1; i <= tempot; i++)
    {
        res *= base;
    }
    if (pot < 0)
    {
        if (pot % 2 == 0)
        {
            return res;
        }
        else
        {
            return -res;
        }
    }
    else
    {
        return res;
    }
}

int absoluto(int num)
{
    if (num < 0)
    {
        return -num;
    }
    return num;
}

/**
 * Possíveis erros
 * next_power( 0, n ) = correto
 * next_power( n, 0 ) = correto (infinito)
 * next_power( 0, 0 )  
 */