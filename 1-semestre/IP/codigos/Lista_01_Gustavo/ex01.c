#include <stdio.h>

int main(){
    //leitura das entradas
    double salario, kw;
    double valor_kw;
    scanf("%lf%lf", &salario, &kw);
    valor_kw = salario * 0.7 /100;
    printf("Custo por kW: R$ %.2lf\n", valor_kw);
    printf("Custo do consumo: R$ %.2lf\n", valor_kw * kw);
    printf("Custo com desconto: R$ %.2lf\n", valor_kw * kw * 0.9);
    return 0;
}