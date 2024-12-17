/**
 *  Contando Permutacoes de uma string (usando recurção)
 * 
 * P = n|/(n1! * n2! * ... * nk!)
 */
#include <stdio.h>
#include <string.h>
#define MAX 100

int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1);
    }
}

int permuta(char *str, int len)
{
    int total = fatorial(len);
    int n[256] = {0}; // numero de vezes de cada letra
    // quando colocado no fatorial(n = 0) multiplica-se por 1
    // 256 vem da tabela ASCII que possui 255 caracteres
    int i;
    for(i = 0; i < len; i++) //Acrescenta a cada ocorrência da letra na string
    {
        //printf("str[%d] = %c\n", i, str[i]);
        n[(unsigned char)str[i]]++; //Coloca a letra na posição dela quando "numerizada"
    }

    for(i = 0; i < 256; i++)
    {
       // printf("n[%d] = %d\n", i , n[i]);
    }
    
    for(i = 0; i < 256; i++)
    {
        total /= fatorial(n[i]); 
    }

    return total;
}


int main ()
{
    char entrada[MAX];
    fgets(entrada, sizeof(entrada), stdin);
    entrada[strcspn(entrada, "\n")] = '\0';

    int len = strlen(entrada);
    //printf("len = %d\n", len);

    int total = permuta(entrada, len);

    printf("%d\n", total);

}