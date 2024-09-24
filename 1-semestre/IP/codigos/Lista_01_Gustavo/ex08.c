#include <stdio.h>

int main(){
    int horas, minutos, segundos;
    scanf("%d", &horas);
    scanf("%d", &minutos);
    scanf("%d", &segundos);

    printf("O TEMPO EM SEGUNDOS E = %d\n", (horas * 3600 + minutos * 60 + segundos));
    return 0;
}