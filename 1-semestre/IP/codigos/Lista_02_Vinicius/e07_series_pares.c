/*Serie de pares*/

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("\n");

    if (x % 2 != 0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    else
    {
        int i = 0;
        while(i < y){
            printf("%d ", (x + 2 * i));
            i++;
        }
        printf("\n");
    }

    return 0;
}