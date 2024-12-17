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
 * @brief Conta e imprime a frequência total de cada palavra ou número na ordem de entrada,
 * mesmo que haja repetições.
 *
 * Esta função quebra o texto em palavras, calcula a frequência total de cada uma e
 * exibe o resultado no formato "(palavra)frequencia_total", preservando a ordem de
 * entrada e mostrando a frequência total sempre que a palavra for impressa.
 *
 * @param texto String contendo o texto de entrada.
 */
void contar_frequencia_palavras(char *texto)
{
    char *palavras[512];       /**< palavras: Array para armazenar até 512 palavras distintas. */
    int frequencia[512] = {0}; /**< frequencia: Array para armazenar a frequência de cada palavra. */
    int total_palavras = 0;    /**< total_palavras: Contador de palavras distintas encontradas. */

    char *token; /**< token: Ponteiro que armazena cada palavra extraída do texto. */
    int i;       /**< i: Variável de iteração para verificar se a palavra já foi encontrada. */

    // Primeiro passamos por todas as palavras para contar as frequências totais
    char texto_copy[2049];
    strcpy(texto_copy, texto);
    token = strtok(texto_copy, " ");

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

    // Agora, percorremos novamente o texto para imprimir cada palavra com sua frequência total
    token = strtok(texto, " ");
    while (token != NULL)
    {
        // Encontramos a palavra e imprimimos a frequência total já calculada
        for (i = 0; i < total_palavras; i++)
        {
            if (strcmp(palavras[i], token) == 0)
            {
                printf("(%s)%d\n", token, frequencia[i]);
                break;
            }
        }

        token = strtok(NULL, " ");
    }

    // Libera a memória alocada para as palavras
    for (i = 0; i < total_palavras; i++)
    {
        free(palavras[i]);
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
