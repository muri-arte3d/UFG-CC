#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int codigo;
	float credito;
	char nome[100];
}
Curso;

typedef struct
{
	char nome[500];
	int codigo_mat;
	int num_creditos;
}
Aluno;

int main()
{
	// Numero de cursos
	int num_cursos;
	scanf("%d", &num_cursos);

	if (num_cursos >= 1 && num_cursos <= 30)
	{
		// DeclaraC'C#o dos cursos
		Curso *cursos = malloc(num_cursos * sizeof(Curso));
		if(cursos == NULL)
		{
			printf("Memory allocation failed!\n");
			return 1;
		}

		// Leitura dos cursos
		int i;
		for(i = 0; i < num_cursos; i++)
		{
			scanf("%d", &cursos[i].codigo);
			scanf("%f", &cursos[i].credito);
			getchar();
			fgets(cursos[i].nome, sizeof(cursos[i].nome), stdin);
			cursos[i].nome[strcspn(cursos[i].nome, "\n")] = '\0';
		}

		int num_alunos;
		scanf("%d", &num_alunos);

		if (num_alunos >= 1 && num_alunos <= 1000)
		{
			// DeclaraC'C#o de alunos
			Aluno *alunos = malloc(num_alunos * sizeof(Aluno));
			if (alunos == NULL)
			{
				printf("Memory allocation failed!\n");
				return 1;
			}

			// Leitura de alunos
			for (i = 0; i < num_alunos; i++)
			{
				getchar();
				fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
				alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';
				scanf("%d", &alunos[i].codigo_mat);
				scanf("%d", &alunos[i].num_creditos);
			}

			// Printar os baguios
			for (i = 0; i < num_alunos; i++)
			{
				char tempcurso[100];
				float tempcredito;
				int j;
				for (j = 0; j < num_cursos; j++)
				{
					if(alunos[i].codigo_mat == cursos[j].codigo)
					{
						strcpy(tempcurso, cursos[j].nome);
						tempcredito = cursos[j].credito;
					}
				}
				printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n",
				       alunos[i].nome, tempcurso, alunos[i].num_creditos, tempcredito, (tempcredito * alunos[i].num_creditos));
			}
			free(alunos);

		}
		free(cursos);
	}

	return 0;
}
