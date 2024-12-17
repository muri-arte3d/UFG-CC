#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000]; /**< Vetor para armazenar a string lida. */
    int i, k, t;    /**< Variáveis de iteração e para armazenar o número de casos de teste. */

    // Lê o número de casos de teste
    scanf("%d", &t);

    /**
     * @brief Loop que processa cada caso de teste.
     *
     * Para cada string lida, o programa tenta identificar se a palavra representa o número 1, 2 ou 3.
     */
    for (k = 0; k < t; k++)
    {
        // Lê uma linha de entrada que representa uma palavra
        scanf("%*c%[^\n]", str);

        // Se a palavra tiver até 3 caracteres, verifica se é "one" ou "two"
        if (strlen(str) <= 3)
        {
            // Verifica se a palavra é "one" com base nas letras
            if (str[0] == 'o' && str[1] == 'n')
            {
                printf("%d\n", 1); /**< Se as duas primeiras letras forem "on", é "one". */
            }
            else if (str[1] == 'n' && str[2] == 'e')
            {
                printf("%d\n", 1); /**< Se as últimas duas letras forem "ne", é "one". */
            }
            else if (str[0] == 'o' && str[2] == 'e')
            {
                printf("%d\n", 1); /**< Se a primeira e a última letras forem "o" e "e", é "one". */
            }
            // Verifica se a palavra é "two" com base nas letras
            else if (str[0] == 't' && str[1] == 'w')
            {
                printf("%d\n", 2); /**< Se as duas primeiras letras forem "tw", é "two". */
            }
            else if (str[1] == 'w' && str[2] == 'o')
            {
                printf("%d\n", 2); /**< Se as últimas duas letras forem "wo", é "two". */
            }
            else if (str[0] == 't' && str[2] == 'o')
            {
                printf("%d\n", 2); /**< Se a primeira e a última letras forem "t" e "o", é "two". */
            }
        }
        else
        {
            // Se a palavra tiver mais de 3 caracteres, assume que é "three"
            printf("%d\n", 3);
        }
    }

    return 0;
}
