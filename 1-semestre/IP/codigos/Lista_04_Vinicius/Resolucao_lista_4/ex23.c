#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief Converte os caracteres alfabéticos de uma string para maiúsculas e minúsculas de maneira alternada.
 *
 * Esta função percorre a string de entrada, alternando os caracteres alfabéticos (letras) entre maiúsculas e
 * minúsculas. Os caracteres não alfabéticos são ignorados, e a contagem para alternância não é afetada por eles.
 *
 * @param string String que será convertida.
 * @param size Tamanho da string (número de caracteres).
 * @return A string modificada com as alternâncias de maiúsculas e minúsculas.
 */
const char *converte_string(char *string, int size)
{
    int i;         /**< i: Variável de iteração para percorrer a string. */
    int count = 0; /**< count: Contador para alternar entre maiúsculas e minúsculas. */

    /**
     * @brief Laço que percorre cada caractere da string.
     *
     * O laço percorre a string e verifica se o caractere é alfabético (letra). Se for,
     * ele alterna entre maiúsculas e minúsculas, dependendo da contagem de letras.
     */
    for (i = 0; i < size; i++)
    {
        // Verifica se o caractere é uma letra (alfabético)
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z'))
        {
            count++; // Incrementa o contador para alternância de letras
            /**
             * @brief Alterna entre maiúsculas e minúsculas.
             *
             * Se o valor de count é tal que (count + 2) % 2 for ímpar, converte a letra para maiúscula.
             * Caso contrário, converte a letra para minúscula.
             */
            if ((count + 2) % 2 != 0)
            {
                string[i] = toupper((unsigned char)string[i]); // Converte para maiúscula
            }
            else
            {
                string[i] = tolower((unsigned char)string[i]); // Converte para minúscula
            }
        }
    }
    return string; // Retorna a string modificada
}

int main(void)
{
    char string[49];     /**< string: Armazena a string de entrada (até 48 caracteres). */
    int size;            /**< size: Armazena o tamanho da string lida. */
    char recebe_str[49]; /**< recebe_str: Armazena a string após a conversão. */

    /**
     * @brief Laço de leitura e conversão.
     *
     * O programa lê strings da entrada até encontrar o fim do arquivo (EOF). Cada string lida
     * é convertida alternadamente para maiúsculas e minúsculas e, em seguida, impressa.
     */
    while (scanf("%[^\n]%*c", string) != EOF)
    {
        size = strlen(string);                             // Calcula o tamanho da string
        strcpy(recebe_str, converte_string(string, size)); // Copia a string convertida para o buffer
        printf("%s\n", recebe_str);                        // Imprime a string convertida
    }

    return 0;
}
