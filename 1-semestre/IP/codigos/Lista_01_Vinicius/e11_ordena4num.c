/*Ordena 4 numeros*/
#include <stdio.h>

int main()
{
    float e1, e2, e3, e4;
    scanf("%f", &e1);
    scanf("%f", &e2);
    scanf("%f", &e3);
    scanf("%f", &e4);

    float n1, n2, n3, n4;
    float temp;

    n1 = e1;
    n2 = e2;
    n3 = e3;
    n4 = e4;

    if (n1 > n2)
    {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }
    if (n1 > n3)
    {
        temp = n3;
        n3 = n1;
        n1 = temp;
    }
    if (n1 > n4)
    {
        temp = n4;
        n4 = n1;
        n1 = temp;
    }
    if (n2 > n3)
    {
        temp = n3;
        n3 = n2;
        n2 = temp;
    }
    if (n2 > n4)
    {
        temp = n4;
        n4 = n2;
        n2 = temp;
    }
    if (n3 > n4){
        temp = n4;
        n4 = n3;
        n3 = temp;
    }

    printf("%.2f, %.2f, %.2f, %.2f", n1, n2, n3, n4);

    return 0;
}