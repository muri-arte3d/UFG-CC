/*Classificação do Aço (+++)*/
#include <stdio.h>

int main()
{
    int cc;                     // Conteúdo do carbono
    int dr;                     // Dureza Rockwell
    int rt;                     // Resistência à tração
    int gdureza;                // Grau de dureza
    int p1 = 0, p2 = 0, p3 = 0; // Passabilidade nos graus (1 - passou, 0 - ñ passou)

    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);

    if (cc < 7) // Teste 01
    {
        p1 = 1;
    }
    if (dr > 50) // Teste 02
    {
        p2 = 1;
    }
    if (rt > 80000) // Teste 03
    {
        p3 = 1;
    }

    // Classificação de dureza
    if (p1 == 1 && p2 == 1 && p3 == 1)
    {
        gdureza = 10;
    }
    else if (p1 == 1 && p2 == 1)
    {
        gdureza = 9;
    }
    else if (p1 == 1)
    {
        gdureza = 8;
    }
    else
    {
        gdureza = 7;
    }

    printf("ACO DE GRAU = %d\n", gdureza);

    return 0;
}