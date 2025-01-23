// historico.h

#define MAX_NOME_SITE 50
#define MAX_SITES 20
#define SUCESSO 1
#define FALHA -1
#define PAGINA_PADRAO "Nova sessao"

typedef struct site
{
    char nome[MAX_NOME_SITE];
} Site;

typedef struct historico
{
    Site sites[MAX_SITES];
    unsigned int tamanho;
} Historico;

typedef struct sessao
{
    Site siteAtual; //Só para aumentar a intuição (faria muito sentido ele ser um ponteiro)
    Historico historico;
    unsigned int indice; //Acessar os indices dos sites no historico
} Sessao;

Sessao *iniciarSessao();
void imprimirSiteAtual(Sessao *sessao);
void visitarNovoSite(Sessao *sessao, Site site);
void voltarHistorico(Sessao *sessao);
void avancarHistorico(Sessao *sessao);
void imprimirHistorico(Sessao *sessao);