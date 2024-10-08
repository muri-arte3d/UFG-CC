/*Lucro de Mercadorias (+++)*/
/*Vários problemas para resolver essa questão*/
#include <stdio.h>

int main()
{
    int count = 0;
    unsigned long int cm; // codigo de mercadoria
    double pcompra;       // preço de compra da mercadoria
    double pvenda;        // preço de venda da mercadoria
    int nvenda;           // número de venda da mercadoria

    int l1 = 0, l2 = 0, l3 = 0, cmaiorl = 0, cmvend = 0;
    double lucro, maiorlucro = 0, ctotal = 0, vtotal = 0, ltotal = 0;
    int maisvendida = 0;

    while (scanf("%d ", &cm) != EOF)
    {
        //scanf("%d ", &cm);
        scanf("%lf %lf %d", &pcompra, &pvenda, &nvenda);
        //printf("numero de vendas: %d\n", nvenda);

        // Classifica mercadoria por lucro
        lucro = (pvenda - pcompra) / pcompra;
        if (lucro < 0.1)
        {
            l1++;
        }
        else if (lucro <= 0.2)
        {
            l2++;
        }
        else
        {
            l3++;
        }
        // Código de mercadoria de maior lucro
        if (lucro > maiorlucro)
        {
            cmaiorl = cm;
            maiorlucro = lucro;
        }
        // Código de mercadoria mais vendida
        if (nvenda > maisvendida)
        {
            cmvend = cm;
            maisvendida = nvenda;
            //printf("A mais vendida: %d\n", maisvendida);
        }
        ctotal += nvenda * pcompra;
        vtotal += nvenda * pvenda;
        //ltotal += lucro;
        //count++;
        //printf("lucro total: %.2lf\n", ltotal);

       // printf("flag: ");
       // scanf("%d", &flag);
    }
    ltotal = (vtotal - ctotal) * 100 / ctotal;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", l1);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", l2);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", l3);
    printf("Codigo da mercadoria que gerou maior lucro: %d\n", cmaiorl);
    printf("Codigo da mercadoria mais vendida: %d\n", cmvend);
    printf("Valor total de compras: %.2lf, valor total de vendas: %.2lf e percentual de lucro total: %.2lf%%\n", ctotal, vtotal, ltotal);
    return 0;
}