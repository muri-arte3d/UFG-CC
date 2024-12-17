/*********************************************
 * MÉTODOS PARA LER UMA STRING EM LINGUAGEM C
 *********************************************/
/*
#include <stdio.h>

void usandoScanf();
void usandoScanfNumLim();
void usandoScanfCaracEspc();
void usandoScanfIgnoraBranco();

int main()
{
    usandoScanf();
    fflush(stdin);
    usandoScanfNumLim();
    fflush(stdin);
    usandoScanfCaracEspc();
    fflush(stdin);
    usandoScanfIgnoraBranco();
    fflush(stdin);

    return 0;
}

void usandoScanf()
{
    printf("\nUsando scanf\n");
    char nome[50];
    // Entrada "Maria da Silva"
    scanf("%s", nome);

    // Printa apenas Maria
    printf("Nome: %s\n", nome);
}

void usandoScanfNumLim()
{
    printf("\nUsando scanf e numero limitado\n");
    char nome2[50];
    // Entrada "Maria da Silva"
    scanf("%5s", nome2);

    // Printa apenas Maria
    printf("Nome: %s\n", nome2);
}

void usandoScanfCaracEspc()
{
    printf("\nUsando scanf ate caractere especifico\n");
    char nome3[50];
    // Entrada "Maria da Silva"
    scanf("%[^i]s", nome3);

    // Printa apenas Maria
    printf("Nome: %s\n", nome3);
}

 //Pesquisando mais a fundo essa última não Funciona
void usandoScanfIgnoraBranco()
{
    printf("\nUsando scanf e ignora espaco em branco\n");
    char nome4[50];
    // Entrada "Maria da Silva"
    scanf(" %s", nome4);

    // Printa apenas Maria
    printf("Nome: %s\n", nome4);
}
*/
//****************************PARTE 2********************************//
#include <stdio.h>

/**
 * Usando gets() -> Lê toda linha de entrada até encontrar nova linha
 * Foi descontinuada por falta de segurança, falta de controle no
 * limite de caracteres de entrada.
 * EXEMPLO:
 *      char nome[50];
 *      gets(nome);
 *
 * Usando fgets() -> Igual o gets(). Pode limitar os caracteres de
 * entrada.
 * EXEMPLO:
 *      char nome[50];
 *      fgets(nome, sizeof(nome), stdin);
 *
 * Usando getline() -> Não padrão da ling. C. Não tem limitação de
 * tamanho pré-definido. Aloca dinamicamente o buffer necessário.
 * EXEMPLO:
 *      char *nome = NULL;
 *      size_t tamanho = 0;
 *      getline(&nome, &tamanho, stdin);
 *
 */

/**
 * QUANDO USAR CADA UM:
 *      - scanf --> ler uma única palavra;
 *      - fgets --> ler uma linha com segurança;
 *      - getline --> quando não se sabe o tamanho da entrada;     
 */