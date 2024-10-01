/*Conta de Água (+)*/
#include <stdio.h>

int main()
{
    int conta;
    float consumo;
    char tipo;
    scanf("%d %f %c", &conta, &consumo, &tipo);

    printf("CONTA = %d\n", conta);
    float pagamento;
    if (tipo == 'R')
    {
        pagamento = 5 + 0.05 * consumo;
    }
    else if (tipo == 'C')
    {
        pagamento = 500;

        if (consumo > 80)
        {
            pagamento += 0.25 * (consumo - 80);
        }
    }
    else if (tipo == 'I')
    {
        pagamento = 800;
        if (consumo > 100)
        {
            pagamento += 0.04 * (consumo - 100);
        }
    }

    printf("VALOR DA CONTA = %.2f\n", pagamento);
    return 0;
}