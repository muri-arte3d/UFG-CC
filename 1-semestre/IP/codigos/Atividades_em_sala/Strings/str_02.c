#include <stdio.h>
#include <string.h>

int main()
{
    //Variáveis
    char str01[50];
    char str02[50];

    //Leia duas strings
    printf("Digite a string 1: ");
    fgets(str01, sizeof(str01), stdin);

    printf("Digite a string 2: ");
    fgets(str02, sizeof(str02), stdin);

    if(strcmp(str01, str02))
    {
        printf("As strings sao diferentes\n");
    }
    else
    {
        printf("As strings sao iguais\n");
    }

    return 0;
}