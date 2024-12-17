#include <stdio.h>

int main(void)
{
    int sorteados[6];      /**< sorteados: Array que armazena os 6 números sorteados. */
    int apostas[6];        /**< apostas: Array que armazena os 6 números de uma aposta. */
    int i, j;              /**< i, j: Variáveis de iteração para loops. */
    int numero_de_apostas; /**< numero_de_apostas: Número total de apostas a serem verificadas. */
    int a = 0;             /**< a: Contador de apostas já processadas. */
    int numeros_iguais;    /**< numeros_iguais: Quantidade de números iguais entre uma aposta e os sorteados. */
    int quadra = 0;        /**< quadra: Contador de apostas que acertaram 4 números (quadra). */
    int quina = 0;         /**< quina: Contador de apostas que acertaram 5 números (quina). */
    int sena = 0;          /**< sena: Contador de apostas que acertaram 6 números (sena). */

    // Lê os 6 números sorteados
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &sorteados[i]);
    }

    // Lê o número total de apostas
    scanf("%d", &numero_de_apostas);

    /**
     * @brief Loop principal que processa cada aposta.
     *
     * O loop continua até que todas as apostas sejam processadas. Para cada aposta:
     * 1. Lê os 6 números da aposta.
     * 2. Compara os números da aposta com os números sorteados e conta quantos são iguais.
     * 3. Incrementa os contadores de quadra, quina ou sena com base na quantidade de números iguais.
     */
    while (a != numero_de_apostas)
    {
        numeros_iguais = 0; // Inicializa o contador de números iguais para a nova aposta

        // Lê os 6 números da aposta
        for (i = 0; i < 6; i++)
        {
            scanf("%d", &apostas[i]);
        }

        // Compara os números da aposta com os números sorteados
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 6; j++)
            {
                if (apostas[i] == sorteados[j])
                {
                    numeros_iguais++; // Incrementa o contador se houver correspondência
                }
            }
        }

        // Verifica se a aposta corresponde a uma quadra (4 números iguais)
        if (numeros_iguais == 4)
        {
            quadra++;
        }

        // Verifica se a aposta corresponde a uma quina (5 números iguais)
        if (numeros_iguais == 5)
        {
            quina++;
        }

        // Verifica se a aposta corresponde a uma sena (6 números iguais)
        if (numeros_iguais == 6)
        {
            sena++;
        }

        a++; // Incrementa o contador de apostas processadas
    }

    /**
     * @brief Exibe os resultados da sena, quina e quadra.
     *
     * Após processar todas as apostas, o programa exibe quantos apostadores acertaram
     * os 6 números (sena), 5 números (quina) e 4 números (quadra). Caso não haja
     * nenhum ganhador em determinada categoria, uma mensagem correspondente é exibida.
     */

    if (sena != 0)
    {
        printf("Houve %d acertador(es) da sena\n", sena);
    }
    else
    {
        printf("Nao houve acertador para sena\n");
    }

    if (quina != 0)
    {
        printf("Houve %d acertador(es) da quina\n", quina);
    }
    else
    {
        printf("Nao houve acertador para quina\n");
    }

    if (quadra != 0)
    {
        printf("Houve %d acertador(es) da quadra\n", quadra);
    }
    else
    {
        printf("Nao houve acertador para quadra\n");
    }

    return 0;
}
