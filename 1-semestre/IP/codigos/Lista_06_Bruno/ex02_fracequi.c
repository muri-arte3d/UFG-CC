/*************************************************************************************************************
 FraC'C5es Equivalentes (+)

 typedef struct{
     int num;
     int den;
     float id = (float)num / den;
 } Fracao;

 Fracao fracao = malloc(m * sizeof(fracao));

 Entrada: n (int) numero de testes MAX 30
 Entrada: m (int) numero de FraC'C5es MAX 50
 Entrada: scanf("%d/%d", &fracao[i].num, &fracao[i].den);

 int k;
 for(k = 0; k < n; k++)
 {
    printf("Caso  de teste %d\n", k);
    int feq = 0;
    int i, j;
    for(i = 0; i < m; i++)
    {
        for( j = i+1; j < m; j++)
        {
            if(fracao[i].id == fracao[j].id)
            {
                feq++;
                printf("%d/%d equivalente a %d/%d\n", fracao[i].num, fracao[i].den, fracao[j].num, fracao[j].den);
            }
        }
    }
    if (feq == 0)
    {
        printf("Nao ha fracoes equivalentes na sequencia\n");
    }
 }

*******************************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int num;
	int den;
	float id;;
}
Fracao;


int main()
{
	// Leitura do numero de testes
	int num_teste;
	scanf("%d", &num_teste);

	if (num_teste <= 30)
	{
		int i,l;
		for (l = 1; l <= num_teste; l++)
		{
			// Leitura do numero de fraC'C5es
			int num_fracoes;
			scanf("%d", &num_fracoes);

			if (num_fracoes <= 50)
			{
				// Declaracao e alocacao de memoria para fracoes
				Fracao *fracoes = malloc(num_fracoes * sizeof(Fracao));
				if(fracoes == NULL)
				{
					printf("Sem memoria\n");
					return 1;
				}

				// Leitura das fracoes
				for(i = 0; i < num_fracoes; i++)
				{
					scanf("%d/%d", &fracoes[i].num, &fracoes[i].den);
					fracoes[i].id = (float) fracoes[i].num / fracoes[i].den;
				}

				// Saidas
				printf("Caso  de teste %d\n", l);
				int feq = 0;
				int k, j;
				for(k = 0; k < num_fracoes; k++)
				{
					for( j = k + 1; j < num_fracoes; j++)
					{
						if(fracoes[k].id == fracoes[j].id)
						{
							feq++;
							printf("%d/%d equivalente a %d/%d\n", fracoes[k].num, fracoes[k].den, fracoes[j].num, fracoes[j].den);
						}
					}
				}
				if (feq == 0)
				{
					printf("Nao ha fracoes equivalentes na sequencia\n");
				}

				free(fracoes);

			}
		}

	}


	return 0;
}
