#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int Quant_Casos_teste; /**< Número de casos de teste. */
    char Caso_test[10000]; /**< Vetor que armazena a string lida para cada caso de teste (até 10.000 caracteres). */
    int i, i2;             /**< Variáveis de iteração para loops. */
    int Largura;           /**< Tamanho da string lida. */
    int Letras = 0;        /**< Contador para o número total de letras na string. */
    int Vogais = 0;        /**< Contador para o número de vogais na string. */
    int Consoantes;        /**< Contador para o número de consoantes (calculado como `Letras - Vogais`). */

    // Lê o número de casos de teste
    scanf("%d", &Quant_Casos_teste);

    /**
     * @brief Loop principal que processa cada caso de teste.
     *
     * Para cada string lida, o programa conta o número de letras, vogais e consoantes
     * e imprime os resultados. Após cada caso, os contadores são reiniciados.
     */
    for (i = 0; i < Quant_Casos_teste; ++i)
    {
        // Lê uma linha de texto para o caso de teste
        scanf("%*c%[^\n]", Caso_test);
        Largura = strlen(Caso_test); /**< Calcula o tamanho da string lida. */

        // Loop que percorre cada caractere da string e conta as letras, vogais e consoantes
        for (i2 = 0; i2 < Largura; ++i2)
        {
            if (isalpha(Caso_test[i2])) /**< Verifica se o caractere é uma letra alfabética. */
            {
                Letras++; /**< Incrementa o contador de letras. */

                // Verifica se o caractere é uma vogal (maiúscula ou minúscula)
                if (Caso_test[i2] == 'A' || Caso_test[i2] == 'a' ||
                    Caso_test[i2] == 'E' || Caso_test[i2] == 'e' ||
                    Caso_test[i2] == 'I' || Caso_test[i2] == 'i' ||
                    Caso_test[i2] == 'O' || Caso_test[i2] == 'o' ||
                    Caso_test[i2] == 'U' || Caso_test[i2] == 'u')
                {
                    Vogais++; /**< Incrementa o contador de vogais. */
                }
            }
        }

        // Calcula o número de consoantes
        Consoantes = Letras - Vogais;

        // Imprime os resultados para o caso atual
        printf("Letras = %d\n", Letras);
        printf("Vogais = %d\n", Vogais);
        printf("Consoantes = %d\n", Consoantes);

        // Reinicia os contadores para o próximo caso de teste
        Letras = Vogais = Consoantes = 0;
    }

    return 0;
}
