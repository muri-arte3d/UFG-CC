/*Lucro de Mercadorias (+++)*/
/*Vários problemas para resolver essa questão*/
#include <stdio.h>

int main()
{
    unsigned long int cm; // codigo de mercadoria
    float pcompra;        // preço de compra da mercadoria
    float pvenda;         // preço de venda da mercadoria
    int nvenda;           // número de venda da mercadoria
    scanf("%d", &cm);
    printf("%d\n", '\n');

    while (1)
    {
        scanf("%d ", &cm);
        if(cm == '\n'){
            break;
        }
        scanf("%f %f %f", &pcompra, &pvenda, &nvenda);
    }

    return 0;
}