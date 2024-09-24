/*
* Sistemas de Equacoes lineares
* Nome: Murilo Bueno Julião Lemos
* Data: 16/09/2024
*
* Observacoes
* ---- ax + by = c ---- * (d / a)
* ---- dx + ey = f ----
*/

#include <stdio.h>

int main(){
    int a, b, c, d , e, f;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);

    // metodo de Gauss parcial
    float a_atl, b_alt, c_alt, e_alt, f_alt;

    float mult = d / (float)a;
    //printf("mult: %.2f\n", mult);
    a_atl = a * mult;
    b_alt = b * mult;
    c_alt = c * mult;
    e_alt = e - b_alt;
    f_alt = f - c_alt;

    float y = (float)f_alt / e_alt;
    float x = (c - b * y) / a;

    printf("O VALOR DE X E = %.2f\n", x);
    printf("O VALOR DE Y E = %.2f\n", y);

    return 0;
}