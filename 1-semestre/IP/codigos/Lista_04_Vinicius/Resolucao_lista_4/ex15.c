#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief Função principal que executa o programa.
 *
 * O programa recebe um número de casos de teste e, para cada caso, imprime uma sequência de números crescentes
 * e decrescentes. A sequência crescente vai de B a E e, em seguida, a sequência decrescente é a inversão dos números
 * da sequência crescente.
 *
 * @return Retorna 0 se o programa for executado com sucesso.
 */
int main(void)
{
    int V[12221];     /**< Vetor utilizado para armazenar os números em ordem decrescente. */
    int C;            /**< Número de casos de teste. */
    int B, E;         /**< Valores de início (B) e fim (E) da sequência de números. */
    int i, j, k;      /**< Variáveis de iteração. */
    int l = 0, m = 0; /**< Contadores usados para controle dos índices no vetor e para a impressão dos números. */
    int n;            /**< Variável de iteração para os casos de teste. */
    int aux, reverse; /**< Variáveis auxiliares para manipular e inverter os números. */

    // Lê o número de casos de teste
    scanf("%d", &C);

    // Processa cada caso de teste
    for (n = 0; n < C; n++)
    {
        // Lê os valores B e E, que representam o início e fim da sequência
        scanf("%d %d", &B, &E);

        // Verifica se os valores estão dentro dos limites especificados
        if (0 <= B && B <= E && E <= 12221)
        {
            // Imprime a sequência crescente de B até E
            for (j = B; j <= E; j++)
            {
                printf("%d", j);
            }

            // Armazena a sequência decrescente no vetor V
            for (i = E; i >= B; i--)
            {
                V[l] = i;
                l++;
            }

            // Imprime a sequência decrescente invertida (dígito por dígito)
            for (k = 0; k < l; k++)
            {
                aux = V[m];

                // Se aux for 0, imprime o número diretamente
                if (aux == 0)
                {
                    printf("0");
                }
                else
                {
                    // Imprime o número invertido
                    while (aux > 0)
                    {
                        reverse = aux % 10;    /**< Extrai o último dígito de aux. */
                        printf("%d", reverse); /**< Imprime o dígito extraído. */
                        aux /= 10;             /**< Remove o último dígito de aux. */
                    }
                }
                m++;
            }

            // Quebra de linha após a sequência de cada caso de teste
            printf("\n");

            // Reseta os contadores l e m para o próximo caso de teste
            l = 0;
            m = 0;
        }
    }
    return 0;
}
