#include <stdio.h>
#define MAX 2

int main()
{
    double A[MAX][MAX];
    double det;

    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            scanf("%lf", &A[i][j]);
        }
    }

    det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
    printf("%.0lf\n", det);

    return 0;
}