/*Ordena 3 numeros na ordem abc desejada de entrada*/
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d\n", &a, &b, &c);
    char p1, p2, p3;
    scanf("%c%c%c", &p1, &p2, &p3);

    /*  printf("p1: %c\n", p1);
        printf("p2: %c\n", p2);
        printf("p3: %c\n", p3); */

    int maior, meio, menor;
    maior = a;
    meio = b;
    menor = c;

    if (b > a)
    {
        maior = b;
        meio = a;
        if (c > b)
        {
            maior = c;
            meio = b;
            menor = a;
        }
        else
        {
            if (c > a)
            {
                meio = c;
                menor = a;
            }
        }
    }
    else if (c > a)
    {
        maior = c;
        meio = a;
        menor = b;
    }
    else
    {
        if (c > b)
        {
            meio = c;
            menor = b;
        }
    }

    /*  printf("Maior: %d\n", maior);
        printf("Meio: %d\n", meio);
        printf("Menor: %d\n", menor); */

    if (p1 == 'A')
    {
        if (p2 == 'B') // A B C
        {
            printf("%d %d %d\n", menor, meio, maior);
        }
        else // A C B
        {
            printf("%d %d %d\n", menor, maior, meio);
        }
    }
    else if (p1 == 'B')
    {
        if (p2 == 'A') // B A C
        {
            printf("%d %d %d\n", meio, menor, maior);
        }
        else // B C A
        {
            printf("%d %d %d\n", meio, maior, menor);
        }
    }
    else
    {
        if (p2 == 'A') // C A B
        {
            printf("%d %d %d\n", maior, menor, meio);
        }
        else // C B A
        {
            printf("%d %d %d\n", maior, meio, menor);
        }
    }

    return 0;
}