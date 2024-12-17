#include <stdio.h>
#define MAX 100 //Se colocar 1000 morre de memória

int main()
{
    int N;
    int A[MAX][MAX];
    scanf("%d", &N);
    
    if (N > 1 && N <= 1000)
    {
        int i, j;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i == j)
                {
                    printf("%d\n", A[i][j]);
                }
            }
        }
    }
    return 0;
}