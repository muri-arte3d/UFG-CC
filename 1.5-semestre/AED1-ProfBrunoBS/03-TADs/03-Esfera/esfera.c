#include <stdlib.h>
#include "esfera.h"

struct esfera
{
    float raio;
};

Esfera* inic_esfera(float raio)
{
    Esfera* e = (Esfera*) malloc(sizeof(Esfera));
    if (e != NULL)
    {
        e->raio = raio;
    }

    return e;
}

void dest_esfera(Esfera* e)
{
    free(e);
}

float acessa_raio(Esfera* e)
{
    return e->raio;
}

float area_esfera(Esfera* e)
{
    return (4 * 3.1416 * e->raio * e->raio);
}

float volume_esfera(Esfera* e)
{
    return((4.0f/3) * 3.1416 * e->raio * e->raio * e->raio);
}