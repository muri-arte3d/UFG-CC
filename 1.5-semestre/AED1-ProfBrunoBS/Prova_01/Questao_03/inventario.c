// inventario.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventario.h"

struct inventario
{
    Item itens[MAX_ITENS];
    unsigned int qtd[MAX_ITENS];
    unsigned int pesoMaximo;
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

int inicializaInventario(Inventario *inventario, int pesoMaximo)
{
    for (int i = 0; i < MAX_ITENS; i++)
    {
        inventario->itens[i].peso = SLOT_VAZIO;
        inventario->qtd[i] = SLOT_VAZIO;
    }
    inventario->pesoAtual = BAG_VAZIA;
    inventario->pesoMaximo = pesoMaximo;

    return SUCESSO;
}

int inventarioVazio(Inventario *inventario)
{
    if (inventario->pesoMaximo == BAG_VAZIA)
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
        if (inventario->qtd[i] == SLOT_VAZIO)
        {
            return FALHA;
        }
    }
    return SUCESSO;
}

int inventarioPesoMAX(Inventario *inventario)
{
    if (inventario->pesoAtual >= inventario->pesoMaximo)
    {
        return SUCESSO;
    }
    else
    {
        return FALHA;
    }
}
//***************************************************************

// Funções da questão ******************************************
int addItem(Inventario *inventario, Item item, int quantidade)
{
    if (inventarioCheio(inventario) == SUCESSO) // Inventário com MAX de itens
    {
        printf("InvetarioCheio\n");
        return FALHA;
    }
    else if (inventarioPesoMAX(inventario) == SUCESSO) // Inventário no peso MAX
    {
        printf("Inventario já no peso máximo!\n");
        return FALHA;
    }
    else // Inventário com SLOT vazio
    {
        //*Log*/ printf("Inventario com slot vazio\n");

        // Testar se vai passar do peso
        if (inventario->pesoAtual + item.peso * quantidade > inventario->pesoMaximo)
        {
            printf("Inventario passara do peso máximo colocando %d %s!\n", quantidade, item.nome);
            return FALHA;
        }

        for (int i = 0; i < MAX_ITENS; i++) // Já existe o item?
        {
            //*Log*/printf("item num: %d\n", i);

            if (procuraItem(inventario, item.nome) != SLOT_VAZIO) // Item existe
            {
                /*Debbug*/ printf("Item %s existe\n", item.nome);

                int pesoSomado = inventario->pesoAtual + quantidade * inventario->itens[i].peso;
                if (pesoSomado > inventario->pesoMaximo)
                {
                    printf("Voce esta tentando adicionar peso demais\n");
                    return FALHA;
                }
                else
                {
                    inventario->qtd[i] += quantidade;
                    inventario->pesoAtual += quantidade * inventario->itens[i].peso;
                    return SUCESSO;
                }
            }
        }

        for (int i = 0; i < MAX_ITENS; i++) // Item não existe
        {
            //*Debbug*/printf("Item %s não exite na bag\n", item.nome);

            if (inventario->qtd[i] == SLOT_VAZIO)
            {
                inventario->itens[i] = item;
                inventario->qtd[i] += quantidade;
                inventario->pesoAtual += inventario->itens[i].peso * quantidade;
                return SUCESSO;
            }
        }
    }
}

int removeItem(Inventario *inventario, char nome[], int qtd)
{
    // Testar se o item existe
    for (int i = 0; i < MAX_ITENS; i++)
    {
        int comparaNome = strcmp(inventario->itens[i].nome, nome);
        if (comparaNome == 0) // nomes iguais -- item existe
        {
            if ((inventario->qtd[i] - qtd) <= 0 || qtd == 0)
            {
                printf("Todos os %s foram removidos!\n", inventario->itens[i].nome);
                inventario->pesoAtual -= inventario->itens[i].peso * inventario->qtd[i];
                strcpy(inventario->itens[i].nome, ""); 
                inventario->qtd[i] = SLOT_VAZIO;
                return SUCESSO;
            }
            else
            {
                printf("Foram removidos %d %s(s) do seu inventario\n", qtd, inventario->itens[i].nome);
                inventario->pesoAtual -= inventario->itens[i].peso * qtd;
                inventario->qtd[i] -= qtd;
                return SUCESSO;
            }
        }
    }
    printf("Não existe item %s no seu inventario\n", nome);
    return FALHA;
}

// Função perfeita para refatorar o código acima (vou fazer?)
int procuraItem(Inventario *inventario, char nome[])
{
    // Log de procura item
    ///*Log*/printf("-- Entrei na função procura item:\n");

    for (int i = 0; i < MAX_ITENS; i++)
    {
        //*Log*/printf("Nome do item a procurar: %s\n", nome);
        //*Log*/printf("Nome do item no slot %d: %s\n", i, inventario->itens[i].nome);
        int comparaNome = strcmp(nome, inventario->itens[i].nome);
        if (comparaNome == 0) // item existe
        {
            return inventario->qtd[i];
        }
    }
    return SLOT_VAZIO;
}

int pesoTotal(Inventario *inventario)
{
    return inventario->pesoAtual;
}

void imprimeInventario(Inventario *inventario)
{
    for (int i = 0; i < MAX_ITENS; i++)
    {
        printf("--- SLOT %d ---\n", i);
        printf("Nome: %s\n", inventario->itens[i].nome);
        printf("Qtd: %d\n", inventario->qtd[i]);
    }
}
