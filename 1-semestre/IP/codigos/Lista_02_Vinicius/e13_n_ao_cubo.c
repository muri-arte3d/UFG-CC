/*N ao cubo*/
#include <stdio.h>

int main(){
    int somador = 1;
    int n;
    scanf("%d", &n);

    int i;
    for(i = 1; i <= n; i++){
        printf("%d*%d*%d = ", i,i,i);
        int j;
        for(j = 1; j <= i; j++)
        {
            if(j != i){
                printf("%d+", somador);
            }
            else{
                printf("%d\n", somador);
            }
            somador += 2;
        }
    }

    return 0;
}