#include <stdio.h>

int main(){
    int a, b, c;
    float delta;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    delta = b * b - 4 * a * c;

    printf("O VALOR DE DELTA E = %.2f\n", delta);

    return 0;
}