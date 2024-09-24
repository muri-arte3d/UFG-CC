/**********************************
 * Varias ordenacoes
 * Nome: Murilo Bueno Julião Lemos
 * Data: 16/09/2024
 ***********************************/

#include <stdio.h>

int main()
{
    int i;
    float a, b, c, temp;
    scanf("%d", &i);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    // Ordena a b c
    if (a > b) // 15 9 6
    {
        temp = a;
        a = b;
        b = temp;
    } // 9 15 6
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    } // 6 15 9
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    } // 6 9 15

    switch (i)
    {
    case 1:
        printf("%.2f %.2f %.2f\n", a, b, c);
        break;
    case 2:
        printf("%.2f %.2f %.2f\n", c, b, a);
        break;
    case 3:
        printf("%.2f %.2f %.2f\n", b, c, a);
    }

    return 0;
}