#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{

    Pilha *p1 = criaPilhaVazia();
    if (inicializaPilhaVazia(p1))
    {
        printf("Pilha criada com sucesso!\n");
    }
    else
    {
        printf("Pilha não criada\n");
    }

    if (verificaPilhaVazia(p1))
    {
        printf("Pilha vazia!\n");
    }
    else
    {
        printf("Pilha não vazia!\n");
    }

    Elemento vetElementos[7];
    for (int i = 0; i < 7; i++)
    {
        vetElementos[i].chave = tamanhoPilha(p1) + i;
        vetElementos[i].dado = i * i;
    }
    printf("Tamanho da pilha: %d\n", tamanhoPilha(p1));
    // Ver vetor de elementos
    /*
    for (int i = 0; i < 7; i++)
    {
        printf("vetElementos[%d].chave = %d\n", i, vetElementos[i].chave);
        printf("vetElementos[%d].dado = %d\n", i, vetElementos[i].dado);
    }
    */
    for (int i = 0; i < 7; i++)
    {
        if (pushPilha(p1, vetElementos[i]) == SUCESSO)
        {
            printf("Elemento adicionado com sucesso a pilha\n");
            consultaTopoPilha(p1);
        }
        else
        {
            printf("Elemento nao adicionado\n");
        }
        printf("Tamanho da pilha: %d\n", tamanhoPilha(p1));
    }

    imprimePilha(p1);
    consultaTopoPilha(p1);

    liberaPilha(p1);
    return 0;
}