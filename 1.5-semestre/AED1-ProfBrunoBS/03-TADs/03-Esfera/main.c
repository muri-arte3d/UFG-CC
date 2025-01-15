#include <stdio.h>
#include "esfera.h"

int main()
{
    float raio;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    Esfera* e = inic_esfera(raio);
    printf("Acessa raio: %.2f\n", acessa_raio(e));
    printf("Area da esfera: %.2f\n", area_esfera(e));
    printf("Volume da esfera: %.2f\n", volume_esfera(e));
    dest_esfera(e);

    return 0;
}