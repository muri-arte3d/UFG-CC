/*Media de pares e impares*/
#include <stdio.h>

int main()
{
    int n;
    double mimpar = 0;
    double mpar = 0;
    double somaimpar = 0;
    double somapar = 0;
    int iimpares = 0; // numero de iteracoes impares
    int ipares = 0;   // numero de iteracoes pares
    do
    {
        scanf("%d", &n);
        if (n % 2 == 0 && n != 0)
        {
            ipares++;
            somapar += n;
        }
        else if (n % 2 != 0)
        {
            iimpares++;
            somaimpar += n;
        }
    } while (n != 0);

    /**********Area de Debbug******************
    printf("i pares: %d\n", ipares);
    printf("i impares: %d\n", iimpares);
    printf("soma pares: %.6f\n", somapar);
    printf("soma impares: %.6f\n", somaimpar);
    ******************************************/
    if (ipares != 0)
    {
        mpar = somapar / (double)ipares;
    }
    if (iimpares != 0)
    {
        mimpar = somaimpar / (double)iimpares;
    }

    printf("MEDIA PAR: %.6lf\n", mpar);
    printf("MEDIA IMPAR: %.6lf\n", mimpar);
    return 0;
}