#include <stdio.h>
#include <stdlib.h>

void main()
{
   /* Escreva um programa que leia 3 notas de 5 alunos e a média das
    notas dos exercícios realizados por eles. Calcular a média de
    aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 +
    ME)/7. */

    int i,n1,n2,n3,n4;
    for (i=1;i<=5;i++){
        do {
            printf("Digite a nota 1 do aluno: ");
            scanf("%d",&n1);
        } while (n1 < 0 || n1 > 10);

        do {
            printf("Digite a nota 2 do aluno: ");
            scanf("%d",&n2);
        } while (n2 < 0 || n2 > 10);

        do {
            printf("Digite a nota 3 do aluno: ");
            scanf("%d",&n3);
        } while (n3 < 0 || n3 > 10);

        do {
            printf("Digite a media dos exercicios do aluno: ");
            scanf("%d",&n4);
        } while (n4 < 0 || n4 > 10);

        printf("A media do aluno eh: %0.2f\n\n",(n1+(n2*2)+(n3*3)+n4)/(float)7);
    }
}
