#include <stdio.h>

/**
 * @brief Função principal que executa o programa.
 *
 * O programa lê dois números inteiros N e M, que indicam a quantidade de elementos de dois conjuntos,
 * lê os elementos desses dois conjuntos, e depois os ordena e imprime em ordem crescente.
 *
 * @return Retorna 0 se o programa foi executado com sucesso.
 */
int main(void)
{
    int N, M;          /**< N: Número de elementos do primeiro conjunto. M: Número de elementos do segundo conjunto. */
    int i, j, a;       /**< i: Variável de iteração principal. j: Variável auxiliar para iteração interna. a: Variável temporária para troca de elementos. */
    int vetor[500000]; /**< vetor: Vetor para armazenar todos os elementos dos dois conjuntos. */

    // Lê o número de elementos do primeiro conjunto (N)
    scanf("%d", &N);

    // Lê o número de elementos do segundo conjunto (M)
    scanf("%d", &M);

    // Lê os N + M elementos e armazena no vetor
    for (i = 0; i < N + M; i++)
    {
        scanf("%d", &vetor[i]);
    }

    /**
     * @brief Laço para ordenar o vetor.
     *
     * Este laço externo percorre o vetor até o último elemento. Em cada iteração, ele compara o elemento atual
     * com os seguintes (usando o laço interno) e realiza a troca de posição para garantir que os elementos
     * fiquem em ordem crescente.
     */
    for (i = 0; i < N + M; i++)
    {
        /**
         * @brief Laço interno que compara os elementos subsequentes do vetor com o elemento atual.
         *
         * O laço compara o elemento `vetor[i]` com os próximos elementos `vetor[j]`. Se `vetor[i]` for maior que
         * `vetor[j]`, uma troca de posição é realizada para manter a ordem crescente.
         */
        for (j = i + 1; j < N + M; j++)
        {
            // Verifica se o elemento atual é maior que o subsequente, se sim, realiza a troca
            if (vetor[i] > vetor[j])
            {
                a = vetor[j]; /**< a: Armazena temporariamente o valor de `vetor[j]` para fazer a troca. */
                vetor[j] = vetor[i];
                vetor[i] = a;
            }
        }

        // Imprime o elemento já ordenado após passar por todas as comparações e possíveis trocas
        printf("%d\n", vetor[i]);
    }

    return 0;
}
