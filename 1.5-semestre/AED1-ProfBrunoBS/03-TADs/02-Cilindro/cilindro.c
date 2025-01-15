#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cilindro.h"

struct cilindro
{
    float raio;
    float altura;
};

Cilindro* inic_cilindro(float raio, float altura)
{
    Cilindro* c = (Cilindro*) malloc(sizeof(Cilindro));
    if (c != NULL)
    {
        c->raio = raio;
        c->altura = altura;
    }
    return c;
}

void dest_cilindro(Cilindro* c)
{
    free(c);
}

float acessa_raio(Cilindro* c)
{
    return c->raio;
}

float acessa_altura(Cilindro* c)
{
    return c->altura;
}

float area_cilindro(Cilindro* c)
{
    float area_base = 3.1415 * pow(c->raio, 2);
    float area_comprimento = 2 * 3.1415 * c->raio * c->altura;
    return (2 * (area_base) + (area_comprimento));
}

float volume_cilindro(Cilindro* c)
{
    float area_base = 3.1415 * pow(c->raio, 2);
    return (area_base * c->altura);
}