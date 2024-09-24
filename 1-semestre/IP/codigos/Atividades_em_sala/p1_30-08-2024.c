#include <stdio.h>

int main(){
    double media;
    int id1, id2, id3;

    printf("Digite suas notas:\n");
    printf("N1: ");
    scanf("%d", &id1);
    printf("N2: ");
    scanf("%d", &id2);
    printf("N3: ");
    scanf("%d", &id3);
    media = (id1 + id2 + id3)/3.0;

    printf("Media: %.2lf", media);

    return 0;
}