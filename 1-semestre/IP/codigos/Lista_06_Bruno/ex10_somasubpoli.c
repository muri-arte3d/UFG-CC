/**
 * Soma e Subtracao de polinomios (+++)
 *
 * Entrada: qtdTestes (int)
 * Entrada: sinal (char) '+' ou '-'
 * Entrada: qtdN1 (int) qtdN1 <= 50
 * Entrada qtdN1 vezes: %f %d, &c, &e (float, int)
 * Entrada: qtdN2 (int) qtdN2 <= 50
 * Entrada qtdN2 vezes: %f %d, &c, &e (float, int)
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 50

typedef struct
{
	float coef;
	int expo;
}
Polinomio;

void le_polinomio(Polinomio *p, int qtd);
void soma_poli(Polinomio *p1, Polinomio *p2, Polinomio *pRes);
void sub_poli(Polinomio *p1, Polinomio *p2, Polinomio *pRes);
void imprime_poli(Polinomio *p);

int main()
{
	int i, j, k, m, n, o; // Iteradores
	int qtdTestes;
	scanf("%d", &qtdTestes);
	//printf("Quantidade de testes: %d\n", qtdTestes);

	for(i = 0; i < qtdTestes; i++)
	{
		getchar();
		char sinal;
		scanf("%c", &sinal);
		//printf("sinal: %c\n", sinal);

		int qtdN1;
		scanf("%d", &qtdN1);
		//printf("Qtd p1: %d\n", qtdN1);

		Polinomio p1[TAMANHO] = {0};
		//Leitura do Polinomio
		le_polinomio(p1, qtdN1);

		int qtdN2;
		scanf("%d", &qtdN2);
		//printf("Qtd p2: %d\n", qtdN2);

		Polinomio p2[TAMANHO] = {0};
		//Leitura do Polinomio
		le_polinomio(p2, qtdN2);

		Polinomio pRes[TAMANHO] = {0};
		if(sinal == '+')
		{
			soma_poli(p1, p2, pRes);
		}
		else
		{
			sub_poli(p1, p2, pRes);
		}

		imprime_poli(pRes);

	}

	return 0;
}

void le_polinomio(Polinomio *p, int qtd)
{
	int i;
	float coef;
	int expo;
	for(i = 0; i < qtd; i++)
	{
		scanf("%f%d", &coef, &expo);
		p[expo].coef = coef;
		p[expo].expo = expo;
	}
}

void soma_poli(Polinomio *p1, Polinomio *p2, Polinomio *pRes)
{
	int i;
	for (i = 0; i < TAMANHO; i++)
	{
		pRes[i].coef = p1[i].coef + p2[i].coef;
		pRes[i].expo = i;
	}
}

void sub_poli(Polinomio *p1, Polinomio *p2, Polinomio *pRes)
{
	int i;
	for (i = 0; i < TAMANHO; i++)
	{
		pRes[i].coef = p1[i].coef - p2[i].coef;
		//printf("pRes[%d].coef = %.2f\n", i, pRes[i].coef);
	}
}

void imprime_poli(Polinomio *p)
{
	int i;
	char linha[500] = {""};
	for (i = TAMANHO - 1; i >=0; i--)
	{
		char strCoef[10] = {""};
		char strExpo[10] = {""};
		//printf("coef de p[%d] = %.2f\n", i, p[i].coef);
		//printf("expo de p[%d] = %d\n", i, p[i].expo);
		if(i != 0)
		{
			if(p[i].coef > 0)
			{
				sprintf(strCoef, "%.2f", p[i].coef);
				sprintf(strExpo, "%d", p[i].expo);
				//printf("coef = %s\n", strCoef);
				//printf("expo = %s\n", strExpo);
				strcat(linha, "+");
				strcat(linha, strCoef);
				strcat(linha, "X ^");
				strcat(linha, strExpo);
				strcat(linha, " ");
			}
			else if (p[i].coef < 0)
			{
				sprintf(strCoef, "%.2f", p[i].coef);
				sprintf(strExpo, "%d", p[i].expo);
				strcat(linha, strCoef);
				strcat(linha, "X ^");
				strcat(linha, strExpo);
				strcat(linha, " ");
			}
		}
		else
		{
		    if(p[i].coef > 0)
			{
				sprintf(strCoef, "%.2f", p[i].coef);
				//printf("coef = %s\n", strCoef);
				//printf("expo = %s\n", strExpo);
				strcat(linha, "+");
				strcat(linha, strCoef);
				strcat(linha, " ");
			}
			else if (p[i].coef < 0)
			{
				sprintf(strCoef, "%.2f", p[i].coef);
				sprintf(strExpo, "%d", p[i].expo);
				strcat(linha, strCoef);
				strcat(linha, " ");
			}
		}

		//printf("i: %d\n", i);
		//printf("Texto: %s\n", linha);
	}
	strcat(linha, "\n");
	linha[strcspn(linha, "\n") - 1] = '\0';
	printf("%s\n", linha);
}