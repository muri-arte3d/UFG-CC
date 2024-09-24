/*Fatorial*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("0! = 1\n");
    }
    else
    {
        int fat = 1;
        int i = 1;
        while (i <= n)
        {
            fat *= i;
            i++;
        }
        printf("%d! = %d\n", n, fat);
    }
    return 0;
}