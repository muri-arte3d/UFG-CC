#include <stdio.h>

int main(){
    int n1, n2;
    float media;

    scanf("%d%d", &n1, &n2);

    media = (n1 + n2)/ 2.0;

    printf("%.3f\n", media);
    
    return 0;
}