/*Somatorio simples*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 1)
    {
        printf("Numero invalido!\n");
    }
    else
    {
        float somatorio = 0;
        int i = 1;
        while(i <= n)
        {
            somatorio += 1.0 / i;
            i++;
        }
        printf("%.6f\n", somatorio);
    }

    return 0;
}