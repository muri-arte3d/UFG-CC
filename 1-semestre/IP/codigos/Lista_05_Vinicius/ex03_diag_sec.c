#include <stdio.h>
#define MAX 100

int main ()
{
    int N;
    scanf("%d", &N);
    int A[MAX][MAX];
    if(N > 1 && N <= 1000)
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
                if ((i + j) == (N - 1))
                {
                    printf("%d\n", A[i][j]);
                }
            }
        }
    }

    return 0;
}