#include <stdio.h>

int main() {
  float a, b, c, d, e, f;
  float x, y;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  scanf("%f", &e);
  scanf("%f", &f);

  // Transformando em matriz
  float a11, a12, a13, a21, a22, a23;
  a11 = a;
  a12 = b;
  a13 = c;
  a21 = d;
  a22 = e;
  a23 = f;

  /*
    (a11   a12   a13)
    (a21   a22   a23)
  */

  // metodo de gauss parcial
  float mult = a21 / a11;
  a11 *= mult;
  a12 *= mult;
  a13 *= mult;

  a21 -= a11;
  a22 -= a12;
  a23 -= a13;

  y = a23 / a22;
  x = (c - b * y) / a;

  printf("O VALOR DE X E = %.2f\n", x);
  printf("O VALOR DE Y E = %.2f\n", y);
  return 0;
}