#define DIM 50
#include <stdio.h>
#include <stdlib.h>

    // 1) Fa�a um programa em C para ler base e altura de 50 tri�ngulos e imprimir a sua
    // �rea. Sabe-se que a f�rmula para obter a �rea �: AREA = (BASE * ALTURA) / 2.

void main()
{
    float triangulo[DIM][3];
    int i;

    printf("TOTAL DE TRIANGULOS: %d\n\n",DIM);
    for(i=0;i<DIM;i++){
        printf("Digite a altura do triangulo %d: ",i+1);
        scanf("%f",&triangulo[i][0]);

        printf("Digite a base do triangulo %d: ",i+1);
        scanf("%f",&triangulo[i][1]);

        triangulo[i][2] = (triangulo[i][0]*triangulo[i][1])/2;
    }

    for(i=0;i<DIM;i++){
        printf("Triangulo %d (%3.2f,%3.2f) | Area = %3.4f\n",i+1,triangulo[i][0],triangulo[i][1],triangulo[i][2]);
    }
}
