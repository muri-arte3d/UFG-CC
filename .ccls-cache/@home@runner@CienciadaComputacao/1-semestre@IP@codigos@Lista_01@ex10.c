#include <math.h>
#include <stdio.h>

int main() {
  float l1, l2, l3;
  scanf("%f", &l1);
  scanf("%f", &l2);
  scanf("%f", &l3);

  float areaTri, t;
  t = (l1 + l2 + l3) / 2.0;
  areaTri = sqrt(t * (t - l1) * (t - l2) * (t - l3));

  printf("A AREA DO TRIANGULO E = %.2f\n", areaTri);
  return 0;
}