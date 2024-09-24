/*Numero de finais*/
#include <stdio.h>

int main()
{
    int ntimes; // numero de times
    int count = 1;
    scanf("%d", &ntimes);

    if (ntimes <= 1)
    {
        printf("Campeonato invalido!\n");
    }
    else
    {
        // Final i: Timej X timek
        int j;
        for (j = 1; j <= ntimes; j++)
        {   
            int k;
            for (k = j + 1; k <= ntimes; k++)
            {
                printf("Final %d: Time%d X Time%d\n", count, j, k);
                count++;
            }
        }
    }

    return 0;
}