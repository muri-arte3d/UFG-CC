/**
 * Atividade de recursividade
 *
 * Robo sai do ponto de partida e vai até ponto de saída
 * PONTO DE PARTIDA s
 * ponto de saida (canto inferior direito)
 * Robo move em 4 direções
 *      cima, baixo, esquerda, direita
 * Labirinto [R][C]
 *      R -> linhas
 *      C -> colunas
 *      onde R e C estão entre 1 e 10.
 * CAMINHO_LIVRE .
 * OBSTACULO #
 * O robô não pode visitar o mesmo espaço já visitado (matriz int como buffer)
 * Entrada: linhas (int)
 * Entrada: colunas (int)
 * Entrada: labirinto[linhas][colunas] (char**)
 * Saída: numero de possibilidades de percorrer o caminho
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define PONTO_DE_PARTIDA 's'
#define CAMINHO_LIVRE '.'
#define OBSTACULO '#'
#define VISITADO 1
#define N_VISITADO 0
#define MAX_LABIRINTO 10
#define SUCESSO 1
#define FALHA 0

int andaRobo(char **, int[MAX_LABIRINTO][MAX_LABIRINTO], int, int, int, int);
char **leituraLabirinto(char **, int, int);
void desenhaLabirinto(char **, int, int, int, int);

int main()
{
    int linhas, colunas;
    printf("Digite o numero de linhas e colunas do labirinto:\n");
    scanf("%d%d", &linhas, &colunas);

    // Alocacao dinâmica do labirinto para passar à função recursiva por referência
    char **labirinto = (char **)malloc(linhas * sizeof(char *));
    for (int i = 0; i < linhas; i++)
    {
        labirinto[i] = (char *)malloc(colunas * sizeof(char));
    }

    // Leitura do labirinto
    printf("Leitura do labirinto:\n");
    labirinto = leituraLabirinto(labirinto, linhas, colunas);
    int posx, posy; // Posição do robô inicialmente
    printf("Indice do local do robô:\n");
    printf("posição em X: ");
    scanf("%d", &posx);
    printf("posição em Y: ");
    scanf("%d", &posy);
    //labirinto[posy][posx] = PONTO_DE_PARTIDA;

    int memoria[MAX_LABIRINTO][MAX_LABIRINTO] = {N_VISITADO}; // Inicializa tudo com 0's

    int maneiras = andaRobo(labirinto, memoria, linhas, colunas, posy, posx);
    printf("\nSao %d maneiras do roboto terminar esse labirinto\n", maneiras);

    for (int i = 0; i < linhas; i++)
    {
        free(labirinto[i]);
    }
    free(labirinto);

    return 0;
}

int andaRobo(char **labirinto, int memoria[MAX_LABIRINTO][MAX_LABIRINTO],
             int linhas, int colunas, int posy, int posx)
{
    printf("\n");
    desenhaLabirinto(labirinto, linhas, colunas, posy, posx);
    int total = 0;

    // Condições de parada
    // Chegou ao final
    // Passou dos limites do labirinto
    if ((posx < 0 || posx >= colunas) || (posy < 0 || posy >= linhas))
    {
        printf("Entrei na parede\n");
        return FALHA;
    }
    else if (posx == (colunas - 1) && (posy == linhas - 1))
    {
        printf("Achei\n");
        return SUCESSO;
    }
    // Chegou em obstáculo
    else if (labirinto[posy][posx] == OBSTACULO)
    {
        printf("Acertei obstaculo\n");
        return FALHA;
    }
    // Já passou por esse local
    else if (memoria[posy][posx] == VISITADO)
    {
        printf("Ja estive aqui\n");
        return FALHA;
    }
    // Recursividade
    else
    {
        // Grava que já visitou na memória
        memoria[posy][posx] = VISITADO;
        total += andaRobo(labirinto, memoria, linhas, colunas, posy - 1, posx); // Cima
        total += andaRobo(labirinto, memoria, linhas, colunas, posy + 1, posx); // Baixo
        total += andaRobo(labirinto, memoria, linhas, colunas, posy, posx - 1); // Esquerda
        total += andaRobo(labirinto, memoria, linhas, colunas, posy, posx + 1); // Direita
        memoria[posy][posx] = N_VISITADO;
    }
    return total;
}

char **leituraLabirinto(char **labirinto, int linhas, int colunas)
{
    getchar();
    // Leitura do labirinto
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf(" %c", &labirinto[i][j]);
        }
    }
    return labirinto;
}

void desenhaLabirinto(char **labirinto, int linhas, int colunas, int posy, int posx)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (i == posy && j == posx)
            {
                printf("s ");
            }
            else
            {
                printf("%c ", labirinto[i][j]);
            }
        }
        printf("\n");
    }
}