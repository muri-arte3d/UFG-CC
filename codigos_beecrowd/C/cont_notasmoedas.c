/* Você coloca o valor do dinheiro como entrada
e o programa te informa o número mínimo de notas
e moedas para se dividir esse dinheiro usando
o dinheiro no formato do Brasil (Real)

OBS: Formato de entrada: *.XX
*/

#include <stdio.h>

int f_notas(float);        // pega o valor antes da vírgula
int f_moedas(float);       // pega o valor após a vírgula
int f_printa_notas(int);   // printa as notas e retorna moedas de 1
void f_printa_moedas(int); // printa moedas

int main() {
  float dinheiro;
  int notas, moedas;

  scanf("%f", &dinheiro);

  notas = f_notas(dinheiro);
  moedas = f_moedas(dinheiro);

  moedas = moedas +
           f_printa_notas(notas) * 100; // *100 para ajustar o valor em centavos
  f_printa_moedas(moedas);

  return 0;
}

int f_notas(float dinheiro) { return (int)dinheiro; }

int f_moedas(float dinheiro) {
  return (dinheiro * 100 - ((int)dinheiro) * 100);
}

int f_printa_notas(int notas) {
  int n100, n50, n20, n10, n5, n2, n1;
  int r100, r50, r20, r10, r5;

  n100 = notas / 100;
  r100 = notas % 100;
  n50 = r100 / 50;
  r50 = r100 % 50;
  n20 = r50 / 20;
  r20 = r50 % 20;
  n10 = r20 / 10;
  r10 = r20 % 10;
  n5 = r10 / 5;
  r5 = r10 % 5;
  n2 = r5 / 2;
  n1 = r5 % 2;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", n100);
  printf("%d nota(s) de R$ 50.00\n", n50);
  printf("%d nota(s) de R$ 20.00\n", n20);
  printf("%d nota(s) de R$ 10.00\n", n10);
  printf("%d nota(s) de R$ 5.00\n", n5);
  printf("%d nota(s) de R$ 2.00\n", n2);
  // printf("%d nota(s) de R$ 1.00\n", n1);
  return n1;
}

void f_printa_moedas(int moedas) {
  int m100, m50, m25, m10, m5, m1;
  int r100, r50, r25, r10;

  m100 = moedas / 100;
  r100 = moedas % 100;
  m50 = r100 / 50;
  r50 = r100 % 50;
  m25 = r50 / 25;
  r25 = r50 % 25;
  m10 = r25 / 10;
  r10 = r25 % 10;
  m5 = r10 / 5;
  m1 = r10 % 5;

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", m100);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m5);
  printf("%d moeda(s) de R$ 0.01\n", m1);
}
