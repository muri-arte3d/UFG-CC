/*Classificacao por cotas*/
#include <stdio.h>

int main()
{
    const float salmin = 937.00f;
    float rendab, rendapc; // renda familiar bruta
    int qpes;
    int esc; // 1 - particular, 2 - publica
    int etn; // 1 - preto, 2 - pardo, 3 - indigena, 4 - branco
    scanf("%f%d%d%d", &rendab, &qpes, &esc, &etn);

    rendapc = rendab / qpes;

    if (esc == 2) // pessoa de escola publica
    {
        if (rendapc <= salmin * 1.5) // renda per capita abaixo de 1,5 salarios minimos
        {
            if (etn == 4)
            {
                printf("ALUNO COTISTA (L1)\n");
            }
            else
            {
                printf("ALUNO COTISTA (L2)\n");
            }
        }
        else
        {
            if (etn == 4)
            {
                printf("ALUNO COTISTA (L3)\n");
            }
            else
            {
                printf("ALUNO COTISTA (L4)\n");
            }
        }
    }
    else
    {
        printf("ALUNO NAO COTISTA\n");
    }
    return 0;
}