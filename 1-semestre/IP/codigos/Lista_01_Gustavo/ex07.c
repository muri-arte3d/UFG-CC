#include <stdio.h>
#include <math.h>

int main(){
    float altura, aresta;
    float areaBase, volumePiramide;
    scanf("%f", &altura);
    scanf("%f", &aresta);

    areaBase = (3 * aresta * aresta * sqrt(3)) / 2.0;
    volumePiramide = (1/3.0) * areaBase * altura;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volumePiramide);
    return 0;
}