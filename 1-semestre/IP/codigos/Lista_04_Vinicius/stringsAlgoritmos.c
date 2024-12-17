#include <stdio.h>

void insertionSort(char *vet, int sizeVet)
{
    int i, j, k; // iteradores
    char chave;
    for (j = 1; j < sizeVet; j++)
    {

        for (k = 0; k < sizeVet; k++)
        {
            printf("%c", vet[k]);
        }
        printf("\n");
        chave = vet[j];
        i = j - 1;

        while (i >= 0 && vet[i] > chave)
        {

            vet[i + 1] = vet[i];
            i--;
            for (k = 0; k < sizeVet; k++)
            {
                printf("%c", vet[k]);
            }
            printf("\n");
        }
        vet[i + 1] = chave;
    }
    printf("Versao final da string:\n");
    for (k = 0; k < sizeVet; k++)
    {
        printf("%c", vet[k]);
    }
    printf("\n");
}

int main()
{

    char nome[50];
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);

    int tamanho = 0;
    while (nome[tamanho] != '\0')
    {
        tamanho++;
    }

    printf("tamanho = %d\n", tamanho);

    insertionSort(nome, tamanho);

    return 0;
}