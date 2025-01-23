#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "historico.h"

Sessao *iniciarSessao()
{
    Sessao *s = (Sessao *)malloc(sizeof(Sessao));
    if (s != NULL)
    {
        strcpy(s->historico.sites[0].nome, PAGINA_PADRAO);
        s->siteAtual = s->historico.sites[0];
        s->indice = 0;
        s->historico.tamanho = 1;
        return s;
    }
}

void imprimirSiteAtual(Sessao *sessao)
{
    printf("Site atual: %s\n", sessao->siteAtual.nome);
}

void visitarNovoSite(Sessao *sessao, Site site)
{
    if (sessao->indice == MAX_SITES - 1) // Está no site de numero 20
    {
        printf("Historico cheio\n");
        for (int i = 0; i < MAX_SITES; i++)
        {
            sessao->historico.sites[i] = sessao->historico.sites[i + 1];
        }
        sessao->historico.sites[MAX_SITES - 1] = site;
    }
    else
    {
        printf("Historico nao cheio\n");
        sessao->indice++;                                            // Atualiza indice
        sessao->historico.sites[sessao->indice] = site;              // Novo site adicionado no histórico
        sessao->siteAtual = sessao->historico.sites[sessao->indice]; // Novo site como site atual
        sessao->historico.tamanho = sessao->indice + 1;              // Novo tamanho do histórico
    }
}

void voltarHistorico(Sessao *sessao)
{
    if (sessao->indice == 0)
    {
        printf("Nao ha como voltar mais no historico\n");
    }
    else
    {
        sessao->indice--;
        sessao->siteAtual = sessao->historico.sites[sessao->indice];
        printf("Voce voltou ao site %s\n", sessao->siteAtual.nome);
    }
}

void avancarHistorico(Sessao *sessao)
{
    if (sessao->indice == MAX_SITES)
    {
        printf("Nao a como avancar mais no historico\n");
    }
    else
    {
        sessao->indice++;
        sessao->siteAtual = sessao->historico.sites[sessao->indice];
        printf("Voce avancou ao site %s\n", sessao->siteAtual.nome);
    }
}

void imprimirHistorico(Sessao *sessao)
{
    printf(" ---- Historico ----\n");
    printf("Tamanho do historico atualmente: %d\n", sessao->historico.tamanho);
    for (int i = 0; i < sessao->historico.tamanho; i++)
    {
        printf("SITE %d: %s\n", i, sessao->historico.sites[i].nome);
    }
    printf(" --------------\n\n");
}