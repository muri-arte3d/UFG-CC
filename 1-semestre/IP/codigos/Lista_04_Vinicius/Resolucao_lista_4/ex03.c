#include <stdio.h>

int main(void)
{
    int i;           /**< Variável de iteração para o loop. */
    int num;         /**< Quantidade de números a serem lidos. */
    int count = 0;   /**< Contador para a quantidade de números pares. */
    int vetor[1000]; /**< Vetor que armazena os números lidos (até 1000 números). */

    // Lê a quantidade de números a serem processados
    scanf("%d", &num);

    /**
     * @brief Loop que percorre a sequência de números lidos.
     *
     * Para cada número lido, o programa verifica se ele é par.
     * Se for par, o número é impresso e o contador de números pares é incrementado.
     */
    for (i = 0; i < num; i++)
    {
        // Lê o número e armazena no vetor
        scanf("%d", &vetor[i]);

        // Verifica se o número é par
        if (vetor[i] % 2 == 0)
        {
            // Imprime o número par
            printf("%d ", vetor[i]);

            // Incrementa o contador de números pares
            count++;
        }
    }

    // Imprime o total de números pares encontrados
    printf("%d\n", count);

    return 0;
}
