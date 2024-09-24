#include <stdio.h>

int main() {
  int dinheiro;
  scanf("%d", &dinheiro);

  int n100, n50, n10, n1;

  n100 = dinheiro / 100;
  int resto100 = dinheiro % 100;
  n50 = resto100 / 50;
  int resto50 = resto100 % 50;
  n10 = resto50 / 10;
  n1 = resto50 % 10;

  printf("NOTAS DE 100 = %d\n", n100);
  printf("NOTAS DE 50 = %d\n", n50);
  printf("NOTAS DE 10 = %d\n", n10);
  printf("MOEDAS DE 1 = %d\n", n1);
  return 0;
}