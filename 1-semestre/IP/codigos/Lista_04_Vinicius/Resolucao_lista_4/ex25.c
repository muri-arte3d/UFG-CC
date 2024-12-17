#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief Remove os caracteres especiais que delimitam as strings no texto.
 *
 * Esta função percorre o texto removendo caracteres especiais, mantendo apenas
 * letras, números e espaços. O texto modificado é armazenado na mesma variável.
 *
 * @param texto String contendo o texto original.
 */
void limpar_caracteres_especiais(char *texto)
{
    int i, j = 0;    /**< i: Variável de iteração sobre o texto. j: Índice para o buffer temporário. */
    char temp[2048]; /**< temp: Buffer temporário para armazenar o texto sem caracteres especiais. */

    // Percorre o texto e copia apenas os caracteres que não sejam delimitadores
    for (i = 0; texto[i] != '\0'; i++)
    {
        // Mantém apenas letras, números e espaços
        if (isalnum(texto[i]) || isspace(texto[i]))
        {
            temp[j++] = texto[i];
        }
    }
    temp[j] = '\0';      // Finaliza a string limpa
    strcpy(texto, temp); // Copia de volta o texto limpo
}

/**
 * @brief Conta a frequência de palavras no texto e exibe os resultados.
 *
 * Esta função quebra o texto em palavras, calcula a frequência de cada uma e
 * exibe o resultado no formato "(palavra)quantidade".
 *
 * @param texto String contendo o texto de entrada.
 */
void contar_frequencia_palavras(char *texto)
{
    char *palavras[512];       /**< palavras: Array para armazenar até 512 palavras distintas. */
    int frequencia[512] = {0}; /**< frequencia: Array para armazenar a frequência de cada palavra. */
    int total_palavras = 0;    /**< total_palavras: Contador de palavras distintas encontradas. */

    char *token = strtok(texto, " "); /**< token: Ponteiro que armazena cada palavra extraída do texto. */
    int i;                            /**< i: Variável de iteração para verificar se a palavra já foi encontrada. */

    // Percorre cada palavra no texto
    while (token != NULL)
    {
        // Verifica se a palavra já foi encontrada antes
        for (i = 0; i < total_palavras; i++)
        {
            if (strcmp(palavras[i], token) == 0)
            {
                frequencia[i]++; // Incrementa a frequência se já existir
                break;
            }
        }

        // Se for uma nova palavra, adiciona ao array de palavras
        if (i == total_palavras)
        {
            palavras[total_palavras] = strdup(token); // Armazena a nova palavra
            frequencia[total_palavras] = 1;           // Inicia a frequência com 1
            total_palavras++;
        }

        token = strtok(NULL, " "); // Continua para a próxima palavra
    }

    // Exibe o resultado conforme o formato solicitado
    for (i = 0; i < total_palavras; i++)
    {
        printf("(%s)%d\n", palavras[i], frequencia[i]); // Exibe cada palavra e sua frequência
        free(palavras[i]);                              // Libera a memória alocada para a palavra
    }
}

int main(void)
{
    char texto[2049]; /**< texto: String que armazena o texto de entrada, até 2048 caracteres. */

    // Lê a linha de entrada
    fgets(texto, 2049, stdin);
    texto[strcspn(texto, "\n")] = '\0'; // Remove o caractere de nova linha (caso exista)

    // Limpa os caracteres especiais do texto
    limpar_caracteres_especiais(texto);

    // Conta a frequência de palavras e exibe o resultado
    contar_frequencia_palavras(texto);

    return 0;
}