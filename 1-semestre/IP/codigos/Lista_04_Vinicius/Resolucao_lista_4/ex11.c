#include <stdio.h>

int main(void)
{
    int num;              /**< Número de elementos no vetor. */
    int i, j;             /**< Variáveis de iteração para os loops. */
    int sequence = 0;     /**< Contador da frequência de um número atual. */
    int big_sequence = 0; /**< Armazena a maior frequência encontrada até o momento. */
    int frequence;        /**< Armazena o número que aparece com maior frequência. */
    int vec[100000];      /**< Vetor para armazenar os números lidos (até 100.000 elementos). */

    // Lê o número de elementos do vetor
    scanf("%d", &num);

    // Lê os elementos do vetor
    for (i = 0; i < num; i++)
    {
        scanf("%d", &vec[i]);
    }

    /**
     * @brief Loop externo que percorre cada elemento do vetor.
     *
     * O objetivo deste laço é contar quantas vezes cada número aparece no vetor.
     */
    for (i = 0; i < num; i++)
    {
        sequence = 0; /**< Reseta o contador para o número atual. */

        /**
         * @brief Loop interno que conta a frequência de vec[i] no vetor.
         *
         * Para cada elemento vec[i], o programa verifica quantas vezes ele aparece no vetor.
         */
        for (j = 0; j < num; j++)
        {
            if (vec[i] == vec[j])
            {
                sequence++; /**< Incrementa o contador de frequência se houver correspondência. */
            }
        }

        // Verifica se a frequência atual é a maior já encontrada
        if (sequence > big_sequence)
        {
            big_sequence = sequence; /**< Atualiza a maior sequência encontrada. */
            frequence = vec[i];      /**< Atualiza o número que tem a maior frequência. */
        }
    }

    // Imprime o número mais frequente e sua frequência
    printf("%d\n%d\n", frequence, big_sequence);

    return 0;
}
