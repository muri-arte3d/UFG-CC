#include <stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if (n1 > 9 || n2 > 9 || n3 > 9){
        printf("DIGITO INVALIDO\n");
    } else{
        int temp1, temp2, temp3, res, quadrados;
        temp1 = n1 * 100;
        temp2 = n2 * 10;
        temp3 = n3 * 1;
        res = temp3 + temp2 + temp1;

        printf("%d, %d\n", res, res*res);
    }


    return 0;
}