#include <stdio.h>

int main() {
  // var entrada
  int num; // Exemplo: 856
  scanf("%d", &num);

  // var aux
  int alg1, alg2, alg3, digc;
  alg1 = num / 100;            // 8
  alg2 = num / 10 - alg1 * 10; // 5
  alg3 = num - num / 10 * 10;  // 6

  digc = (alg1 + alg2 * 3 + alg3 * 5) % 7;
  /* area de debbug
  printf("alg1 = %d\n", alg1);
  printf("alg2 = %d\n", alg2);
  printf("alg3 = %d\n", alg3);
  */

  // var saida
  int res;
  res = num * 10 + digc;

  printf("O NOVO NUMERO E = %d\n", res);
  return 0;
}