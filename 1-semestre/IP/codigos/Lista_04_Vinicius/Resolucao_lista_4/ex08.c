#include <stdio.h>

int main(void)
{
    int vec[10000]; /**< Vetor para armazenar os números lidos (até 10.000 elementos). */
    int i, j;       /**< Variáveis de iteração para loops. */
    int num;        /**< Quantidade de números na sequência lida. */
    int bigger;     /**< Armazena o maior número na sequência. */
    int amount;     /**< Armazena a quantidade de números menores ou iguais ao valor `i`. */

    /**
     * @brief Loop principal que continua até o número 0 ser lido.
     *
     * O programa processa múltiplas sequências de números, e para cada sequência,
     * ele calcula a quantidade de números menores ou iguais a cada valor de 0 até o maior número da sequência.
     */
    while (1)
    {
        // Lê o número de elementos na sequência
        scanf("%d", &num);

        // Se o número for 0, o programa termina
        if (num == 0)
            break;

        bigger = -1; /**< Inicializa `bigger` com -1 para encontrar o maior número na sequência. */

        // Lê os elementos da sequência e encontra o maior número
        for (i = 0; i < num; i++)
        {
            scanf("%d", &vec[i]);
            if (vec[i] > bigger)
                bigger = vec[i]; /**< Atualiza `bigger` se um número maior for encontrado. */
        }

        /**
         * @brief Loop que processa valores de 0 até o maior número da sequência.
         *
         * Para cada valor `i` de 0 até `bigger`, o programa conta quantos números na sequência são menores ou iguais a `i`.
         */
        for (i = 0; i <= bigger; i++)
        {
            amount = 0; /**< Reseta o contador para o valor atual de `i`. */

            // Conta quantos números na sequência são menores ou iguais a `i`
            for (j = 0; j < num; j++)
            {
                if (vec[j] <= i)
                {
                    amount++; /**< Incrementa o contador se o número for menor ou igual a `i`. */
                }
            }

            // Imprime o valor `i` e a quantidade de números menores ou iguais a `i`
            printf("(%d) %d\n", i, amount);
        }
    }

    return 0;
}
