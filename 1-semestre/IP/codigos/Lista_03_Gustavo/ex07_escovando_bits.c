/**
 * Escovando bits
 * Nível +++
 * Murilo Bueno Julião Lemos
 * 09-10-2024
 */
#include <stdio.h>

/**
 * Imprime os bits dos n bytes endereçados por end_byte.
 * @param end_byte endereço do primeiro byte a ser impresso
 * @param quantidade de bytes a serem impressos
 */
void print_bytes(const void *end_byte, int n);

/**
 * Imprime bloco de byte em bits
 * @param byte bloco de 1 byte
 */
void print_bloco_byte(unsigned char byte);

int main()
{
    double n;
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    float f;
    double d;
    scanf("%lf", &n);

    uc = (unsigned char)n;
    us = (unsigned short)n;
    ui = (unsigned int)n;
    f = (float)n;
    d = (double)n;

    print_bytes(&uc, sizeof(unsigned char));
    printf("\n");
    print_bytes(&us, sizeof(unsigned short));
    printf("\n");
    print_bytes(&ui, sizeof(unsigned int));
    printf("\n");
    print_bytes(&f, sizeof(float));
    printf("\n");
    print_bytes(&d, sizeof(double));
    printf("\n");

    return 0;
}

void print_bytes(const void *end_byte, int nbytes)
{
    // Usa-se char pois o mesmo é de tamanho de 1 byte
    const char *pc = end_byte;
    int i;
    for (i = 0; i < nbytes; i++) // Percorre todos os bytes
    {
        // printa o bloco
        print_bloco_byte(*pc);
        printf(" ");
        // anda 1 byte
        pc++;
    }
}

void print_bloco_byte(unsigned char byte)
{
    int pot2 = 128;
    while (pot2 > 0)
    {
        /**
         * Printa o algarismo em binário usando divisão
         * de potencias de 2.
         * Divide por 128 - 64 - 32 - 16 - 8 - 4 - 2 - 1
        */
        printf("%d", byte / pot2);
        byte = byte % pot2;
        pot2 /= 2;
    }
}
/**
 * Exemplo da func print_bloco_byte
 * byte = 127
 * pot2 = 128
 * *******Entra loop*********
 * printa 127/128 = 0
 * byte = 127 % 128 = 127
 * pot2 = 128 / 2 = 64
 * ***** 64 > 0
 * printa 127 / 64 = 1
 * byte = 127 % 64 = 63
 * pot2 = 64 / 2 = 32
 * ***** 32 > 0
 * printa 63 / 32 = 1
 * byte = 63 % 32 = 31
 * pot2 = 32 / 2 = 16
 * ***** 16 > 0
 * printa 31 / 16 = 1
 * byte = 31 % 16 = 15
 * pot2 = 16 / 2 = 8
 * ***** 8 > 0
 * printa 15 / 8 = 1
 * byte = 15 % 8 = 7
 * pot2 = 8 / 2 = 4
 * ***** 4 > 0
 * printa 7 / 4 = 1
 * byte 7 % 4 = 3
 * pot2 = 4 / 2 = 2
 * ***** 2 > 0
 * printa 3 / 2 = 1
 * byte 3 % 2 = 1
 * pot2 = 2 / 2 = 1
 * ***** 1 > 0
 * printa 1 / 1 = 1
 * byte = 1 % 1 = 0
 * pot2 = 1 / 2 = 0
 * ***** 0 > 0 (Falso - Fim do Loop)
 * Mensagem printada: 01111111
 */