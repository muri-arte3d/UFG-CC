/*Converte um numero decimal em binario de 8 digitos*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n > 255 || n < 0)
    {
        printf("Numero invalido!\n");
    }
    else
    {
        int a8, a7, a6, a5, a4, a3, a2, a1;
        int q8, q7, q6, q5, q4, q3, q2;

        a8 = n % 2;  // 0000000_
        q8 = n / 2; 
        a7 = q8 % 2; // 000000_0
        q7 = q8 / 2;
        a6 = q7 % 2; // 00000_00
        q6 = q7 / 2;
        a5 = q6 % 2; // 0000_000
        q5 = q6 / 2;
        a4 = q5 % 2; // 000_0000
        q4 = q5 / 2;
        a3 = q4 % 2; // 00_00000
        q3 = q4 / 2;
        a2 = q3 % 2; // 0_000000
        q2 = q3 / 2;
        a1 = q2 % 2; // _0000000

        printf("%d%d%d%d%d%d%d%d\n", a1, a2, a3, a4, a5, a6, a7, a8);
    }

    return 0;
}