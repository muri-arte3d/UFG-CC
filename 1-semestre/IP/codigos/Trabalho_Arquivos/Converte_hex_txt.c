/**
 * O arquivo está em hexadecimal
 * hexadecimal é 16 bits = 2^4
 * Tabela ASCII é 256 bits = 2^8
 *
 *  16^2 = 256
 *
 * Com dois hexadecimais eu consigo um código da Tabela ASCII
 *
 */

#include <stdio.h>
#include <string.h>

void arquivo_variavel(char *hex, FILE *arquivo)
{
    int ch;
    int i = 0;
    while ((ch = fgetc(arquivo)) != EOF)
    {
        hex[i] = (unsigned char)ch;
        i++;
    }
}

int hextodecimal(char hex)
{
    int res = -1;
    // printf("res = %d\n", res);

    if (hex >= '0' && hex <= '9')
    {
        res = hex - '0';
    }
    else if (hex >= 'a' && hex <= 'f')
    {
        res = hex - 'a' + 10;
    }
    return res;
}

int main()
{
    // Ler o arquivo trabalho.hex
    FILE *arquivo = fopen("trabalho.hex", "r");
    if (arquivo == NULL)
    {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Guardar em algum lugar
    char txtHEX[2000];
    // arquivo_variavel(txtHEX, arquivo); // Atualiza parHEX
    int ch;
    int i = 0;
    while ((ch = fgetc(arquivo)) != EOF)
    {
        // putchar('\n');
        if (ch != ('\n'))
        {
            txtHEX[i] = (unsigned char)ch;
            i++;
        }
    }
    txtHEX[i] = '\0';
    fclose(arquivo);

    // Manipular os dados
    // char -> int equivalente -> char
    int txtINT[1000];
    int j = 0;
    int tamanho = strlen(txtHEX);
    for (i = 0; i < tamanho / 2; i++)
    {
        j = 2 * i;
        int temp1 = hextodecimal(txtHEX[j]);
        int temp2 = hextodecimal(txtHEX[j + 1]);
        txtINT[i] = temp1 * 16 + temp2;
    }

    char txtTXT[1000];
    for (i = 0; i < tamanho/2; i++)
    {
        txtTXT[i] = txtINT[i];
        //printf("%c", txtTXT[i]);
    }
    txtTXT[tamanho / 2] = '\0';

    // Escrever os dados em trabalho.txt
    FILE *novo_arquivo = fopen("trabalho.txt", "w");
    if (novo_arquivo == NULL)
    {
        perror("Erro ao criar arquivo\n");
    }
    int k = 0;
    while (k < tamanho / 2)
    {
        fprintf(novo_arquivo,"%c", txtTXT[k]);
        k++;
    }

    // Fechar arquivos
    fclose(novo_arquivo);
}