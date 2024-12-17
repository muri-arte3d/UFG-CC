/**
 * Tradutor do Papai Noel
 * 
 * Entrada: regiao (char[30])
 * 
 * Saida: msg (char[30])
 * 
 * Dificuldade: finaliza com o EOF
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 24

typedef struct 
{
    char pais[30];
    char saudacao[30];
} Noel;

void aloca_paises(Noel *n);

int main()
{
    //int flag = 0; // (0 = nao possui) -- (1+ = possui)
    char temp[50];
    char regiao[50];
    Noel *n = malloc(MAX * sizeof(Noel));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        aloca_paises(n);
    }
    
    while (scanf("%s", regiao) != EOF)
    {
        strcpy(temp, "-- NOT FOUND --");
        int i;
        for(i = 0; i < MAX; i++)
        {
            if (strcmp(regiao, n[i].pais) == 0)
            {
                strcpy(temp, n[i].saudacao);
            }
        }
        printf("%s\n", temp);
    }
    free(n);
    return 0;
}

void aloca_paises(Noel *lista)
{
    strcpy(lista[0].pais, "brasil");
    strcpy(lista[0].saudacao, "Feliz Natal!");

    strcpy(lista[1].pais, "alemanha");
    strcpy(lista[1].saudacao, "Frohliche Weihnachten!");

    strcpy(lista[2].pais, "austria");
    strcpy(lista[2].saudacao, "Frohe Weihnacht!");

    strcpy(lista[3].pais, "coreia");
    strcpy(lista[3].saudacao, "Chuk Sung Tan!");

    strcpy(lista[4].pais, "espanha");
    strcpy(lista[4].saudacao, "Feliz Navidad!");

    strcpy(lista[5].pais, "grecia");
    strcpy(lista[5].saudacao, "Kala Christougena!");

    strcpy(lista[6].pais, "estados-unidos");
    strcpy(lista[6].saudacao, "Merry Christmas!");

    strcpy(lista[7].pais, "inglaterra");
    strcpy(lista[7].saudacao, "Merry Christmas!");

    strcpy(lista[8].pais, "australia");
    strcpy(lista[8].saudacao, "Merry Christmas!");

    strcpy(lista[9].pais, "portugal");
    strcpy(lista[9].saudacao, "Feliz Natal!");

    strcpy(lista[10].pais, "suecia");
    strcpy(lista[10].saudacao, "God Jul!");

    strcpy(lista[11].pais, "turquia");
    strcpy(lista[11].saudacao, "Mutlu Noeller");

    strcpy(lista[12].pais, "argentina");
    strcpy(lista[12].saudacao, "Feliz Navidad!");

    strcpy(lista[13].pais, "chile");
    strcpy(lista[13].saudacao, "Feliz Navidad!");

    strcpy(lista[14].pais, "mexico");
    strcpy(lista[14].saudacao, "Feliz Navidad!");

    strcpy(lista[15].pais, "antardida");
    strcpy(lista[15].saudacao, "Merry Christmas!");

    strcpy(lista[16].pais, "canada");
    strcpy(lista[16].saudacao, "Merry Christmas!");

    strcpy(lista[17].pais, "irlanda");
    strcpy(lista[17].saudacao, "Nollaig Shona Dhuit!");

    strcpy(lista[18].pais, "belgica");
    strcpy(lista[18].saudacao, "Zalig Kerstfeest!");

    strcpy(lista[19].pais, "italia");
    strcpy(lista[19].saudacao, "Buon Natale!");

    strcpy(lista[20].pais, "libia");
    strcpy(lista[20].saudacao, "Buon Natale!");

    strcpy(lista[21].pais, "siria");
    strcpy(lista[21].saudacao, "Milad Mubarak!");

    strcpy(lista[22].pais, "marrocos");
    strcpy(lista[22].saudacao, "Milad Mubarak!");

    strcpy(lista[23].pais, "japao");
    strcpy(lista[23].saudacao, "Merii Kurisumasu!");
}