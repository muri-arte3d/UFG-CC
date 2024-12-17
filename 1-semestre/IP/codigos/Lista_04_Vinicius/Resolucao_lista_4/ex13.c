#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * @brief Imprime os primeiros 'n' caracteres de uma string.
 *
 * A função verifica o valor de 'n' em relação ao tamanho da string e, dependendo do valor, imprime
 * os primeiros 'n' caracteres ou a string completa. Se 'n' for zero, a função imprime uma linha em branco.
 *
 * @param n Número de caracteres a serem impressos.
 * @param str String da qual os caracteres serão extraídos e impressos.
 * @return Retorna NULL após a impressão.
 */
char *le_str(int n, char *str)
{
    int i;                  /**< Variável de iteração para percorrer a string. */
    char str2[499];         /**< Vetor temporário para armazenar os primeiros 'n' caracteres. */
    int size = strlen(str); /**< Armazena o tamanho da string. */

    // Verifica se 'n' é maior que o tamanho da string
    if (n > size)
    {
        printf("%s\n", str); /**< Imprime a string completa se 'n' for maior que o tamanho da string. */
        return 0;
    }
    // Se 'n' for igual a 0, imprime uma linha em branco
    else if (n == 0)
    {
        printf("\n");
        return 0;
    }
    // Caso 'n' seja válido, imprime os primeiros 'n' caracteres da string
    else
    {
        for (i = 0; i < n; i++)
        {
            str2[i] = str[i];      /**< Armazena o caractere na posição correspondente. */
            printf("%c", str2[i]); /**< Imprime o caractere. */
        }
    }
    printf("\n"); /**< Imprime uma nova linha após os caracteres. */
    return 0;
}

int main(void)
{
    int n_testes;  /**< Número de casos de teste. */
    int n;         /**< Número de caracteres a serem impressos da string. */
    char str[499]; /**< Vetor para armazenar a string de entrada. */
    int i;         /**< Variável de iteração para os casos de teste. */

    // Lê o número de casos de teste
    scanf("%d", &n_testes);

    // Processa cada caso de teste
    for (i = 0; i < n_testes; i++)
    {
        // Lê o número 'n' e a string associada
        scanf("%d %[^\n]%*c", &n, str);
        // Chama a função para imprimir os primeiros 'n' caracteres da string
        le_str(n, str);
    }

    return 0;
}
