#include <stdio.h>

int main()
{
    int vet[100000];
    int tamanho;
    scanf("%d", &tamanho);

    int i;
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d ", &vet[i]);
    }

    int qtdbusca;
    scanf("%d", &qtdbusca);

    int j, k, flag = 0;
    for (j = 0; j < qtdbusca; j++)
    {
        int valor;
        scanf("%d", &valor);

        for (k = 0; k < tamanho; k++)
        {
            if (valor == vet[k])
            {
                flag = 1;
            }
        }
        if (flag == 1){
            printf("ACHEI\n");
        }
        else {
            printf("NAO ACHEI\n");
        }
        flag = 0;
    }

    return 0;
}