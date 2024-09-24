#include <math.h>
#include <stdio.h>

int main() {
  // var IN
  float x1, y1, x2, y2;
  scanf("%f", &x1);
  scanf("%f", &y1);
  scanf("%f", &x2);
  scanf("%f", &y2);

  // var aux
  float aux1, aux2;
  aux1 = pow(x2 - x1, 2);
  aux2 = pow(y2 - y1, 2);

  // var OUT
  float dist;
  dist = sqrt(aux1 + aux2);

  printf("A DISTANCIA ENTRE A e B = %.2f\n", dist);

  return 0;
}