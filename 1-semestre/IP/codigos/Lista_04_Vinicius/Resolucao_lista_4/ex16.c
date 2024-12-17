#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Verifica se um elemento já existe no conjunto.
 *
 * A função percorre o vetor que representa o conjunto e verifica se o elemento já está presente.
 *
 * @param conjunto Vetor que representa o conjunto.
 * @param tamanho Tamanho do conjunto.
 * @param elemento Elemento a ser verificado.
 * @return Retorna 1 se o elemento já existir no conjunto, 0 caso contrário.
 */
int ja_existe(int *conjunto, int tamanho, int elemento)
{
    int i; // Variável de iteração
    for (i = 0; i < tamanho; i++)
    {
        if (conjunto[i] == elemento)
        {
            return 1; // Elemento já existe no conjunto
        }
    }
    return 0; // Elemento não existe no conjunto
}

/**
 * @brief Lê os elementos de um conjunto garantindo que não haja repetidos.
 *
 * A função lê um número fixo de elementos e insere no vetor apenas aqueles que ainda
 * não estão presentes, evitando a duplicação de valores.
 *
 * @param conjunto Vetor que armazenará os elementos do conjunto.
 * @param tamanho Tamanho do conjunto.
 */
void ler_conjunto(int *conjunto, int tamanho)
{
    int i = 0, valor;
    while (i < tamanho)
    {
        scanf("%d", &valor); // Lê um elemento
        if (!ja_existe(conjunto, i, valor))
        {
            conjunto[i] = valor; // Adiciona o valor ao conjunto se não for repetido
            i++;
        }
    }
}

/**
 * @brief Imprime o conjunto no formato correto.
 *
 * A função imprime o conjunto no formato (x1,x2,...,xn), sem espaços entre os elementos.
 *
 * @param conjunto Vetor que representa o conjunto.
 * @param tamanho Tamanho do conjunto.
 */
void imprimir_conjunto(int *conjunto, int tamanho)
{
    int i; // Variável de iteração
    printf("(");
    for (i = 0; i < tamanho; i++)
    {
        if (i != 0)
            printf(","); // Adiciona uma vírgula entre os elementos
        printf("%d", conjunto[i]);
    }
    printf(")\n"); // Fecha a impressão do conjunto
}

/**
 * @brief Realiza a subtração de dois conjuntos (A - B) e imprime o resultado.
 *
 * A função percorre o conjunto A e imprime os elementos que não estão presentes no conjunto B.
 *
 * @param A Conjunto A.
 * @param tamanhoA Tamanho do conjunto A.
 * @param B Conjunto B.
 * @param tamanhoB Tamanho do conjunto B.
 */
void subtrair_conjuntos(int *A, int tamanhoA, int *B, int tamanhoB)
{
    int i;            // Variável de iteração
    int primeiro = 1; // Controla se é o primeiro elemento a ser impresso
    printf("(");
    for (i = 0; i < tamanhoA; i++)
    {
        if (!ja_existe(B, tamanhoB, A[i]))
        {
            if (!primeiro)
                printf(","); // Adiciona vírgula antes de imprimir os próximos elementos
            printf("%d", A[i]);
            primeiro = 0;
        }
    }
    printf(")\n"); // Fecha a impressão da subtração
}

/**
 * @brief Calcula o produto cartesiano entre dois conjuntos e imprime o resultado.
 *
 * A função calcula o produto cartesiano entre dois conjuntos e imprime as combinações
 * de pares no formato (a1xb1), (a1xb2), ..., (anxbm).
 *
 * @param A Conjunto A.
 * @param tamanhoA Tamanho do conjunto A.
 * @param B Conjunto B.
 * @param tamanhoB Tamanho do conjunto B.
 */
void produto_cartesiano(int *A, int tamanhoA, int *B, int tamanhoB)
{
    int i, j; // Variáveis de iteração
    printf("(");
    for (i = 0; i < tamanhoA; i++)
    {
        for (j = 0; j < tamanhoB; j++)
        {
            if (i != 0 || j != 0)
                printf(",");               // Adiciona vírgula entre os pares de elementos
            printf("(%dx%d)", A[i], B[j]); // Imprime o par de elementos
        }
    }
    printf(")\n"); // Fecha a impressão do produto cartesiano
}

int main(void)
{
    int i;
    int TA, TB;         /**< TA: Tamanho do conjunto A. TB: Tamanho do conjunto B. */
    int A[100], B[100]; /**< A: Conjunto A. B: Conjunto B. */

    // Lendo o tamanho do conjunto A
    do
    {
        scanf("%d", &TA);
    } while (TA < 1 || TA > 100); // Verifica se o tamanho do conjunto A é válido

    // Lendo o tamanho do conjunto B
    do
    {
        scanf("%d", &TB);
    } while (TB < 1 || TB > 100); // Verifica se o tamanho do conjunto B é válido

    // Lendo os elementos do conjunto A
    ler_conjunto(A, TA);

    // Lendo os elementos do conjunto B
    ler_conjunto(B, TB);

    for(i = 0; i < TA; i++)
    {
        printf("[%d]", A[i]);
    }
    printf("--------------------\n");
    for(i = 0; i < TB; i++)
    {
        printf("[%d]", B[i]);
    }
    printf("--------------------\n");


    // Imprimindo os conjuntos A e B
    imprimir_conjunto(A, TA);
    imprimir_conjunto(B, TB);

    // Imprimindo A - B
    subtrair_conjuntos(A, TA, B, TB);

    // Imprimindo A x B
    produto_cartesiano(A, TA, B, TB);

    return 0;
}
