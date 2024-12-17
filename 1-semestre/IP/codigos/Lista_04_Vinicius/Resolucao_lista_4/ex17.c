#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[5000];   /**< str: Armazena a linha de texto lida. */
    char ch[5000];     /**< ch: Armazena a primeira letra de cada palavra extraída da string. */
    int size;         /**< size: Tamanho da linha lida. */
    int i;            /**< i: Variável de iteração. */
    int z = 1;        /**< z: Contador para rastrear o índice de inserção no vetor de letras 'ch'. */
    int count = 0;    /**< count: Contador de ocorrências de letras consecutivas iguais. */

    /**
     * @brief Loop principal que processa múltiplas linhas de entrada.
     *
     * O loop continua lendo linhas até encontrar o fim do arquivo (EOF). Para cada linha, ele extrai a primeira letra
     * de cada palavra e conta quantas vezes letras consecutivas são iguais.
     */
    while (scanf("%[^\n]%*c", str) != EOF)
    {
        size = strlen(str);  /**< Calcula o tamanho da linha lida. */
        
        if (size > 5000) break;  /**< Se a linha for maior que 5000 caracteres, o programa termina. */

        ch[0] = str[0];  /**< Armazena a primeira letra da linha no vetor 'ch'. */
        
        // Extrai a primeira letra de cada palavra na string
        for (i = 0; i < size; i++)
        {
            if (i > 50 && z == 1) return 0;  /**< Se o índice 'i' ultrapassar 50 e z ainda for 1, o programa termina. */
            
            if (str[i] == ' ')  /**< Verifica se o caractere atual é um espaço, sinalizando o fim de uma palavra. */
            {
                ch[z] = str[i + 1];  /**< Armazena a primeira letra da próxima palavra em 'ch'. */
                z++;
                if (z > 100) return 0;  /**< Se o número de palavras for maior que 100, o programa termina. */
            }
        }

        // Verifica se há letras consecutivas iguais no vetor 'ch'
        for (i = 0; i < z; i++)
        {
            if (ch[i] == ch[i + 1])  /**< Compara letras consecutivas no vetor 'ch'. */
            {
                if (isalpha(ch[i]) && isalpha(ch[i + 1]))  /**< Verifica se ambas as letras são caracteres alfabéticos. */
                {
                    if (i + 1 == z) continue;  /**< Se for o último caractere, ignora. */
                    else
                    {
                        count++;  /**< Incrementa o contador de ocorrências de letras consecutivas iguais. */
                        i++;      /**< Avança o índice para pular a letra já contada. */
                    }
                }
            }
        }

        printf("%d\n", count);  /**< Imprime o número de letras consecutivas iguais. */
        
        // Reinicia os contadores para processar a próxima linha
        count = 0;
        z = 1;
    }

    return 0;
}
