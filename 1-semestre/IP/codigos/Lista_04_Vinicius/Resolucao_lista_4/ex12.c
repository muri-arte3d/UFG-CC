#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Troca os valores de dois inteiros apontados por x e y.
 *
 * A função realiza a troca de valores entre duas variáveis usando ponteiros,
 * o que permite a troca direta no vetor onde os valores estão armazenados.
 *
 * @param x Ponteiro para o primeiro valor.
 * @param y Ponteiro para o segundo valor.
 */
void SORTED(int *x, int *y)
{
    int temp;

    temp = *x; /**< Armazena temporariamente o valor de x. */
    *x = *y;   /**< Atribui o valor de y para x. */
    *y = temp; /**< Atribui o valor temporário (antigo x) para y. */
}

/**
 * @brief Ordena o vetor em ordem crescente usando o algoritmo Bubble Sort.
 *
 * A função percorre o vetor comparando dois elementos adjacentes e trocando-os de posição
 * se estiverem fora de ordem. O processo se repete até que todo o vetor esteja ordenado.
 *
 * @param vet Vetor a ser ordenado.
 * @param n Tamanho do vetor.
 */
void SEQUENCE(int *vet, int n)
{
    int i, j; /**< Variáveis de iteração. */

    // Laço externo que controla o número de passagens pelo vetor
    for (i = 0; i < n - 1; i++)
    {
        // Laço interno que percorre o vetor e realiza as trocas necessárias
        for (j = 0; j < n - 1 - i; j++)
        {
            // Se o elemento atual for maior que o próximo, eles são trocados
            if (vet[j] > vet[j + 1])
            {
                SORTED(&vet[j], &vet[j + 1]);
            }
        }
    }
}

int main(void)
{
    int i;         /**< Variável de iteração para leitura dos elementos. */
    int num;       /**< Número de elementos no vetor. */
    double median; /**< Armazena o valor da mediana calculada. */
    int *vec;      /**< Ponteiro para armazenar o vetor dinamicamente. */

    // Lê o número de elementos do vetor
    scanf("%d", &num);

    // Aloca memória dinamicamente para o vetor de inteiros
    vec = malloc(num * sizeof(int));

    // Lê os elementos do vetor
    for (i = 0; i < num; i++)
    {
        scanf("%d", &vec[i]);
    }

    // Ordena o vetor usando o algoritmo Bubble Sort
    SEQUENCE(vec, num);

    // Calcula a mediana
    if (num % 2 == 1)
    {
        // Se o número de elementos for ímpar, a mediana é o elemento central
        median = vec[(num / 2)];
    }
    else
    {
        // Se o número de elementos for par, a mediana é a média dos dois elementos centrais
        median = (double)((vec[((num / 2) - 1)] + vec[((num / 2))])) / 2;
    }

    // Imprime a mediana com duas casas decimais
    printf("%.2lf\n", median);

    // Libera a memória alocada dinamicamente
    free(vec);

    return 0;
}
