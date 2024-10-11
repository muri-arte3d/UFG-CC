/************************************
 * Programa: Valor em Notas e Moedas
 * Nivel: +++
 * Autor: Murilo Bueno Julião Lemos
 * Data: 11/10/2024
 ***********************************/

#include <stdio.h>

/**
 * Converte notas em moedas
 * @param dinheiro valor inteiro a ser convertido em notas
 *      e moedas (entrada)
 * @param notas100 notas de 100 (saída)
 * @param notas50  notas de 50  (saída)
 * @param notas10  notas de 10  (saída)
 * @param moedas1  moedas de 1  (saída)
 */
void converteEmNotasMoedas( int dinheiro, int *notas100, 
                            int *notas50, int *notas10,
                            int *moedas1 );


int main()
{
    int dinheiro;
    int notas100, *pnotas100 = &notas100;
    int notas50, *pnotas50 = &notas50;
    int notas10, *pnotas10 = &notas10;
    int moedas1, *pmoedas1 = &moedas1;
    scanf("%d", &dinheiro);

    converteEmNotasMoedas(dinheiro, pnotas100, pnotas50,
                            pnotas10, pmoedas1);

    printf("NOTAS DE 100 = %d\n", notas100);
    printf("NOTAS DE 50 = %d\n", notas50);
    printf("NOTAS DE 10 = %d\n", notas10);
    printf("MOEDAS DE 1 = %d\n", moedas1);

    return 0;
}

void converteEmNotasMoedas( int dinheiro, int *notas100,
                            int *notas50, int *notas10,
                            int *moedas1 )
{
    int temp = 0;
    *notas100 = dinheiro /100;
    temp = dinheiro % 100;
    *notas50 = temp / 50;
    temp %= 50;
    *notas10 = temp / 10;
    *moedas1 = temp % 10;
}