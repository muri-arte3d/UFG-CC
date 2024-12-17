#include <stdio.h>
#include <string.h>

// Definição de constantes para o número de LEDs necessários para cada dígito
#define ZERO 6
#define UM 2
#define DOIS 5
#define TRES 5
#define QUATRO 4
#define CINCO 5
#define SEIS 6
#define SETE 3
#define OITO 7
#define NOVE 6
#define size 100000 /**< Tamanho máximo do vetor que armazena o número como string. */

int main(void)
{
    char Vec[size];  /**< Vetor para armazenar a string representando o número lido. */
    int N;           /**< Número de casos de teste. */
    int i, k;        /**< Variáveis de iteração para loops. */
    int count = 0;   /**< Contador auxiliar (não utilizado atualmente). */
    int br;          /**< Comprimento da string lida. */
    int counter = 0; /**< Contador para somar o número total de LEDs necessários. */

    // Lê o número de casos de teste
    scanf("%d", &N);

    // Verifica se N está dentro do limite especificado
    if (N >= 1 && N <= 1000)
    {
        // Loop principal para processar cada caso de teste
        for (i = 0; i < N; i++)
        {
            // Lê o número como string
            scanf("%s", Vec);

            // Obtém o comprimento da string
            br = strlen(Vec);

            /**
             * @brief Loop para calcular a quantidade de LEDs necessária para exibir o número.
             *
             * O programa percorre cada caractere da string e soma a quantidade de LEDs necessária
             * com base no valor do dígito (0-9).
             */
            for (k = 0; k < br; k++)
            {
                if (Vec[k] == '0')
                {
                    counter += ZERO; /**< Adiciona 6 LEDs para o dígito 0. */
                }
                else if (Vec[k] == '1')
                {
                    counter += UM; /**< Adiciona 2 LEDs para o dígito 1. */
                }
                else if (Vec[k] == '2')
                {
                    counter += DOIS; /**< Adiciona 5 LEDs para o dígito 2. */
                }
                else if (Vec[k] == '3')
                {
                    counter += TRES; /**< Adiciona 5 LEDs para o dígito 3. */
                }
                else if (Vec[k] == '4')
                {
                    counter += QUATRO; /**< Adiciona 4 LEDs para o dígito 4. */
                }
                else if (Vec[k] == '5')
                {
                    counter += CINCO; /**< Adiciona 5 LEDs para o dígito 5. */
                }
                else if (Vec[k] == '6')
                {
                    counter += SEIS; /**< Adiciona 6 LEDs para o dígito 6. */
                }
                else if (Vec[k] == '7')
                {
                    counter += SETE; /**< Adiciona 3 LEDs para o dígito 7. */
                }
                else if (Vec[k] == '8')
                {
                    counter += OITO; /**< Adiciona 7 LEDs para o dígito 8. */
                }
                else if (Vec[k] == '9')
                {
                    counter += NOVE; /**< Adiciona 6 LEDs para o dígito 9. */
                }
            }

            // Imprime o total de LEDs necessários para o número atual
            printf("%d leds\n", counter);

            // Reseta o contador para o próximo caso de teste
            counter = 0;
        }
    }

    return 0;
}
