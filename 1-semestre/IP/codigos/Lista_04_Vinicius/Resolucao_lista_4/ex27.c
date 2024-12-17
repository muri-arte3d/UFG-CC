#include <stdio.h>

int main(void)
{
    int testes;    /**< testes: Número de casos de teste. */
    int a = 0;     /**< a: Contador para os casos de teste processados. */
    int anoes[9];  /**< anoes: Array que armazena as alturas dos 9 anões. */
    int i, j;      /**< i, j: Variáveis de iteração para os loops. */
    int soma;      /**< soma: Variável que armazena a soma total das alturas dos 9 anões. */
    int diferenca; /**< diferenca: Diferença entre a soma das alturas e o valor 100. */
    int b;         /**< b: Variável temporária para troca de valores na ordenação. */

    // Lê o número de casos de teste
    scanf("%d", &testes);

    /**
     * @brief Loop que processa cada caso de teste.
     *
     * O loop é repetido até que todos os casos de teste sejam processados. Para cada caso:
     * 1. Lê as alturas dos 9 anões.
     * 2. Calcula a soma total das alturas.
     * 3. Encontra dois anões cuja soma das alturas exceda 100 e os remove.
     * 4. Ordena as alturas restantes e imprime.
     */
    while (a != testes)
    {
        soma = 0; // Inicializa a soma para o novo caso de teste
        diferenca = 0;

        // Lê as alturas dos 9 anões e calcula a soma
        for (i = 0; i < 9; i++)
        {
            scanf("%d", &anoes[i]);
            soma += anoes[i];
        }

        // Calcula a diferença entre a soma das alturas e 100
        diferenca = soma - 100;

        /**
         * @brief Loop que remove os dois anões cuja soma de alturas corresponde à diferença.
         *
         * O loop percorre o array de alturas e encontra os dois anões cuja soma é igual à diferença,
         * o que significa que esses dois anões devem ser removidos para que a soma das alturas dos
         * restantes seja 100.
         */
        for (i = 0; i < 9; i++)
        {
            for (j = i + 1; j < 9; j++)
            {
                if (anoes[i] + anoes[j] == diferenca)
                {
                    // Marca os dois anões para remoção (substituindo suas alturas por 0)
                    anoes[i] = 0;
                    anoes[j] = 0;
                }
            }
        }

        /**
         * @brief Loop para ordenar as alturas restantes em ordem crescente.
         *
         * Após remover os dois anões, o loop ordena os anões restantes (que não foram marcados como 0)
         * em ordem crescente usando uma abordagem simples de ordenação por seleção.
         */
        for (i = 0; i < 9; i++)
        {
            for (j = i + 1; j < 9; j++)
            {
                if (anoes[i] > anoes[j])
                {
                    // Realiza a troca para ordenar as alturas em ordem crescente
                    b = anoes[j];
                    anoes[j] = anoes[i];
                    anoes[i] = b;
                }
            }

            // Imprime apenas os anões que não foram removidos (alturas diferentes de 0)
            if (anoes[i] != 0)
            {
                printf("%d\n", anoes[i]);
            }
        }

        a++; // Incrementa o contador para processar o próximo caso de teste
    }

    return 0;
}
