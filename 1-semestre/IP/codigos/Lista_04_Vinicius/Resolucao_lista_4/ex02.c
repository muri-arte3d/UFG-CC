#include <stdio.h>

int main(void)
{
  int i;         /**< Variável de iteração para os loops. */
  int num1 = -1; /**< Quantidade de números a serem lidos (inicialmente -1 para garantir leitura válida). */
  int num2;      /**< Número de referência para a comparação. */
  int count = 0; /**< Contador para a quantidade de números maiores ou iguais a `num2`. */
  int vec[1000]; /**< Vetor que armazena os números lidos (até 1000 números). */

  /**
   * @brief Loop para garantir que `num1` esteja no intervalo de 1 a 1000.
   *
   * O programa não segue em frente até que o usuário forneça um valor válido para `num1`.
   */
  while (1000 < num1 || 1 > num1)
  {
    scanf("%d", &num1); /**< Lê o valor de `num1`, que representa a quantidade de números a serem lidos. */
  }

  // Lê os números da sequência e os armazena no vetor
  for (i = 0; i < num1; i++)
  {
    scanf("%d", &vec[i]);
  }

  // Lê o número de referência `num2`
  scanf("%d", &num2);

  /**
   * @brief Loop para contar quantos números da sequência são maiores ou iguais a `num2`.
   */
  for (i = 0; i < num1; i++)
  {
    if (vec[i] >= num2)
    {
      count++; /**< Incrementa o contador se o número atual for maior ou igual a `num2`. */
    }
  }

  // Imprime a quantidade de números maiores ou iguais a `num2`
  printf("%d\n", count);

  return 0;
}
