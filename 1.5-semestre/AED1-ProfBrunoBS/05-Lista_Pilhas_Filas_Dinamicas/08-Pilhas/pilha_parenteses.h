//pilha_parenteses.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FALHA -1

struct parenteses
{
    const int simbolo = 1;
};

typedef struct elemento* Pilha;

Pilha* cria_Pilha();
void libera_Pilha(Pilha* pi);
int inserir_Pilha(Pilha* pi);
int remove_Pilha(Pilha* pi);
int pilha_vazia(Pilha* pi);
