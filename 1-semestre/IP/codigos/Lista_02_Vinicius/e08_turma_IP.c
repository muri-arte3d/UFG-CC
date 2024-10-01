/*Turma de Introdução à Programação (+)*/
#include <stdio.h>

int main()
{
    int matricula = 0;
    double p[8] = {0, 0, 0, 0, 0, 0, 0};
    double l[5] = {0, 0, 0, 0}, tf;
    int horas = 0;
    double notaF = 0, mediaP = 0, mediaL = 0;
    while (matricula != -1)
    {
        mediaP = 0;
        mediaL = 0;
        scanf("%d", &matricula);
        if (matricula != -1)
        {
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d", &p[0], &p[1], &p[2], &p[3], &p[4], &p[5], &p[6], &p[7], &l[0], &l[1], &l[2], &l[3], &l[4], &tf, &horas);
            // scanf("%d %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d", &matricula, &p[0], &p[1], &p[2], &p[3], &p[4], &p[5], &p[6], &p[7], &l[0], &l[1], &l[2], &l[3], &l[4], &tf, &horas);
            //  Calcula media de provas
            int i;
            for (i = 0; i < 8; i++)
            {
                mediaP += p[i];
            }
            mediaP /= 8;
            // Calcula media de listas
            for (i = 0; i < 5; i++)
            {
                mediaL += l[i];
            }
            mediaL /= 5;

            // Calcula media final
            notaF = 0.7 * mediaP + 0.15 * mediaL + 0.15 * tf;

            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: ", matricula, notaF);

            // 75% de 128 horas = 96 horas
            if (notaF >= 6 && horas >= 96)
            {
                printf("APROVADO\n");
            }
            else if (notaF < 6 && horas >= 96)
            {
                printf("REPROVADO POR NOTA\n");
            }
            else if (notaF >= 6 && horas < 96)
            {
                printf("REPROVADO POR FREQUENCIA\n");
            }
            else if (notaF < 6 && horas < 96)
            {
                printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
            }
        }
    }

    return 0;
}