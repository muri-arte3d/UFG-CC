#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "historico.h"
#define SITES_TESTES 25

int main()
{
    // Gerando sites
    Site sites[SITES_TESTES];

    for (int i = 0; i < SITES_TESTES; i++)
    {
        char nome[MAX_NOME_SITE];
        snprintf(nome, sizeof(nome), "Site %d", i);
        strcpy(sites[i].nome, nome);

        // printf("%s\n", sites[i].nome);
    }

    // Iniciando sessao
    Sessao *sessao01 = iniciarSessao();

    imprimirSiteAtual(sessao01);
    imprimirHistorico(sessao01);

    visitarNovoSite(sessao01, sites[1]);
    printf("\n");
    imprimirSiteAtual(sessao01);
    imprimirHistorico(sessao01);

    for (int i = 2; i < SITES_TESTES; i++)
    {
        visitarNovoSite(sessao01, sites[i]);
    }

    printf("\n");
    imprimirSiteAtual(sessao01);
    imprimirHistorico(sessao01);

    // Volta 5 sites no historico
    for (int i = 0; i < 5; i++)
    {
        printf("\nFuncao de voltar historico\n");
        voltarHistorico(sessao01);
    }

    // Avança 1 site no historico
    printf("\nFuncao de avancar historico\n");
    avancarHistorico(sessao01);

    imprimirHistorico(sessao01);

    visitarNovoSite(sessao01, sites[0]);

    imprimirHistorico(sessao01);

    return 0;
}