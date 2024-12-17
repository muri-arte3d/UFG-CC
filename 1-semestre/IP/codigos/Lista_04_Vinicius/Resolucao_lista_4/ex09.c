#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    int n;           /**< Número de casos de teste. */
    int t = 0;       /**< Contador de iteração para os casos de teste. */
    int i = 0;       /**< Variável de iteração para a manipulação da string. */
    int size = 0;    /**< Tamanho da string lida. */
    char str[1000];  /**< Vetor que armazena a string de entrada. */
    char str2[1000]; /**< Vetor que armazena a string após o processamento. */

    // Lê o número de casos de teste
    scanf("%d", &n);

    /**
     * @brief Loop que processa cada caso de teste.
     *
     * Para cada string, o programa aplica os passos de codificação conforme as regras descritas
     * e imprime a string resultante.
     */
    do
    {
        // Lê uma linha de texto da entrada
        scanf("%*c%[^\n]", str);
        size = strlen(str); /**< Calcula o tamanho da string lida. */

        // Passo 1: Incrementa o valor ASCII de cada caractere alfabético em 3
        while (str[i] != '\0')
        {
            if (isalpha(str[i]))
            {
                str[i] += 3; /**< Incrementa o valor ASCII em 3 para letras alfabéticas. */
            }
            i++;
        }

        // Passo 2: Inverte a string
        for (i = 0; i <= size; i++)
        {
            str2[i] = str[size - i - 1]; /**< Copia os caracteres na ordem inversa. */
        }

        // Passo 3: Decrementa o valor ASCII de cada caractere da segunda metade da string
        int j = size / 2; /**< Define o ponto de início para a segunda metade da string. */
        for (i = j; i < size && str2[i] != '\0'; i++)
        {
            str2[i] -= 1; /**< Decrementa o valor ASCII em 1 para a segunda metade da string. */
        }

        // Imprime a string resultante
        printf("%s\n", str2);

        // Reseta o índice e incrementa o contador de testes
        i = 0;
        t++;
    } while (t < n); /**< Repete o processo para o número de casos de teste. */

    return 0;
}
