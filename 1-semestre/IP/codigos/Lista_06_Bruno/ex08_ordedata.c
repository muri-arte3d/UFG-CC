/**
 * Ordenacao por data (++)
 *
 * Le dados de alunos
 * Ordena por idade
 * Ter a func ComparaDataNasc(struct aluno1, struct aluno2)
 *      Se aluno1.data <= aluno2.data retorna 1
 *      Se aluno1.data > aluno2.data retorna 0
 * Deve ser chamada por func ordena alunos
 *
 * Struct: Aluno{int matricula; int dia; int mes; int ano; char nome[200]};
 *
 * Entrada: numero de alunos (int)
 * Entrada: lista de alunos (*Aluno)
 *
 * Saida: Matric.: matricula Nome: nome Data Nasc: dia/mes/ano (Variaveis do Aluno);
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct
{
    int matricula, dia, mes, ano;
    char nome[200];
} Aluno;
 
void ordena_alunos(Aluno *a, int qtd);
int ComparaDataNasc(Aluno a1, Aluno a2);
 
int main()
{
    // Variaveis
    int qtdAlunos;
    Aluno *a;
 
    // Aloca memoria alunos
    a = malloc(qtdAlunos * sizeof(Aluno));
    if (a == NULL)
    {
        return 1;
    }
 
    scanf("%d", &qtdAlunos);
    if(qtdAlunos < 1 || qtdAlunos > 30)
    {
        return 1;
    }
 
    // Lendo alunos
    int i;
    for (i = 0; i < qtdAlunos; i++)
    {
        //scanf("%d%d%d%d%[^\n]", &a[i].matricula, &a[i].dia, &a[i].mes, &a[i].ano, a[i].nome);
        scanf("%d%d%d%d", &a[i].matricula, &a[i].dia, &a[i].mes, &a[i].ano);
        fgets(a[i].nome, sizeof(a[i].nome), stdin);
        a[i].nome[strcspn(a[i].nome, "\n")] = '\0';
    }
 
    ordena_alunos(a, qtdAlunos);
 
    for (i = 0; i < qtdAlunos; i++)
    {
        int mat, dia, mes, ano;
        mat = a[i].matricula;
        dia = a[i].dia;
        mes = a[i].mes;
        ano = a[i].ano;
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", mat, a[i].nome, dia, mes, ano);
    }
 
    free(a);
    return 0;
}
 
void ordena_alunos(Aluno *alunos, int qtd)
{
    int i;
    for (i = 0; i < qtd - 1; i++)
    {
        if (ComparaDataNasc(alunos[i], alunos[i + 1]) == 0)
        {
            Aluno temp;
            temp = alunos[i];
            alunos[i] = alunos[i + 1];
            alunos[i + 1] = temp;
        }
    }
}
 
int ComparaDataNasc(Aluno a1, Aluno a2)
{
    if (a1.ano < a2.ano) // aluno 1 mais velho por ano
    {
        return 0;
    }
    else if (a1.ano > a2.ano) // aluno 2 mais velho por ano
    {
        return 1;
    }
    else // anos iguais
    {
        if (a1.mes < a2.mes) // aluno 1 mais velho por mes
        {
            return 0;
        }
        else if (a1.mes > a2.mes) // aluno 2 mais velho por mes
        {
            return 1;
        }
        else // meses iguais
        {
            if (a1.dia < a2.dia) // aluno 1 mais velhor por dia
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}