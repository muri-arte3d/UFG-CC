#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

int main()
{
    float aresta;
    Cubo* cubo;

    printf("Digite o valor da aresta do cubo: ");
    scanf("%f", &aresta);

    cubo = inicializacao(aresta);
    printf("Aresta = %.2f\n", acessa_dados(cubo));
    printf("Area = %.2f\n", area_cubo(cubo));
    printf("Volume = %.2f\n", volume_cubo(cubo));
    destroi(cubo);

    return 0;
}
