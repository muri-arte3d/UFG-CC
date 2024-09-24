/*Converte várias temperaturas*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 0;
    while(i < n){
        double far;
        scanf("%lf", &far);
        double cel;
        cel = 5 * (far - 32) / 9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", far, cel);
        i++;
    }

    return 0;
}