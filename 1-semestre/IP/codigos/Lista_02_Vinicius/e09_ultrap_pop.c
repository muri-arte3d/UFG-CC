/*Ultrapassagem populacional (+)*/
#include <stdio.h>

int main(){
    int popA, popB;
    scanf("%d", &popA);
    scanf("%d", &popB);

    int anos = 0;

    while(popA < popB){
        popA += (3.0/100) * popA;
        popB += (1.5/100) * popB;
        anos++;
    }

    printf("ANOS = %d\n", anos);
    return 0;
}