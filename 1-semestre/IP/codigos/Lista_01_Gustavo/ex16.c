#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);
  int alg1, alg2, alg3;
  int nalg1, nalg2, nalg3;

  alg1 = num / 100;
  // printf("%d\n", alg1);
  alg2 = num / 10 - alg1 * 10;
  // printf("%d\n", alg2);
  alg3 = num - alg1 * 100 - alg2 * 10;
  // printf("%d\n", alg3);
  printf("%d%d%d\n", alg3, alg2, alg1);

  return 0;
}