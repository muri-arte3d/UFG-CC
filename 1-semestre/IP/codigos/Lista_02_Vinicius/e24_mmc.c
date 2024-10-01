/*Mínimo múltiplo comum (+++)*/
#include <stdio.h>
#include <math.h>

int primo(int);
int modulo(int);

int main()
{
    int n1, n2, n3;
    int eprimo = -1;
    int mmc = 1;
    scanf("%d %d %d", &n1, &n2, &n3);
    n1 = modulo(n1);
    n2 = modulo(n2);
    n3 = modulo(n3);

    int i = 2;
    while (n1 != 1 || n2 != 1 || n3 != 1)
    {
        eprimo = primo(i);
        if (eprimo != -1) // i é primo
        {
            if (n1 % i == 0 || n2 % i == 0 || n3 % i == 0)
            {
                mmc *= i;
                printf("%d %d %d :%d\n", n1, n2, n3, i);
                if (n1 % i == 0)
                {
                    n1 /= i;
                }
                if (n2 % i == 0)
                {
                    n2 /= i;
                }
                if (n3 % i == 0)
                {
                    n3 /= i;
                }
            }
            else
            {
                i++;
            }
        }
        else
        {
            i++;
        }
    }
    printf("MMC: %d\n", mmc);

    return 0;
}

int primo(int num)
{
    int primo = 1;

    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            primo = 0;
        }
    }
    if (primo == 0 || num == 1)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

int modulo(int num)
{
    if (num < 0){
        return -num;
    }
    else {
        return num;
    }
}
// testa se há algum divisivel
// se sim
// printar, n1 n2 n3 :i
// se i|n1
// n1 = n1 / i
// se i|n2
// n2 = n2 / i
// se i|n3
// n3 = n3 / i
// senão incrementar i
