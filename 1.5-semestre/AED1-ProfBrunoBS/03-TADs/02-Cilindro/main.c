#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

int main()
{
    float raio, altura;
    printf("Digite o valor do raio e altura: ");
    scanf("%f%f", &raio, &altura);

    Cilindro* c = inic_cilindro(raio, altura);
    printf("Raio: %.2f - Altura: %.2f\n", acessa_raio(c), acessa_altura(c));
    printf("Area: %.2f\n", area_cilindro(c));
    printf("Volume: %.2f\n", volume_cilindro(c));
    dest_cilindro(c);

    return 0;
}