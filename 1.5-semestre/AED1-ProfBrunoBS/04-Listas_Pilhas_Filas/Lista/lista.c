// lista.c

#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

Lista* criaLista()
{
    Lista* lista = (Lista*) malloc(sizeof(Lista));
    if (lista != NULL)
    {
        return(lista);
    }
}

int inicializaLista(Lista* lista)
{
    lista->tamanho = 0;
    for(int i = 0; i < TAMANHO_MAXIMO_LISTA; i++)
    {
        lista->elementos[i].chave = CHAVE_INVALIDA;
        lista->elementos[i].dado = 0;
    }
    return SUCESSO;
}

void liberaLista(Lista* lista)
{
    free(lista);
}

int tamanhoLista(Lista* lista)
{
    return (lista->tamanho);
}

