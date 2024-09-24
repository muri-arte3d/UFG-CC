#include <math.h>
#include <stdio.h>

int main() {
  float num;
  int numsignal = 1; // 1 - positivo, 0 - negativo
  float aux1, aux2, aux3;
  int temp1, temp2;
  unsigned int temp3;
  scanf("%f", &num); // exmplo 3.1754

  // Verifica sinal do número de entrada e faz o módulo
  if (num < 0) {
    num = -num;
    numsignal = 0;
  }

  // Lógica para 1 casa decimal
  temp1 = (int)(num * 100); // 317
  temp2 = (int)(num * 10);  // 31
  temp2 = temp2 * 10;       // 310
  temp3 = temp1 - temp2;    // 317 - 310 = 7

  if (temp3 >= 5) {
    aux1 = ((int)(temp1 + 10) / 10) / 10.0; // 3.2
  } else {
    aux1 = ((int)temp1 / 10) / 10.0; // 317
  }

  if (numsignal)
    printf("%.6f\n", aux1);
  else
    printf("-%.6f\n", aux1);

  // Lógica para 2 casas decimais
  temp1 = (int)(num * 1000); // 3175
  temp2 = (int)(num * 100);  // 317
  temp2 = temp2 * 10;        // 3170
  temp3 = temp1 - temp2;     // 3175 - 3170 = 5
  // printf("Teste: %d\n", temp3);
  if (temp3 >= 5) {
    aux2 = ((int)(temp1 + 10) / 10) / 100.0; // 3.2
  } else {
    aux2 = ((int)temp1 / 10) / 100.0; // 317
  }

  if (numsignal)
    printf("%.6f\n", aux2);
  else
    printf("-%.6f\n", aux2);

  // Lógica para 3 casa decimais
  temp1 = (int)(num * 10000); // 31754
  temp2 = (int)(num * 1000);  // 3175
  temp2 = temp2 * 10;         // 31750
  temp3 = temp1 - temp2;      // 31754 - 31750 = 4

  if (temp3 >= 5) {
    aux3 = ((int)(temp1 + 10) / 10) / 1000.0; // 3.2
  } else {
    aux3 = ((int)temp1 / 10) / 1000.0; // 317
  }

  if (numsignal)
    printf("%.6f\n", aux3);
  else
    printf("-%.6f\n", aux3);

  /* Código antigo que dá 75 pontos
    aux1 = round(num * 10) / 10.0;
    aux2 = round(num * 100) / 100.0;
    aux3 = round(num * 1000) / 1000.0;

    printf("%.6l\n", aux1);
    printf("%.6f\n", aux2);
    printf("%.6f\n", aux3);*/
  return 0;
}