/*Raízes de equações de grau 2 (++)*/
#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("RAIZES IMAGINARIAS\n");
    }
    else if (delta == 0)
    {
        double x1 = (-b) / (2.0 * a);
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
    }
    else
    {
        double x1 = (-b - sqrt(delta)) / (2.0 * a);
        double x2 = (-b + sqrt(delta)) / (2.0 * a);
        if (x1 > x2)
        {
            double temp = x1;
            x1 = x2;
            x2 = temp;
        }

        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }

    return 0;
}