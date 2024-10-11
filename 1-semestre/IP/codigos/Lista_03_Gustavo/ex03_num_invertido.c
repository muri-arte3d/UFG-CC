/*Numero invertido usando ponteiros*/
#include <stdio.h>

/**
 * Função que separa digitos de numeros de 3 algarismos
 * @param num numero a ser invertido
 * Apesar do exercício pedir que retorne 3 valores, C
 *      não é uma linguagem que retorna múltiplos valores.
 *      Portanto, usarei ponteiros.
 */
void separaDigitos(int *num);

int main()
{
    int *p; // Guarda/Aponta para um endereço
    int num;
    scanf("%d", &num);

    p = &num;
    separaDigitos(p);

    printf("%d\n", *p);

    return 0;
}

void separaDigitos(int *num)
{
    int cent = *(num) / 100;
    int dez = (*(num) % 100) / 10;
    int unid = (*(num) % 10);

    *num = unid * 100 + dez * 10 + cent;
}