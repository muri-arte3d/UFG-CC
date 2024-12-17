#include <stdio.h>
#include <string.h>

/**
 * @brief Calcula o número de operações necessárias para transformar uma string na outra.
 *
 * A função percorre as duas strings e compara os caracteres correspondentes. Se forem diferentes,
 * calcula quantas operações são necessárias para transformar o caractere da primeira string no da segunda,
 * levando em consideração o ciclo entre 'a' e 'z'.
 *
 * @param str Primeira string, que será transformada.
 * @param str2 Segunda string, o objetivo final da transformação.
 * @param len Tamanho das strings (que devem ser iguais).
 * @return O número de operações necessárias para transformar `str` em `str2`.
 */
int num_operacoes(char str[], char str2[], int len)
{
    int i;         /**< i: Variável de iteração para percorrer as strings. */
    int count = 0; /**< count: Contador de operações realizadas. */

    // Percorre cada caractere das duas strings
    for (i = 0; i < len; i++)
    {
        // Laço que continua até que os caracteres das duas strings sejam iguais
        while (1)
        {
            // Se os caracteres forem diferentes, uma operação é necessária
            if (str[i] != str2[i])
            {
                // Se o caractere for 'z', ele deve "voltar" para 'a'
                if (str[i] == 'z')
                {
                    str[i] = 'a'; /**< Quando atinge 'z', a transformação continua a partir de 'a'. */
                    count++;      /**< Incrementa o número de operações. */
                }
                else
                {
                    str[i] += 1; /**< Incrementa o caractere para o próximo na sequência ASCII. */
                    count++;     /**< Incrementa o número de operações. */
                }
            }
            else
                break; /**< Se os caracteres forem iguais, interrompe o laço. */
        }
    }

    return count; /**< Retorna o número total de operações necessárias. */
}

int main(void)
{
    int T; /**< T: Número de casos de teste. */

    // Lê o número de casos de teste
    scanf("%d", &T);

    // Processa cada caso de teste
    while (T--)
    {
        char str[1000];  /**< str: Primeira string a ser transformada. */
        char str2[1000]; /**< str2: Segunda string, objetivo da transformação. */

        // Lê as duas strings
        scanf("%s %s", str, str2);
        getchar(); /**< Limpa o buffer para evitar problemas com novas linhas. */

        int len, len2; /**< len: Tamanho da primeira string. len2: Tamanho da segunda string. */
        len = strlen(str);
        len2 = strlen(str2);

        // Verifica se as duas strings têm o mesmo tamanho
        if (len != len2)
            return 0; /**< Retorna 0 e encerra o programa se as strings tiverem tamanhos diferentes. */

        // Calcula o número de operações necessárias e imprime o resultado
        int operacoes = num_operacoes(str, str2, len);
        printf("%d\n", operacoes);
    }

    return 0;
}
