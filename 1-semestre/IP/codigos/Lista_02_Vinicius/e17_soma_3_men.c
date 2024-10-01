/*Soma dos 3 menores (++)*/
#include <stdio.h>

int main()
{
    int n[4], temp;
    scanf("%d", &n[0]);
    scanf("%d", &n[1]);
    scanf("%d", &n[2]);
    scanf("%d", &n[3]);

    if (n[0] > n[1])
    {
        temp = n[0];
        n[0] = n[1];
        n[1] = temp;
    }
    if (n[0] > n[2])
    {
        temp = n[0];
        n[0] = n[2];
        n[2] = temp;
    }
    if (n[0] > n[3])
    {
        temp = n[0];
        n[0] = n[3];
        n[3] = temp;
    }

    if (n[1] > n[2])
    {
        temp = n[1];
        n[1] = n[2];
        n[2] = temp;
    }

    if (n[1] > n[3])
    {
        temp = n[1];
        n[1] = n[3];
        n[3] = temp;
    }
    if (n[2] > n[3])
    {
        temp = n[2];
        n[2] = n[3];
        n[3] = temp;
    }

    printf("%d\n", (n[0] + n[1] + n[2]));
    return 0;
}