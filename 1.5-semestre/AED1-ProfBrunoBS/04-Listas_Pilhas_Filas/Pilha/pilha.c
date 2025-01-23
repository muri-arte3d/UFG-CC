#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

// Definição das coisas

Pilha *criaPilhaVazia()
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    if (p != NULL)
    {
        return p;
    }
}

int inicializaPilhaVazia(Pilha *pilha)
{
    pilha->tamanho = 0;
    for (int i = 0; i < TAMANHO_MAXIMO_PILHA; i++)
    {
        pilha->elemento[i].chave = CHAVE_INVALIDA;
    }
    return (SUCESSO);
}

void liberaPilha(Pilha *pilha)
{
    free(pilha);
}

int tamanhoPilha(Pilha *pilha)
{
    return pilha->tamanho;
}

int verificaPilhaVazia(Pilha *pilha)
{
    if (pilha->tamanho > 0)
    {
        return (SUCESSO);
    }
    else
    {
        return (FALHA);
    }
}

int verificaPilhaCheia(Pilha *pilha)
{
    if (pilha->tamanho == TAMANHO_MAXIMO_PILHA)
    {
        return (FALHA);
    }
    else
    {
        return (SUCESSO);
    }
}

int pushPilha(Pilha *pilha, Elemento elemento)
{
    if (verificaPilhaCheia(pilha) == FALHA)
    {
        return (FALHA); // Pilha Cheia
    }
    else
    {
        pilha->elemento[pilha->tamanho] = elemento;
        pilha->tamanho++;
        return (SUCESSO);
    }
}

Elemento popPilha(Pilha *pilha)
{
    Elemento elementoResultado;
    if (verificaPilhaVazia(pilha) == FALHA)
    {
        elementoResultado.chave = CHAVE_INVALIDA;
        return (elementoResultado);
    }
    else
    {
        elementoResultado = pilha->elemento[pilha->tamanho - 1];
        pilha->tamanho--;
        return (elementoResultado);
    }
}

void consultaTopoPilha(Pilha *pilha)
{
    printf("Elemento topo: \n");
    printf("Chave: %d\n", pilha->elemento[pilha->tamanho - 1].chave);
    printf("Dado: %d\n", pilha->elemento[pilha->tamanho - 1].dado);
}

void imprimePilha(Pilha *pilha)
{
    for (int i = pilha->tamanho - 1; i >= 0; i--)
    {
        printf("Elemento %d \n", i);
        printf("\tChave: %d\n", pilha->elemento[i].chave);
        printf("\tDado: %d\n", pilha->elemento[i].dado);
    }
}