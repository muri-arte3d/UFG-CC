#include <stdio.h>

int main() {
  // var entrada
  int ndec;

  // var aux
  int casaMax = 0;

  // var saida
  int nbin = 0;

  scanf("%d", &ndec); // exemplo 242
  if (ndec < 0 || ndec > 255) {
    printf("Numero invalido!\n");
  } else if (ndec == 1) {
    printf("%08d\n", ndec);
  } else {
    int casaMax = 1;
    int maxpot = 0;
    while (ndec != 1 && ndec != 0) {
      int casa = 1;
      int i;
      for (i = 0; i < maxpot; i++) {
        casa *= 10;
      }
      nbin += ndec % 2 * casa;
      ndec = ndec / 2;
      maxpot++;
      casaMax = casa;
    }
    if (ndec == 1) {
      nbin += casaMax * 10;
    }
    // printf("Estou dentro do While\n");
    printf("%08d\n", nbin);
  }

  return 0;
}