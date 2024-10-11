/*Exemplos pessoais para lembrar de ponteiros*/
#include <stdio.h>

int main(){
    int *p;
    int num = 5;

    printf("p: %p\n", p); //printa valor lixo de p
    printf("*p: %p\n", *p); //Mostra conteúdo para endereço lixo apontado
    printf("&p: %p\n", &p); //Mostra endereço de p

    p = &num; //Guarda/Aponta enderço de num

    printf("p: %p\n", p); //Printa valor de p
    printf("*p: %p\n", *p);//Printa conteúdo da variável que p aponta
    printf("&p: %p\n", &p);//Printa endereço de p
    

    return 0;
}

/*
int *p;  é a declaração do ponteiro
Após isso p significa o valor de p, que é um endereço
*p nada mais é do que tem dentro do endereço que p aponta
&p é apenas o endereço do próprio p
*/