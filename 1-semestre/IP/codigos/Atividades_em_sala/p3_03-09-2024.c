#include <stdio.h>

int main(){
    int idade = -20;
    unsigned int v2 = -20; // Curiosamente ele roda e aparenta o número com sinal na saída
    printf("idade: %d\nv2: %d\n", idade, v2);

    char cod = 'a';
    printf("***********************\n");
    printf("Simbolo: %c, Valor: %d\n", cod, cod);
    /*ATENÇÃO AQUI
    O que faz o código ser imprimido como símbolo
    ou como valor, está dependendo do identificador
    que acompanha o % dentro do printf()*/
    printf("Simbolo: %c, Valor: 65\n", 65);
    printf("Teste com -65: %c\n", -65);
    
    printf("***********************\n");
    char cod2 = 130;//+ 65;
    printf("Cod2-Simbolo: %c, Cod2-Valor: %d\n", cod2, cod2);
    return 0;
}