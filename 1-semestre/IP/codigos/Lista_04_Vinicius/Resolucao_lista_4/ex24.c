#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Converte uma string para o valor inteiro correspondente.
 *
 * Esta função percorre a string de entrada e converte seus caracteres numéricos em um número
 * inteiro correspondente. Agora, lida corretamente com números negativos, verificando se o
 * primeiro caractere da string é um sinal de menos.
 *
 * @param str String contendo o número inteiro.
 * @return O número inteiro correspondente.
 */
long int string2int(const char *str)
{
    long int num = 0;    /**< num: Variável para armazenar o número final. */
    int i = 0;           /**< i: Variável de iteração para percorrer os caracteres da string. */
    int is_negative = 0; /**< is_negative: Variável para verificar se o número é negativo. */

    // Verifica se o primeiro caractere é um sinal de menos
    if (str[i] == '-')
    {
        is_negative = 1; // Define que o número é negativo
        i++;             // Pula o caractere de sinal para continuar a conversão
    }

    // Percorre cada caractere da string até encontrar o caractere nulo '\0'
    while (str[i] != '\0')
    {
        /**
         * @brief Converte o caractere numérico para o inteiro correspondente e acumula.
         *
         * O cálculo transforma o caractere numérico em seu valor inteiro correspondente,
         * subtraindo o valor ASCII de '0' e multiplicando por 10 para "empurrar" os dígitos
         * já processados para a esquerda.
         */
        num = (num * 10) + (str[i] - '0');
        i++;
    }

    // Se o número for negativo, inverte o valor final
    if (is_negative)
    {
        num = -num;
    }

    return num; // Retorna o número convertido
}

int main(void)
{
    char str[129]; /**< str: String que armazena até 128 caracteres mais o caractere nulo '\0'. */
    long int n;    /**< n: Variável para armazenar o número inteiro convertido. */

    /**
     * @brief Lê strings até encontrar o fim do arquivo (EOF).
     *
     * A função `scanf` lê cada string da entrada até atingir o final do arquivo. Cada string lida
     * é convertida para um número inteiro usando a função `string2int`, e então o número e seu dobro
     * são impressos.
     */
    while (scanf("%s", str) != EOF)
    {
        n = string2int(str);           // Converte a string para número inteiro
        printf("%ld %ld\n", n, n * 2); // Imprime o número e o dobro do número
    }

    return 0;
}
