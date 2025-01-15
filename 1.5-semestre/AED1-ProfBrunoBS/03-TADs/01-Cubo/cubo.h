/**
 * cubo.h
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct cubo Cubo;

//Cria cubo e destroi cubo
Cubo* inicializacao(float aresta);
void destroi(Cubo *c);

//Tamanho da aresta
float acessa_dados(Cubo *c);

//Area total
float area_cubo(Cubo *c);

//Volume cubo
float volume_cubo(Cubo *c);