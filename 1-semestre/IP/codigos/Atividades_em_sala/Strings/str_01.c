#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin); // Lendo o \n como número e os espaços a mais (CUIDADO!)

    printf("Tamanho de str: %d\n", strlen(str) - 1);

    return 0;
}