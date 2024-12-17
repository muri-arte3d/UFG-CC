/******************************************************************
 * Programa: Vetores Ordenados (++)
 * 
 * Leia pares de pontos em R4
 * Calcula a norma
 * Imprima em ordem crescente
 * 
 * IMPORTANTE: Usar struct para definir os pontos.
 * 
 * Entrada 01: qtd de pontos (int) 2 <= qtdpontos <= 1000
 * Entrada 02: u x y z (double) -1000 <= u, x, y, z <= 1000
 * 
 * Saída 02: "Vetor: (u, x, y, z) Norma: norma"
 *****************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Definicao de ponto em R4
typedef struct
{
    double u, x, y, z, norma;
}
Ponto;

double calcula_norma(Ponto ponto);
void ordena_norma(Ponto *lista, int qtd);

int main()
{
    // Variaveis
    int qtdpontos;
    Ponto *listaP = malloc(qtdpontos * sizeof(Ponto));
    
    // Condicao de saida do codigo por erro
    if (listaP == NULL)
    {
        return 1;
    }

    // Lê a quantidade de pontos
    //printf("Quantidade de pontos em R4: ");
    scanf("%d", &qtdpontos);
    if(!(qtdpontos >= 2 && qtdpontos <= 1000))
    {
        printf("Quantidade de pontos inválidos!\n");
        return 1;
    }

    // Lê a todos os pontos
    int i;
    for(i = 0; i < qtdpontos; i++)
    {
        //printf("Ponto %d: u, x, y, z \n", i);
        scanf("%lf %lf %lf %lf", &listaP[i].u, &listaP[i].x, &listaP[i].y, &listaP[i].z);
        //printf("%.2lf %.2lf %.2lf %.2lf", listaP[i].u, listaP[i].x, listaP[i].y, listaP[i].z);
    }

    // Calcula a norma da lista
    for(i = 0; i < qtdpontos; i++)
    {
        listaP[i].norma = calcula_norma(listaP[i]);
        //printf("Norma de %d: %.2lf\n", i, listaP[i].norma);
    }

    ordena_norma(listaP, qtdpontos);

    // Printa os vetores
    for (i = 0; i < qtdpontos; i++)
    {
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", 
        listaP[i].u, listaP[i].x, listaP[i].y, listaP[i].z, listaP[i].norma);
    }

    free(listaP);
    return 0;
}

double calcula_norma(Ponto ponto)
{
    double somaquad = ponto.u * ponto.u + ponto.x * ponto.x + ponto.y * ponto.y + ponto.z * ponto.z;
    ponto.norma = sqrt(somaquad);
    return ponto.norma;
}

void ordena_norma(Ponto *lista, int qtd)
{
    int i, j;
    Ponto temp;
    for (i = 0; i < qtd; i++)
    {
        for (j = i + 1; j < qtd; j++)
        {
            if(lista[i].norma > lista[j].norma)
            {
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}