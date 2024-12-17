#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief Remove todos os dígitos '0' de uma string e imprime o resultado.
 *
 * A função percorre a string `str` e imprime todos os caracteres, exceto os '0'.
 *
 * @param str String contendo o número convertido em formato de texto.
 */
void remove_zero(char str[])
{
    int i;                 /**< Variável de iteração. */
    int len = strlen(str); /**< Comprimento da string. */

    // Percorre cada caractere da string e imprime apenas os que não forem '0'
    for (i = 0; i < len; i++)
    {
        if (str[i] != '0')
            printf("%c", str[i]);
    }
    printf("\n"); /**< Quebra de linha após a impressão da string sem zeros. */
}

int main(void)
{
    int x = -1, y = -1; /**< Variáveis para armazenar os números lidos. Inicialmente diferentes de 0. */

    // Loop que continua enquanto x e y não forem ambos 0
    while (x != 0 && y != 0)
    {
        // Lê dois números inteiros
        scanf("%d %d", &x, &y);

        // Verifica se os valores de x e y estão dentro dos limites permitidos
        if (x < 1 || x > 999999999)
            return 0;
        if (y < 1 || y > 999999999)
            return 0;

        // Vetor para armazenar a soma de x e y em formato de string
        char str[10];

        // Calcula a soma de x e y
        int soma = x + y;

        // Converte a soma para string
        sprintf(str, "%d", soma);

        // Remove os dígitos '0' e imprime o resultado
        remove_zero(str);
    }

    return 0;
}
