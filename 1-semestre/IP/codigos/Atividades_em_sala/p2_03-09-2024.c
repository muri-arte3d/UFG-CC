#include <stdio.h>

int main (){
    int num = 10;
    int num2 = 50;
    printf("Numero inteiro: %d \nNumero inteiro: %d\n", num, num2);// O \n siginifica quebra de linha

    double salario = 2000.00;
    printf("Salario: %.2lf\n", salario); //O padrão de apresentação de double são de 15 casas decimais

    float x1 = 2.2 * 2.2;
    printf("x1 = %.3f\n", x1); //O padrão de apresentação de float são 6 casas decimais
    return 0;
}