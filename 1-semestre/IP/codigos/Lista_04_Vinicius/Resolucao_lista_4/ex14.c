#include <stdio.h>
#include <string.h>

/**
 * @brief Procura a primeira ocorrência de um caractere em uma string.
 *
 * A função percorre a string até encontrar o caractere especificado ou até o final da string.
 * Se o caractere for encontrado, a função retorna o índice da primeira ocorrência.
 * Caso contrário, retorna -1.
 *
 * @param c Caractere a ser procurado na string.
 * @param str String onde o caractere será procurado.
 * @return O índice da primeira ocorrência do caractere ou -1 se não for encontrado.
 */
int procura_caracter(char c, char *str)
{
    int i = 0;       /**< Variável de iteração para percorrer a string. */
    int indice = -1; /**< Variável para armazenar o índice da primeira ocorrência do caractere. Inicialmente -1. */

    // Percorre a string até encontrar o caractere ou até o final da string
    while (str[i] != '\0')
    {
        if (str[i] == c)
        {
            indice = i; /**< Armazena o índice da primeira ocorrência. */
            break;      /**< Interrompe a busca ao encontrar o caractere. */
        }
        i++;
    }

    return indice; /**< Retorna o índice encontrado ou -1 se não houver ocorrência. */
}

/**
 * @brief Função principal que executa o programa.
 *
 * O programa lê um número N de casos de teste. Para cada caso, um caractere e uma string são lidos.
 * A função procura pela primeira ocorrência do caractere na string e imprime a posição da ocorrência ou uma
 * mensagem indicando que o caractere não foi encontrado.
 *
 * @return Retorna 0 se o programa for executado com sucesso.
 */
int main(void)
{
    int N; /**< N: Número de casos de teste. */

    // Lê o número de casos de teste
    scanf("%d", &N);
    getchar(); /**< Limpa o buffer após ler o número de casos de teste. */

    // Verifica se o valor de N está dentro do limite válido
    if (N < 1 || N > 20)
        return 0;

    // Processa cada caso de teste
    while (N--)
    {
        char caracter; /**< Caractere a ser procurado na string. */
        char str[499]; /**< String onde o caractere será procurado (até 498 caracteres). */

        // Lê o caractere e a string
        scanf("%c %[^\n]", &caracter, str);
        getchar(); /**< Limpa o buffer após ler a string. */

        // Procura o caractere na string e obtém o índice da primeira ocorrência
        int indice = procura_caracter(caracter, str);

        // Se o índice for -1, o caractere não foi encontrado
        if (indice == -1)
            printf("Caractere %c nao encontrado.\n", caracter);
        else
            printf("Caractere %c encontrado no indice %d da string.\n", caracter, indice);
    }

    return 0;
}
