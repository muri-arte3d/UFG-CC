/*Inverte numero de 3 digitos*/
#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int c, d, u;
    c = (num / 100);
    d = ((num - c * 100) / 10);
    u = num - c * 100 - d * 10;

    printf("%d%d%d\n", u, d, c);

    return 0;
}