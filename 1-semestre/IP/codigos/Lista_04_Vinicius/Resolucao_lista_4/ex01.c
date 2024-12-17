#include <stdio.h>

int main(void)
{
  int vec[100000]; /**< Vetor que armazena a sequência de números lidos (até 100.000 números). */
  int num;         /**< Quantidade de números na sequência lida. */
  int i, j;        /**< Variáveis de iteração para os loops. */
  int comp;        /**< Quantidade de consultas. */
  int num2;        /**< Número da consulta a ser verificado. */
  int aux = 0;     /**< Variável auxiliar para indicar se o número foi encontrado (1) ou não (0). */

  // Lê o número de elementos da sequência
  scanf("%d", &num);

  // Verifica se o número de elementos está dentro do limite permitido (entre 1 e 100.000)
  if (1 <= num && num <= 100000)
  {
    // Lê os elementos da sequência e os armazena no vetor
    for (i = 0; i < num; i++)
    {
      scanf("%d", &vec[i]);
    }

    // Lê o número de consultas a serem realizadas
    scanf("%d", &comp);

    /**
     * @brief Loop que processa cada consulta.
     *
     * Para cada número de consulta lido, o programa verifica se ele está presente na sequência.
     * Se o número for encontrado, imprime "ACHEI"; caso contrário, imprime "NAO ACHEI".
     */
    for (i = 0; i < comp; i++)
    {
      // Lê o número da consulta
      scanf("%d", &num2);

      // Verifica se o número está presente no vetor
      for (j = 0; j < num; j++)
      {
        if (vec[j] == num2)
        {
          aux = 1; /**< Define a variável `aux` para 1 se o número for encontrado. */
          break;   /**< Sai do loop ao encontrar o número. */
        }
      }

      // Imprime o resultado da consulta
      if (aux == 1)
      {
        printf("ACHEI\n"); /**< Imprime "ACHEI" se o número foi encontrado. */
      }
      else
      {
        printf("NAO ACHEI\n"); /**< Imprime "NAO ACHEI" se o número não foi encontrado. */
      }

      aux = 0; /**< Reseta a variável `aux` para a próxima consulta. */
    }
  }

  return 0;
}
