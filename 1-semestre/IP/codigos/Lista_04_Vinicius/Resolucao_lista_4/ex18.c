#include <stdio.h>

int main(void)
{
    int num;               /**< Número de alunos. */
    int min_students;      /**< Número mínimo de alunos necessários para a aula acontecer. */
    int i;                 /**< Variável de iteração. */
    int on_time_count = 0; /**< Contagem de alunos que chegaram antes ou na hora da aula. */
    int vet[1000];         /**< Vetor para armazenar o tempo de chegada de cada aluno. */
    int on_time_ids[1000]; /**< Vetor para armazenar os identificadores dos alunos que chegaram a tempo. */

    // Lê o número de alunos e o número mínimo de alunos necessários
    scanf("%d%d", &num, &min_students);

    // Lê o tempo de chegada de cada aluno
    for (i = 0; i < num; i++)
    {
        scanf("%d", &vet[i]);
    }

    // Conta quantos alunos chegaram antes ou exatamente na hora
    for (i = 0; i < num; i++)
    {
        if (vet[i] <= 0)
        {
            on_time_ids[on_time_count] = i + 1; // Armazena o identificador do aluno (i+1)
            on_time_count++;                    // Incrementa a contagem de alunos que chegaram na hora ou antes
        }
    }

    // Se o número de alunos que chegaram a tempo for menor que o mínimo necessário, imprime "SIM" e termina
    if (on_time_count < min_students)
    {
        printf("SIM\n");
    }
    else
    {
        // Caso contrário, imprime "NAO" e os identificadores dos alunos que chegaram a tempo em ordem contrária
        printf("NAO\n");
        for (i = on_time_count - 1; i >= 0; i--)
        {
            printf("%d\n", on_time_ids[i]); // Imprime em ordem contrária
        }
    }

    return 0;
}
