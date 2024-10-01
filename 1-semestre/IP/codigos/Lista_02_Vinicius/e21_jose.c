/*Jose*/

#include <stdio.h>

int maiorResto(int, int);
int inverteNum(int);

int main()
{
    int casosTeste;
    int n1, n2;
    int maior;

    scanf("%d", &casosTeste);

    int i;
    for (i = 0; i < casosTeste; i++)
    {
        scanf("%d%d", &n1, &n2);
        maior = maiorResto(n1, n2);
        printf("%d\n", inverteNum(maior));
    }
    return 0;
}

int maiorResto(int n1, int n2)
{
    if (n1 % 10 > n2 % 10)
    {
        return n1;
    }
    else if (n2 % 10 > n1 % 10)
    {
        return n2;
    }
    else
    {
        if (n1 / 10 % 10 > n2 / 10 % 10)
        {
            return n1;
        }
        else if (n2 / 10 % 10 > n1 / 10 % 10)
        {
            return n2;
        }
        else
        {
            if (n1 / 100 % 10 > n2 / 100 % 10)
            {
                return n1;
            }
            else
            {
                return n2;
            }
        }
    }
}

int inverteNum(int n){
    int centena;
    int dezena;
    int unidade;

    centena = n / 100;
    dezena = (n / 10) - centena * 10;
    unidade = (n - centena * 100 - dezena * 10);

    return (unidade * 100 + dezena * 10 + centena);
}