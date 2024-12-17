#include <stdio.h>
#include <ctype.h>

/**
 * @brief Troca os valores de dois inteiros apontados por x e y.
 *
 * Esta função realiza a troca dos valores de dois inteiros através do uso de ponteiros.
 *
 * @param x Ponteiro para o primeiro valor.
 * @param y Ponteiro para o segundo valor.
 */
void SORTED(int *x, int *y)
{
    int temp;

    temp = *x; /**< Armazena o valor de x temporariamente. */
    *x = *y;   /**< Atribui o valor de y para x. */
    *y = temp; /**< Atribui o valor temporário (antigo x) para y. */
}

/**
 * @brief Ordena o vetor em ordem crescente usando o algoritmo Bubble Sort.
 *
 * A função percorre o vetor comparando dois elementos adjacentes e trocando-os de posição
 * se estiverem fora de ordem, repetindo o processo até que todo o vetor esteja ordenado.
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
    int num;       /**< Número de elementos no vetor. */
    int i, aux;    /**< Variáveis de iteração e armazenamento temporário de valo res. */
    int vec[1000]; /**< Vetor para armazenar os elementos. */

    // Lê o número de elementos
    scanf("%d", &num);

    // Lê os elementos do vetor
    for (i = 0; i < num; i++)
    {
        scanf("%d", &vec[i]);
    }

    // Ordena o vetor
    SEQUENCE(vec, num);

    // Inicializa a variável auxiliar com o primeiro elemento do vetor
    aux = vec[0];

    // Imprime os elementos únicos
    for (i = 0; i <= num; i++)
    {
        // Se o elemento atual for diferente do anterior, ele é impresso
        if (vec[i] != aux)
        {
            printf("%d\n", aux);
            aux = vec[i]; /**< Atualiza o valor de aux para o próximo valor único. */
        }
    }

    return 0;
}
