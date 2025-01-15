#include <stdio.h>
#include <stdlib.h>
#include "cubo.h"

struct cubo
{
    float aresta;
};

Cubo* inicializacao(float aresta)
{
    Cubo *c = (Cubo *)malloc(sizeof(Cubo));
    if (c != NULL)
        c->aresta = aresta;
    return c;
}

void destroi(Cubo *c)
{
    free(c);
}

float acessa_dados(Cubo *c)
{
    return c->aresta;
}

float area_cubo(Cubo *c)
{
    return (6 * pow(c->aresta, 2));
}

float volume_cubo(Cubo *c)
{
    return (pow(c->aresta, 3));
}