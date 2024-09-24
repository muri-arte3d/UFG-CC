/*Decomposicao em fatores primos (+++++)*/
#include <stdio.h>

int main()
{
    int num;
    int multiplicador = 1;
    int flagprimo = 1; // 0 - nao primo, 1 - primo

    do
    {
        scanf("%d", &num);
        if (num < 1)
        {
            printf("Fatoracao nao e possivel para o numero %d!\n", num);
        }
    } while (num < 1);

    printf("%d =", num);

    int atualNum = num;
    int atualprimo = 2;
    while (multiplicador != num) // testa o multiplicador
    {

        while (atualNum % atualprimo == 0) // testa se pode usar o mesmo primo
        {
            multiplicador *= atualprimo;
            atualNum /= atualprimo;
            if (multiplicador == num)
            {
                printf(" %d\n", atualprimo);
            }
            else
            {
                printf(" %d x", atualprimo);
            }
        }
        // proximo primo
        int i;
        for (i = atualprimo + 1; i <= num; i++)
        {
            // printf("Dentro do for de i\n");
            flagprimo = 1;
            int j;
            for (j = 2; j < i; j++)
            {
                // printf("i: %d, j: %d\n", i, j);
                if (i % j == 0) // nao eh primo
                {
                    // printf("nao eh primo\n");
                    flagprimo = 0;
                    break;
                }
                if (flagprimo != 0)
                {
                    atualprimo = i;
                }
                // printf("fim do for de j\n");
            }
            if (flagprimo != 0)
            {
                break;
            }
        }
        //printf("\nAtual primo: %d\n", atualprimo);
    }

    return 0;
}