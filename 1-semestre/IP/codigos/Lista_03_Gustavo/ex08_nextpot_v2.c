/**
 * O maior problema desse exercício é que deve-se saber
 * qual a potência mais próxima de n, sendo que essa
 * potência pode estar próxima por cima ou por baixo,
 * ou seja, potencia > n ou potencia < n;
 */

#include <stdio.h>
#include <math.h>

/**
 * Função que calcula a potencia de p mais proximo a n
 * @param n valor inteiro
 * @param p valor da potencia
 * @return retorna o valor da potencia mais proxima.
 */
int next_power(int n, int p);

/**
 * Função que restorna valor absoluto
 * @param valor valor inteiro
 * @retur valor absoluto inteiro
 */
int absoluto(int valor);

int main()
{
    int n, p, potencia, base;
    scanf("%d %d", &n, &p);

    potencia = next_power(n, p); // Valor da potencia mais proxima a n
    if (p == 0)
    {
        base = 1;
    }
    else
    {
        base = pow(potencia, (1.0 / p)); // Base usando radiciação do valor de potencia
    }
    printf("%d -> %d^%d = %d\n", n, base, p, potencia);

    return 0;
}

int next_power(int n, int p)
{
    int i;
    int potenciaBaixa = 0;
    int potenciaAlta = 0;
    int aux;
    for (i = 0; i <= n; i++)
    {
        aux = pow(i, p);
        // Esse "if" trata valores menores que n
        if (aux <= n)
        {
            potenciaBaixa = aux;
        }
        /**
         * Esse "else" evita que se use valores acima
         * desnecessários.
         * Exemplo: n = 8 e p = 2
         * testa i = 0 -> aux = 0 (aux < n) cai no if
         * testa i = 1 -> aux = 1 (aux < n) cai no if
         * testa i = 2 -> aux = 4 (aux < n) cai no if
         * testa i = 3 -> aux = 9 (aux > n) cai no else
         * else evita de continuar
         */
        else
        {
            potenciaAlta = aux;
            break;
        }
    }
    /**
     * Agora é só testar quem está mais próxima
     * Se é por cima de n
     * Se é por baixo de n
     */

    if (absoluto(n - potenciaBaixa) <= absoluto(n - aux))
    {
        return potenciaBaixa;
    }
    else
    {
        return potenciaAlta;
    }
}

int absoluto(int valor)
{
    if (valor < 0)
    {
        return -valor;
    }
    else
    {
        return valor;
    }
}
