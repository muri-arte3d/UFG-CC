/******************************************************************************
3 - Mercado (+)

Entrada: N quantidade de idas (casos de teste) -> (int)
Entrada: M quantidade de produtos disponC-veis -> (int)
Entrada (M vezes):  Produtos{
                        char nome[50]; (nome de produto)
                        double valor; (preco do produto)
                    }
Entrada: P quantidade de prod a comprar -> (int) (1 <= P <= M)
Entrada (P vezes):  Lista{
                        char nome[50]; (nome do produto)
                        int qtd; (quantidade daquele produto)
}

SaC-da: "R$ " + _valor do produto_ * _quantidade do produto_

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    double valor;
} Produto;

typedef struct
{
    char nome[50];
    int qtd;
} Lista;

double valorTotal(Produto *p, Lista *l, int qtdp, int qtdl)
{
    double valor = 0;
    int i, j;
    //printf("qtdp: %d\n", qtdp);
    //printf("qtdl: %d\n", qtdl);
    for (i = 0; i < qtdp; i++)
    {
        for (j = 0; j < qtdl; j++)
        {
            // printf("p[%d].nome: %s\n", i, p[i].nome);
            // printf("l[%d].nome: %s\n", j, l[j].nome);
            if (strcmp(p[i].nome, l[j].nome) == 0)
            {
                valor += p[i].valor * l[j].qtd;
            }
        }
    }
    return valor;
}

int main()
{
    // Variaveis
    Produto *P;
    Lista *lista;
    int M, qtdcompra;

    // Leitura da quantidade de idas (casos de teste)
    int N;
    //printf("Numero de idas a feira: \n");
    scanf("%d", &N);

    int i;
    for (i = 0; i < N; i++)
    {
        //printf("Numero de produtos na feira: ");
        scanf("%d", &M);

        P = malloc(M * sizeof(Produto));
        if (P == NULL)
        {
            printf("Nao conseguiu alocar memoria para Produto!\n");
            return 1;
        }

        int j;
        for (j = 0; j < M; j++)
        {
            // Leitura do nome e valor
            scanf("%s%lf", P[j].nome, &P[j].valor);
            //printf("P[%d].nome: %s -- P[%d].valor: %lf\n", j, P[j].nome, j, P[j].valor);
        }

        // Leitura de quantidade de produtos a comprar
        //printf("Quantidade de produtos da lista: ");
        scanf("%d", &qtdcompra);

        lista = malloc(qtdcompra * sizeof(Lista));
        if (lista == NULL)
        {
            printf("Nao conseguiu alocar memoria para lista!\n");
            return 1;
        }

        // Leitura da lista de compras
        int m;
        for (m = 0; m < qtdcompra; m++)
        {
            // Leitura do nome e quantidade
            scanf("%s%d", lista[m].nome, &lista[m].qtd);
            //printf("lista[%d].nome: %s -- lista[%d].qtd: %d\n", m, lista[m].nome, m, lista[m].qtd);
        }

        double precoTotal = 0;
        precoTotal = valorTotal(P, lista, M, qtdcompra);

        printf("R$ %.2lf\n", precoTotal);
    }
    free(P);
    free(lista);
    return 0;
}

/*
getchar();
            fgets(P[i].nome, sizeof(P[i].nome), stdin);
            P[i].nome[strcspn(P[i].nome, "\n")] = '\0';

            scanf("%f", &P[i].valor);
*/