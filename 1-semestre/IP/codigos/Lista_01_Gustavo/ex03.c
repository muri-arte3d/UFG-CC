#include <stdio.h>
#define PI 3.14159

int main(){
    float raio, altura;
    float aCili, aCirc, aLat;

    scanf("%f", &raio);
    scanf("%f", &altura);

    aCirc = PI * raio * raio;
    aLat = 2 * PI * raio * altura;
    aCili = 2 * aCirc + aLat;

    printf("O VALOR DO CUSTO E = %.2f\n", aCili * 100);

    return 0;
}