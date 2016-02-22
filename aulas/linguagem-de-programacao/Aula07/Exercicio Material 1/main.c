#define ALUNOS 2
#define NOTAS 3
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int ra[ALUNOS];
    float notas[ALUNOS][NOTAS];
    int i, j;

    for (i=0; i<ALUNOS; i++){
        printf("Digite o RA do Aluno: ");
        scanf("%d",&ra[i]);

        float soma = 0;
        for (j=0; j<NOTAS-1; j++){
            float digitada = 0.0;
            do {
                printf("Digite a nota %d do aluno %d: ",j+1,ra[i]);
                scanf("%f",&digitada);
            } while(digitada<0 || digitada >10);
            notas[i][j] = digitada;
            soma += digitada;
        }

        notas[i][j] = soma/j;
    }

    printf("\n\nRA DO ALUNO | ");
    for (i=0; i<NOTAS-1;i++){
        printf("NT %d | ",i+1);
    }
    printf("MEDIA\n");

    for (i=0;i<ALUNOS;i++){
        printf(" %2d         | ", ra[i]);
        for (j=0; j<NOTAS-1;j++){
            printf("%2.1f | ",notas[i][j]);
        }
        printf(" %2.1f\n",notas[i][j]);
    }
}
