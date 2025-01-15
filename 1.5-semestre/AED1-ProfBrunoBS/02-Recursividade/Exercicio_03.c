/**
 * Entrada: valor_dinheiro (int)
 * Entrada: num_tipos (int)
 * Entrada: valores das cedulas (Cedulas *)
 * Entrada: quantidade cedulas (Cedulas *)
 */

#include <stdio.h>
#include <stdlib.h>
#include "Cedulas.h"

/**
 * Funcao recursiva:
 *      Condicao de parada: Passar o valor
 *                          Valor igual
 *                          Acabou as notas
 *      Recursão: Valor abaixo
 */

int saque(Cedulas *c, int valor_total, int valor_atual, int tipo)
{
    int total = 0;

    // Condicoes de parada
    if (valor_atual > valor_total)
    {
        printf("passei do valor\n");
        return 0;
    }
    else if (valor_atual == valor_total)
    {
        printf("Achei\n");
        return 1;
    }
    else if (tipo == -1)
    {
        printf("tipo -1\n");
        return 0;
    }
    // Recursão
    else
    {
        for (int i = 0; i <= c[tipo].qtd_da_cedula; i++)
        {

            printf("i = %d e tipo: %d\n", i, tipo);
            if (i > 0)
                valor_atual += c[tipo].valor_da_cedula;
            printf("valor atual: %d\n", valor_atual);
            total += saque(c, valor_total, valor_atual, tipo - 1);
        }
    }

    return total;
}

int main()
{
    int valor_dinheiro;
    printf("Valor do saque: ");
    scanf("%d", &valor_dinheiro);

    int num_tipos;
    printf("Quantidade de tipos de Cedula: ");
    scanf("%d", &num_tipos);

    Cedulas *c = malloc(num_tipos * sizeof(Cedulas));
    if (c == NULL)
        return 1;

    printf("Fazendo a leitura das notas: ");
    for (int i = 0; i < num_tipos; i++)
    {
        scanf("%d", &c[i].valor_da_cedula);
    }

    printf("Fazendo a leitura das quantidades: ");
    for (int i = 0; i < num_tipos; i++)
    {
        scanf("%d", &c[i].qtd_da_cedula);
    }

    int qtd_notas_total = 0;
    for (int i = 0; i < num_tipos; i++)
    {
        qtd_notas_total += c[i].qtd_da_cedula;
    }
    printf("Quantidade total de cedulas: %d\n", qtd_notas_total);

    int combinacoes = saque(c, valor_dinheiro, 0, (num_tipos - 1));
    printf("Existem %d combinacoes possiveis\n", combinacoes);
    free(c);
}
