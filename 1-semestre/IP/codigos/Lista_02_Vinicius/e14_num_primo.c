/*Numero primo (++)*/
#include <stdio.h>
#include <math.h>

int inverte(int);

int main()
{
    int num;
    int primo = 1;
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Numero invalido!\n");
    }
    else
    {
        int i;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
            }
        }
        if (primo == 0 || num <= 1)
        {
            printf("NAO PRIMO\n");
        }
        else
        {
            printf("PRIMO\n");
        }
    }
    return 0;
}
