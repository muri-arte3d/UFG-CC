/**
 * Raízes de equações de grau 2 (++)
 * Murilo Bueno Julião Lemos
 * 9-10-2024
 */
#include <stdio.h>
#include <math.h>

/**
 * Troca valores
 * @param valor1 (saída)
 * @param valor2 (saída)
 */
void swap(double *valor1, double *valor2);

/**
 * Tenta computar as raizes de uma equacao do
 *      segundo grau.
 * @param a coeficiente a (entrada)
 * @param b coeficiente b (entrada)
 * @param c coeficiente c (entrada)
 * @param x1 raiz 1 se tiver (saída)
 * @param x2 raiz 2 se tiver (saída)
 * @return tipo de raiz por delta (saída)
 */
int raizesEq2Grau(double a, double b, double c, double *x1,
                  double *x2);

int main()
{
    int tiporaiz;
    double x1, x2;
    double *px1, *px2;
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    px1 = &x1;
    px2 = &x2;

    tiporaiz = raizesEq2Grau(a, b, c, px1, px2);

    switch (tiporaiz)
    {
    case 0:
        printf("RAIZES IMAGINARIAS\n");
        break;

    case 1:
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n", x1);
        break;

    case 2:
        if (x1 > x2)
        {
            swap(px1, px2);
        }
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);

    default:
        break;
    }

    return 0;
}

void swap(double *valor1, double *valor2)
{
    double temp;
    temp = *valor1;
    *valor1 = *valor2;
    *valor2 = temp;
}

int raizesEq2Grau(double a, double b, double c, double *px1,
                  double *px2)
{
    double delta = 0;

    delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *px1 = -b / (2 * a);
        return 1;
    }
    else
    {
        *px1 = (-b - sqrt(delta)) / (2 * a);
        *px2 = (-b + sqrt(delta)) / (2 * a);
        return 2;
    }
}