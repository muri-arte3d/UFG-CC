/**
 * Combinando Cedulas para um Valor Exato
 * 
 * 
 */

#include <stdio.h>

typedef struct
{
    int tipo;
    int qtd;
}
Cedula;


int troco(Cedula *cedula, int n, int v)
{
    int total = 0; // acumulador da função
    // n é o numero de cedulas (aqui usado para acessar o valor correto do vetor Cedulas)
    //v é o valor que ainda falta para o troco
    if( v == 0) // ou seja, não falta nada para o troco
    {
        return 1;
    }
    else if (v < 0 || n == 0) //passou do troco ou acessando cedula[-1]
    {
        return 0;
    }
    else
    {
        int i;
        for (i = 0; i <= cedula[n-1].qtd; i++) //testtando com numero de cedulas disponiveis
        {
            if(i * cedula[n-1].tipo <= v) //Se falta troco ou deu exato
            {
                total += troco(cedula, n-1, v - cedula[n-1].tipo * i); // Passa vetor, chama nota menor, resto do troco
            }
        }
    }
    return total;
}

int main()
{
    int v; // 0 a 100 - valor a ser retirado
    int n; // 0 a 10 - numero de tipos de cedulas
    Cedula cedulas[100]; // numero de cedulas
    int acumulador = 0;
    int *pacumulador;
    pacumulador = &acumulador;

    // Entradas
    scanf("%d", &v);
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &cedulas[i].tipo);
    } 
    for (i = 0; i < n; i++)
    {
        scanf("%d", &cedulas[i].qtd);
    }
    

    // Processo
    int saida = troco(cedulas, n, v);

    //Saida
    printf("%d\n", saida);

    return 0;
}