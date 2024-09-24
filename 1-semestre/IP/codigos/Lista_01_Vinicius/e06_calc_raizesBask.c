/*Calcula raizes de polinomios de grau */
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    float delta;
    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("RAIZES IMAGINARIAS\n");
    }
    else if (delta == 0)
    {
        float x1;
        x1 = (-b) / (2.0 * a);
        printf("RAIZ UNICA\n");
        printf("X1 = %.2f\n", x1);
    }
    else
    {
        float x1, x2, temp;
        x1 = (-b - sqrt(delta)) / (2.0 * a);
        x2 = (-b + sqrt(delta)) / (2.0 * a);
        if (x1 > x2)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2f\n", x1);
        printf("X2 = %.2f\n", x2);
    }

    return 0;
}