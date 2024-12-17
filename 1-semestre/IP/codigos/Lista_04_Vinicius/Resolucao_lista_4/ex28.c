#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Converte uma string para o valor real correspondente, incluindo números negativos.
 *
 * @param str String contendo o número real.
 * @return O número real correspondente.
 */
double string2double(const char *str)
{
    double num = 0.0;               // Variável para armazenar o número final
    double parte_fracionaria = 0.0; // Variável para armazenar a parte fracionária
    int i = 0;                      // Variável de iteração
    int divisor = 1;                // Divisor para parte fracionária
    int is_fraction = 0;            // Flag para identificar se estamos na parte fracionária
    int is_negative = 0;            // Flag para identificar se o número é negativo

    // Verifica se o primeiro caractere é um sinal de menos
    if (str[i] == '-')
    {
        is_negative = 1; // Marca que o número é negativo
        i++;             // Avança para o próximo caractere
    }

    // Percorre cada caractere da string
    while (str[i] != '\0')
    {
        if (str[i] == '.')
        {
            is_fraction = 1; // Indica que entramos na parte fracionária
        }
        else if (is_fraction)
        {
            // Converte e acumula a parte fracionária
            parte_fracionaria = parte_fracionaria * 10 + (str[i] - '0');
            divisor *= 10;
        }
        else
        {
            // Converte e acumula a parte inteira
            num = num * 10 + (str[i] - '0');
        }
        i++;
    }

    // Adiciona a parte fracionária ao número inteiro
    num += parte_fracionaria / divisor;

    // Se o número for negativo, inverte o valor final
    if (is_negative)
    {
        num = -num;
    }

    return num;
}

/**
 * @brief Função principal que executa o programa.
 *
 * O programa lê uma sequência de strings contendo números reais, converte para `double`
 * e imprime o número e o dobro dele formatado com três casas decimais.
 *
 * @return Retorna 0 se o programa foi executado com sucesso.
 */
int main(void)
{
    char str[129]; // String que armazena até 128 caracteres (mais um para o '\0')
    double n;      // Variável para armazenar o número convertido

    // Lê strings até o fim do arquivo (EOF)
    while (scanf("%s", str) != EOF)
    {
        n = string2double(str);            // Converte a string para número real
        printf("%.3lf %.3lf\n", n, n * 2); // Imprime o número e o dobro com 3 casas decimais
    }

    return 0;
}
