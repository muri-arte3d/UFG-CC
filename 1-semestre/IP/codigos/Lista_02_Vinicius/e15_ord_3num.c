/*Ordena 3 números (++)*/
#include <stdio.h>

int main()
{
    float n1, n2, n3;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    int temp;
    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if (n1 > n3)
    {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    if (n2 > n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("%.2f, %.2f, %.2f\n", n1, n2, n3);
    return 0;
}