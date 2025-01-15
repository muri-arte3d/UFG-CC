#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "01-curso.h"

int main()
{
    int numCursos = 0;
    printf("Quantos cursos? ");
    scanf("%d", &numCursos);
    if (numCursos < 1 || numCursos > 30)
        return 1;

    Curso *cursos = malloc(numCursos * sizeof(Curso));
    if (cursos == NULL)
        return 1;

    for (int i = 0; i < numCursos; i++)
    {
        printf("Infos do curso: (codigo, credito, nome)\n");
        scanf("%d", &cursos[i].codigo);
        scanf("%f", &cursos[i].credito);
        getchar();
        fgets(cursos[i].nome, sizeof(cursos[i].nome), stdin);
        cursos[i].nome[strcspn(cursos[i].nome, "\n")] = '\0';
    }

    int numAlunos = 0;
    printf("Quantos alunos? ");
    scanf("%d", &numAlunos);
    if (numAlunos < 1 || numAlunos > 1000)
        return 1;

    Aluno *alunos = malloc(numAlunos * sizeof(Aluno));
    if (alunos == NULL)
        return 1;

    for (int i = 0; i < numAlunos; i++)
    {
        printf("Infos dos alunos: (nome, codigo, creditos)\n");
        getchar();
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
        scanf("%d", &alunos[i].codigo);
        scanf("%d", &alunos[i].creditos);
    }

    for (int i = 0; i < numAlunos; i++)
    {
        char tempCurso[100];
        float tempCredito;

        for (int j = 0; j < numCursos; j++)
        {
            if (alunos[i].codigo == cursos[j].codigo)
            {
                strcpy(tempCurso, cursos[j].nome);
                tempCredito = cursos[j].credito;
            }
        }

        printf("Aluno(a): %s ", alunos[i].nome);
        printf("Curso: %s ", tempCurso);
        printf("Num. Creditos: %d ", alunos[i].creditos);
        printf("Valor Credito: %.2f ", tempCredito);
        printf("Mensalidade: %.2f\n", alunos[i].creditos * tempCredito);
    }

    free(cursos);
    free(alunos);
    return 0;
}