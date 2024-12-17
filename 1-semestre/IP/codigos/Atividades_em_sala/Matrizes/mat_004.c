/**
 * Faça um programa para ler o nome e a idade de N <= 10 pessoas
 * e imprima o nome da pessoa mais velha. O número N é fornecido
 * pelo usuário e cada pessoa tem o nome com no máximo 20
 * caracteres.
 */

#include <stdio.h>
#include <string.h>

#define MAXNOME 20
#define MAXPESS 10

void preenche_nomes(char matriz[MAXPESS][MAXNOME], int numPessoas)
{
    printf("Digite %d nomes:\n", numPessoas);
    int i, j;
    for (i = 0; i < numPessoas; i++)
    {
        fflush(stdin);
        fgets(matriz[i], sizeof(matriz[i]), stdin);
        matriz[i][strcspn(matriz[i], "\n")] = '\0';
    }
}

int main()
{
    int numPessoas;
    scanf("%d", &numPessoas);

    char nomePessoas[MAXPESS][MAXNOME];
    preenche_nomes(nomePessoas, numPessoas);
    printf("Nomes digitados:\n");
    int i;
    for ( i = 0; i < numPessoas; i++)
    {
        printf("%s\n", nomePessoas[i]);
    }
    
}