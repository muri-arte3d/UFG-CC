#include <stdio.h>

int main() {
  // Var entrada
  double massa, acel, tdec;
  scanf("%lf", &massa);
  scanf("%lf", &acel);
  scanf("%lf", &tdec);

  // Var saida
  double vel, esp, trab;

  massa = massa * 1000; // toneladas --> kg
  vel = acel * tdec;
  esp = acel * tdec * tdec / 2.0;
  trab = massa * vel * vel / 2.0;

  printf("VELOCIDADE = %.2lf\n", vel * 3.6);
  printf("ESPACO PERCORRIDO = %.2lf\n", esp);
  printf("TRABALHO REALIZADO = %.2lf\n", trab);

  return 0;
}