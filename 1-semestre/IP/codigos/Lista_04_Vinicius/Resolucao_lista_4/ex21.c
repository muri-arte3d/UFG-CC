#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * @brief Função para encontrar a(s) letra(s) de maior frequência ignorando case sensitive.
 *
 * A função percorre o texto, contando a frequência de cada letra (independente de maiúsculas ou minúsculas)
 * e depois imprime a(s) letra(s) que mais aparecem no texto em ordem alfabética.
 *
 * @param texto String contendo o texto a ser analisado.
 */
void encontrar_maior_frequencia(char *texto)
{
    int frequencia[26] = {0}; /**< Vetor para contar a frequência das 26 letras do alfabeto. */
    int i;                    /**< Variável de iteração para percorrer o texto. */

    // Contar a frequência das letras no texto
    for (i = 0; i < strlen(texto); i++)
    {
        // Verifica se o caractere é uma letra
        if (isalpha(texto[i]))
        {
            // Converte para minúscula e incrementa a frequência da letra correspondente
            frequencia[tolower(texto[i]) - 'a']++;
        }
    }

    // Encontrar a maior frequência
    int maior_freq = 0; /**< Armazena a maior frequência de uma letra encontrada no texto. */
    for (i = 0; i < 26; i++)
    {
        if (frequencia[i] > maior_freq)
        {
            maior_freq = frequencia[i]; // Atualiza a maior frequência
        }
    }

    // Imprimir as letras que possuem a maior frequência em ordem alfabética
    for (i = 0; i < 26; i++)
    {
        if (frequencia[i] == maior_freq)
        {
            printf("%c", 'a' + i); // Imprime a letra com a maior frequência
        }
    }
    printf("\n"); // Nova linha após imprimir todas as letras de maior frequência
}

int main(void)
{
    int N;           /**< N: Número de casos de teste. */
    int i;           /**< i: Variável de iteração para os casos de teste. */
    char texto[201]; /**< texto: String para armazenar a linha de texto (até 200 caracteres). */

    // Lê o número de casos de teste
    scanf("%d\n", &N); // O '\n' é para consumir a nova linha após o número

    // Processar cada caso de teste
    for (i = 0; i < N; i++)
    {
        fgets(texto, 201, stdin);           // Lê uma linha do texto (até 200 caracteres)
        texto[strcspn(texto, "\n")] = '\0'; // Remove o caractere de nova linha, se presente
        encontrar_maior_frequencia(texto);  // Chama a função para processar o texto e encontrar as letras mais frequentes
    }

    return 0;
}
