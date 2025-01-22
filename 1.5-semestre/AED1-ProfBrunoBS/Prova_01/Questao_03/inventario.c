// inventario.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventario.h"

struct item
{
    char nome[MAX_NOME_ITEM];
    unsigned int peso;
};

struct inventario
{
    Item itens[MAX_ITENS];
    unsigned int qtd[MAX_ITENS];
    unsigned int pesoTotal;
    unsigned int pesoAtual;
};

// Funções de suporte ****************************************
Inventario *criaInventario()
{
    Inventario *inventario = (Inventario *)malloc(sizeof(Inventario));
    if (inventario != NULL)
    {
        return inventario;
    }
}

int inicializaInventario(Inventario *inventario, int pesoTotal)
{
    for (int i = 0; i < MAX_ITENS; i++)
    {
        inventario->itens[i].peso = SLOT_VAZIO;
        inventario->qtd[i] = SLOT_VAZIO;
    }
    inventario->pesoAtual = BAG_VAZIA;
    inventario->pesoTotal = pesoTotal;

    return SUCESSO;
}

int inventarioVazio(Inventario *inventario)
{
    if (inventario->pesoTotal == BAG_VAZIA)
    {
        return SUCESSO;
    }
    else
    {
        return FALHA;
    }
}

int inventarioCheio(Inventario *inventario)
{
    for (int i = 0; i < MAX_ITENS; i++)
    {
        if (inventario->qtd[i] != SLOT_VAZIO)
        {
            return FALHA;
        }
    }
    return SUCESSO;
}

int inventraioPesoMAX(Inventario *inventario)
{
    if(inventario->pesoAtual >= inventario->pesoTotal )
    {
        return FALHA;
    }
    return SUCESSO;
}
//***************************************************************

// Funções da questão ******************************************
int addItem(Inventario *inventario, Item item, int quantidade)
{
    if (inventarioCheio(inventario) == SUCESSO)
    {
        printf("InvetarioCheio\n");
        return FALHA;
    }
    if (inventarioPesoMAX(inventario) == SUCESSO)
    {
        printf("Inventario passará do peso máximo!\n");
        return FALHA;
    }


    for (int i = 0; i < MAX_ITENS; i++)
    {
        int comparaNome = strcmp(inventario->itens[i].nome, item.nome);
        if (comparaNome == 0) //nome iguais
        {
            for (int j = 0; j < quantidade; j++)
            {

            }
            
        }
    }
}