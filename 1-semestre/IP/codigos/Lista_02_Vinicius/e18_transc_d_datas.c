/*Transcricao de datas (++)*/
#include <stdio.h>

int main()
{
    int data;
    scanf("%d", &data);

    int dia = data / 1000000;
    int mes = data / 10000 - dia * 100;
    int ano = data - dia * 1000000 - mes * 10000;

    if ((dia < 1 || dia > 31) || mes < 01 || mes > 12 || ano < 0)
    {
        printf("Data invalida!\n");
    }
    else
    {
        switch (mes)
        {
        case 1:
            printf("%d de janeiro de %d\n", dia, ano);
            break;
        case 2:
            if (dia > 28)
            {
                printf("Data invalida!");
            }
            else
            {
                printf("%d de fevereiro de %d\n", dia, ano);
            }
            break;
        case 3:
            printf("%d de março de %d\n", dia, ano);
            break;

        case 4:
            if (dia == 31)
            {
                printf("Data invalida!");
            }
            else
            {
                printf("%d de abril de %d\n", dia, ano);
            }
            break;

        case 5:
            printf("%d de maio de %d\n", dia, ano);

            break;

        case 6:

            if (dia == 31)
            {
                printf("Data invalida!");
            }
            else
            {
                printf("%d de junho de %d\n", dia, ano);
            }
            break;

        case 7:
            printf("%d de julho de %d\n", dia, ano);

            break;

        case 8:
            printf("%d de agosto de %d\n", dia, ano);

            break;

        case 9:

            if (dia == 31)
            {
                printf("Data invalida!");
            }
            else
            {
                printf("%d de setembro de %d\n", dia, ano);
            }
            break;

        case 10:
            printf("%d de outubro de %d\n", dia, ano);

            break;

        case 11:

            if (dia == 31)
            {
                printf("Data invalida!");
            }
            else
            {
                printf("%d de novembro de %d\n", dia, ano);
            }
            break;

        case 12:
            printf("%d de dezembro de %d\n", dia, ano);

            break;

        default:
            break;
        }
    }

    return 0;
}