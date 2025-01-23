// fila.c
#include <stdio.h>
#include "fila.h"

Fila* criaFila()
{
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    if (fila != NULL)
    {
        return fila;
    }
}

int inicializaFila(Fila* fila) //Cuidado!!! Pode sobreescrever a fila existente
{
    fila->tamanho = 0;
    for (i = 0; i < TAMANHO_MAXIMO_FILA; i++)
    {
        fila->elemento[i].chave = CHAVE_INVALIDA;
    }
    return (SUCESSO);
}

void liberaFila(Fila* fila)
{
    free(fila);
}

int tamanhoFila(Fila* fila)
{
    return fila->tamanho;
}

int verificaFilaVazia(Fila* fila)
{
    if(fila->tamanho == 0)
    {
        return(SUCESSO);
    }
    else
    {
        return(FALHA);
    }
}

int verificaFilaCheia(Fila* fila)
{
     if(fila->tamanho == TAMANHO_MAXIMO_FILA)
    {
        return(SUCESSO);
    }
    else
    {
        return(FALHA);
    }
}

int inserirNaFila(Fila* fila, Elemento* elemento)
{
    if (verificaFilaCheia == SUCESSO)
    {
        return (FALHA);
    }
    else
    {
        fila->elemento[fila->tamanho] = elemento;
        fila->tamanho++;
        return(SUCESSO);
    }
}

Elemento removeDaFila(Fila* fila, Elemento elemento)
{
    Elemento elementoAuxiliar;
    if (verificaFilaVazia == SUCESSO)
    {
        elementoAuxiliar.chave = CHAVE_INVALIDA;
        return (elementoAuxiliar);
    }
    else
    {
        elementoAuxiliar = fila->elemento[0];
        for (int i = 1; i < fila->tamanho; i++)
        {
            fila->elemento[i - 1] = fila->elemento[i];
        }
        fila->tamanho--;
        return (elementoAuxiliar);
    }
}

void primeiroDaFila(Fila* fila)
{
    printf("Próximo elemento da fila: \n");
    printf("Chave: %d\n", fila->elemento[0].chave);
    printf("Dado: %d\n", fila->elemento[0].dado);
}

voiid imprimeFila(Fila* fila)
{
    for(i = 0; i < fila->tamanho; i++)
    {
        printf("Elemento %d da fila: \n", i);
        printf("Chave: %d\n", fila->elemento[i].chave);
        printf("Dado: %d\n", fila->elemento[i].dado);
    }
}