/*Calculo alternativo da raiz quadrada*/
#include <stdio.h>
#include <math.h>

int main(){
    double ratual, erroatual = 0;
    double n, erro;
    scanf("%lf", &n);
    scanf("%lf", &erro);

    ratual = 1;
    while(fabs(n - ratual * ratual) > erro){
        ratual = (ratual + (n / ratual)) / 2;
        erroatual = fabs(n - ratual * ratual);
        printf("r: %.9lf, err: %.9f\n", ratual, erroatual);
    }

    return 0;
}