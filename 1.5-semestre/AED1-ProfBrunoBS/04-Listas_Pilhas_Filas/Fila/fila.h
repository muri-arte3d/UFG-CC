// fila.h
/* fila de inteiros
1. Criação da fila.
2. Inicialização da fila.
3. Liberação da fila.
4. Tamanho da fila.
5. Verificação de fila vazia.
6. Verificação de fila cheia.
7. Inserção na fila.
8. Remoção na fila.
9. Consulta do primeiro elemento da fila.
10. Impressão da fila (do início para o fim).
 */
#include <stdlib.h>
#define TAMANHO_MAXIMO_FILA 5
#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA -1

typedef struct elemento
{
    unsigned int chave;
    int dado;
} Elemento;

typedef struct fila
{
    unsigned int tamanho;
    Elemento elemento[TAMANHO_MAXIMO_FILA];
} Fila;

Fila *criaFila();
int inicializaFila(Fila *fila);
void liberaFila(Fila *fila);
int tamanhoFila(Fila *fila);
int verificaFilaVazia(Fila *fila);
int verificaFilaCheia(Fila *fila);
int inserirNaFila(Fila *fila, Elemento elemento);
Elemento removeDaFila(Fila *fila);
void primeiroDaFila(Fila* fila);
void imprimeFila(Fila* fila);
