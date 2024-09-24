#include <stdio.h>

int main() {
  float pfab, perdis, perimp;
  scanf("%f", &pfab);
  scanf("%f", &perdis);
  scanf("%f", &perimp);

  float custocarro = pfab + pfab * (perdis / 100.0) + pfab * (perimp / 100.0);

  printf("O VALOR DO CARRO E = %.2f\n", custocarro);
  return 0;
}