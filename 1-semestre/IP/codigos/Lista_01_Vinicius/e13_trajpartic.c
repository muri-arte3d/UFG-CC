/*
 * Calculo de trajetoria de particula
 * Nome: Murilo Bueno Julião Lemos
 * Data: 15/09/2024
 */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c; // coeficiente de pol de grau 2
    scanf("%d%d%d", &a, &b, &c);
    int delta;

    delta = b * b - 4 * a * c;

    if (delta < 0) // raizes imaginarias
    {
        printf("POSICOES IMAGINARIAS\n");
    }
    else // raizes reais
    {
        float x1 = (-b + sqrt(delta)) / (2.0 * a);
        float x2 = (-b - sqrt(delta)) / (2.0 * a);

        if (x1 > 5 || x1 < -5 || x2 > 5 || x2 < -5) // Fora do range do experimento
        {
            printf("POSICOES: X1=%.2f e X2=%.2f (FORA DO EXPERIMENTO)\n", x1, x2);
        }
        else // Dentro do range do experimento
        {
            printf("POSICOES: X1=%.2f e X2=%.2f\n", x1, x2);
        }

        if ((a + b + c) % 3 == 0)
        {
            printf("FATO1: DESAPARECIDA\n");
        }
        if ((c % 2) == 0 && c < (a + b))
        {
            printf("FATO2: ORIGEM\n");
        }
    }

    return 0;
}