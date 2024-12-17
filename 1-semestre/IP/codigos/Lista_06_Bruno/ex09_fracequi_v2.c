/**
 * Fracoes equivalentes - versao 2
 *
 * Gera uma lista de fracao
 * Percorre da esquerda para a direita
 * Lista grande
 * Indicar pares de fracoes equivalentes
 * Compara i com i + 1 atC) i + n
 *
 * Entrada: Numero de teste (qtdTestes, tipo int)
 * Entrada: lista de fraC'C5es (linha, char lista[1000]) -> mudanC'a no cC3digo da versC#o 1
 *
 * Saida: Caso de teste n
 * Saida: Possui fraC'C5es?
 *          Se nC#o "Nao ha fracoes equivalentes na sequencia"
 *          Se sim "fracao i equivalente com fracao i + n"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int den;
	int num;
} Fracao;

int main()
{
	// Variaveis
	int qtdTestes;
	int qtdFracoes = 0;
	Fracao *f;
	char linha[500];

	scanf("%d", &qtdTestes);
	getchar();
	if (qtdTestes > 30)
	{
		return 1;
	}

	int i;
	for (i = 0; i < qtdTestes; i++)
	{
		printf("Caso de teste %d\n", i+1);
		// Leitura da linha
		fgets(linha, sizeof(linha), stdin);

		// Separa linha por tokens e conta a quantidade de fracoes
		char templinha[500]; // Evita com que strtok destrua a linha
		strcpy(templinha, linha);
		char *token = strtok(templinha, " \n");
		while (token != NULL)
		{
			//printf("token: %s\n", token);
			qtdFracoes++;
			token = strtok(NULL, " \n");
		}

		f = malloc(qtdFracoes * sizeof(Fracao));
		if (f == NULL)
		{
			return 1;
		}

		//printf("linha: %s\n", linha);
		// Separa linha por tokens e faz a leitura das fracoes
		token = strtok(linha, " \n");
		int indice = 0;
		while (token != NULL)
		{
			sscanf(token, "%d/%d", &f[indice].num, &f[indice].den);
			token = strtok(NULL, " \n");
			//printf("f[%d].num: %d -- f[%d].den: %d\n", indice, f[indice].num, indice, f[indice].den);
			indice++;

		}

		int j, k, flag = 0;
		for (j = 0; j < indice; j++)
		{
			for (k = j + 1; k < indice; k++)
			{
				if(f[k].den * f[j].num == f[k].num * f[j].den)
				{
					flag = 1;
					printf("%d/%d equivalente a %d/%d\n", f[j].num, f[j].den, f[k].num, f[k].den);
				}
			}

		}
		if (flag == 0)
		{
			printf("Nao ha fracoes equivalentes na sequencia\n");
		}

		free(f);
	}
	return 0;
}