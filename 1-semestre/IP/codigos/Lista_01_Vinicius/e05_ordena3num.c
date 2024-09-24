/*Ordena 3 floats*/
#include <stdio.h>

int main(){
    float a, b, c;
    float maior, meio, menor;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    maior = a;
    meio = b;
    menor = c;

    if (b > a){
        maior = b;
        meio = a;
        if(c > b) {
            maior = c;
            meio = b;
            menor = a;
        } else{
            if(c > a){
                meio = c;
                menor = a;
            }
        }
    } else if(c > a){
        maior = c;
        meio = a;
        menor = b;
    } else {
        if ( c > b){
            meio = c;
            menor = b;
        }
    }


    printf("%.2f, %.2f, %.2f\n", menor, meio, maior);

    return 0;
}
