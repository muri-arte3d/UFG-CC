#include <stdio.h>

int main(void)
{
    int num;           /**< Variável para armazenar o número lido. */
    int i = 0;         /**< Variável de iteração para construir o número binário. */
    int count_div = 0; /**< Não utilizada no algoritmo atual, pode ser removida. */

    // Lê números até encontrar o fim do arquivo (EOF)
    while (scanf("%d", &num) != EOF)
    {
        // Caso especial: se o número for 0, imprime "0"
        if (num == 0)
            printf("0\n");

        // Caso especial: se o número for 1, imprime "1"
        else if (num == 1)
            printf("1\n");

        // Caso geral: converte o número para binário
        else
        {
            int bin[32] = {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}; /**< Vetor para armazenar os dígitos binários (máximo 32 bits). */
            i = 0;             /**< Reinicia o índice para a nova conversão. */

            /**
             * @brief Loop que converte o número de base 10 para base 2.
             *
             * Enquanto o número for maior ou igual a 1, ele é dividido por 2, e o
             * resto (0 ou 1) é armazenado no vetor 'bin'. O vetor armazena o número
             * binário de trás para frente.
             */
            while (num >= 1)
            {
                if (num % 2 == 0)
                {
                    bin[i] = 0; /**< Armazena 0 se o número for par. */
                    i++;
                }
                else
                {
                    bin[i] = 1; /**< Armazena 1 se o número for ímpar. */
                    i++;
                }
                num /= 2; /**< Divide o número por 2 para continuar a conversão. */
            }

            /**
             * @brief Loop para imprimir o número binário armazenado no vetor 'bin'.
             *
             * O vetor 'bin' armazena o número binário na ordem inversa. Este loop percorre
             * o vetor de trás para frente e imprime os dígitos binários.
             */
            for (i = 31; i >= 0; i--)
            {
                if (bin[i] != 2) /**< Ignora os valores iniciais do vetor que não foram utilizados. */
                {
                    printf("%d", bin[i]); /**< Imprime o dígito binário. */
                }
            }

            printf("\n"); /**< Imprime uma nova linha após o número binário. */
        }
    }

    return 0;
}
