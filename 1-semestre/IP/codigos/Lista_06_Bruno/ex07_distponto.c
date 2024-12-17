/**
 * Distanncia entre pontos (++)
 * 
 * Leia pares de pontos em R4
 * Calcula a distancia entre eles
 * 
 * Struct: Ponto {double u, x, y, z}
 *              
 * Entrada: Numero de pontos (int)
 * Entrada: Leitura dos pontos
 * 
 * Saida: dist ponto[i] ponto[i+1];
 * 
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct
{
    double u, x, y, z;
}
Ponto;

int main()
{
    // Variaveis
    int qtdPontos;
    Ponto *p;
    double dist;
    
    scanf("%d", &qtdPontos);

    p = malloc(qtdPontos * sizeof(Ponto));
    if (p == NULL)
    {
        return 1;
    }

    int i;
    for (i = 0; i < qtdPontos; i++)
    {
        scanf("%lf%lf%lf%lf", &p[i].u, &p[i].x, &p[i].y, &p[i].z);
    }
    
    for (i = 0; i < qtdPontos - 1; i++)
    {
        double dif_u, dif_x, dif_y, dif_z;
        dif_u = p[i + 1].u - p[i].u;
        dif_x = p[i + 1].x - p[i].x;
        dif_y = p[i + 1].y - p[i].y;
        dif_z = p[i + 1].z - p[i].z;
        dist = sqrt(dif_u * dif_u + dif_x * dif_x + dif_y * dif_y + dif_z * dif_z);
        printf("%.2lf\n", dist);
    }

    free(p);
    return 0;
}