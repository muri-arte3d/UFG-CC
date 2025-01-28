//pilha_parenteses.c

#include <stdio.h>
#include <stdlib.h>
#include "pilha_parenteses.h"

typedef struct elemento
{
    struct parenteses dados;
    struct elemento *prox;
} Elemento;

Pilha* cria_Pilha() //Cria o TOPO e faz apontar para NULL
{
    Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
    if (pi != NULL)
    {
        *pi = NULL;
    }
    return pi;
}

void libera_Pilha(Pilha* pi)
{
    if (pi != NULL) //Se pilha existe
    {
        Elemento* no; //Guarda endereço de um Elemento da pilha
        while((*pi) != NULL)//Enquanto elemento 1 não for nulo
        {
            no = (*pi); //Guarda o elemento 1 da pilha
            (*pi) = (*pi)->prox; //Faz o elemento 2 da pilha virar o 1
            free(no); //Libera o elemento 1
        }
        free(pi);//Libera a pilha
    }
}