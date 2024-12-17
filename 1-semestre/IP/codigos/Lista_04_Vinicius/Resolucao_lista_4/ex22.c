#include <stdio.h>
#include <string.h>

/**
 * @brief Limpa caracteres de uma string com base em outra string de caracteres a serem removidos.
 *
 * A função percorre a string `str` e imprime cada caractere que não está presente na string `clr`.
 * Se o caractere de `str` estiver em `clr`, ele é "removido" (ou seja, não é impresso).
 *
 * @param str String de entrada da qual os caracteres serão removidos.
 * @param clr String contendo os caracteres que devem ser removidos de `str`.
 */
void str_clean(char str[], char clr[])
{
    int i, j, test = 0; /**< i: Índice de iteração sobre `str`. j: Índice de iteração sobre `clr`. test: Sinalizador que indica se o caractere de `str` está em `clr`. */

    // Percorre cada caractere da string `str`
    for (i = 0; str[i] != '\0'; i++)
    {
        // Percorre cada caractere da string `clr` para verificar se o caractere de `str` está presente
        for (j = 0; clr[j] != '\0'; j++)
        {
            if (str[i] == clr[j])
            {
                test++; // Se o caractere estiver presente em `clr`, incrementa o sinalizador
            }
        }
        // Se o caractere de `str` não foi encontrado em `clr`, ele é impresso
        if (test == 0)
            printf("%c", str[i]);

        test = 0; // Reinicia o sinalizador para o próximo caractere
    }
}
int main(void)
{
    char str[256]; /**< str: String de entrada que será limpa (até 255 caracteres). */
    char clr[256]; /**< clr: String contendo os caracteres a serem removidos de `str` (até 255 caracteres). */

    // Lê a string de entrada `str` (incluindo espaços)
    scanf("%[^\n]", str);

    // Lê a string de caracteres a serem removidos `clr` (incluindo espaços)
    scanf("\n%[^\n]", clr);

    // Chama a função para limpar a string `str`
    str_clean(str, clr);

    printf("\n"); // Imprime uma nova linha após a string processada

    return 0;
}
