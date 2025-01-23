// pilha.h
/*
Pilha estática de inteiros

Criação da pilha
Inicialização da pilha
Liberação da pilha
Tamanho da pilha
Verificação de pilha vazia
Verificação de pilha cheia
Inserção (push) na pilha
Remoção (pop) da pilha
Consulta do topo da pilha
Impressão da pilha (do topo para a base)
*/

#include <stdio.h>
#include <stdlib.h> //Vai usar alocação dinâmica????

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA -1

#define TAMANHO_MAXIMO_PILHA 5

// Elemento possui chave e dado
typedef struct elemento
{
    unsigned int chave;
    int dado;
} Elemento;

// Pilha possui vetor de Elementos e tamanho_atual
typedef struct pilha
{
    unsigned tamanho;
    Elemento elemento[TAMANHO_MAXIMO_PILHA];
} Pilha;

Pilha *criaPilhaVazia();
int inicializaPilhaVazia(Pilha *pilha);
void liberaPilha(Pilha *pilha);
int tamanhoPilha(Pilha *pilha);
int verificaPilhaVazia(Pilha *pilha);
int verificaPilhaCheia(Pilha *pilha);
int pushPilha(Pilha *pilha, Elemento elemento);
Elemento popPilha(Pilha *pilha);
void consultaTopoPilha(Pilha *pilha);
void imprimePilha(Pilha *pilha);
