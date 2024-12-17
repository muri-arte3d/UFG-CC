#include <stdio.h>
#include <string.h>

int main()
{
    // Variaveis
    char senha[10] = "password\n\0";
    char leitura[20];

    // Lógica
    printf("Qual a sua senha?\n");
    fflush(stdin);
    fgets(leitura, sizeof(leitura), stdin);

    if (strcmp(senha, leitura))
    {
        printf("Senha invalida\n");
    }
    else
    {
        printf("Senha correta!\n");
    }
    printf("Senha: %s\n", senha);
    printf("Leitura: %s\n", leitura);

    return 0;
}