#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "inventario.h"

int main()
{
    Inventario *bag = criaInventario();
    if (inicializaInventario(bag, 100))
    {
        printf("Bag inicializada com sucesso!\n");
    }
    else
    {
        printf("Erro ao inicializar a bag\n");
        return 1;
    }

    // Leitura dos
    Item itens[4];

    // Item 0
    printf("Lendo item 0\n");
    strcpy(itens[0].nome, "Potion");
    itens[0].peso = 2;

    // Item 1
    printf("Lendo item 1\n");
    strcpy(itens[1].nome, "Mana");
    itens[1].peso = 2;

    // Item 2
    printf("Lendo item 2\n");
    strcpy(itens[2].nome, "Sword");
    itens[2].peso = 6;

    // Item 3
    printf("Lendo item 3\n");
    strcpy(itens[3].nome, "Creatina");
    itens[3].peso = 5;

    printf("O peso atual da sua bag eh de %d\n", pesoTotal(bag));

    printf("Adicionando alguns itens: ...\n");
    for (int i = 0; i < 4; i++)
    {
        int result = addItem(bag, itens[i], 10);
        if (result == SUCESSO)
        {
            printf("Item %s adicionado com sucesso\n", itens[i].nome);
        }
        else
        {
            printf("Nao foi possivel adicionar o item %s\n", itens[i].nome);
        }
        printf("FUNCAO PESO TOTAL:  O peso atual da sua bag eh de %d\n", pesoTotal(bag));
        printf("\n");
    }
    removeItem(bag, "Sword", 0);
    removeItem(bag, "Mana", 2);

    printf("FUNCAO PROCURA ITEM: Voce possui %d de %s na bag\n", procuraItem(bag, itens[3].nome), itens[3].nome);

    printf("FUNCAO PESO TOTAL: O peso atual da sua bag eh de %d\n", pesoTotal(bag));

    printf("\n*********BAG ATUALMENTE*********\n");
    imprimeInventario(bag);
    printf("********************************\n");

    return 0;
}