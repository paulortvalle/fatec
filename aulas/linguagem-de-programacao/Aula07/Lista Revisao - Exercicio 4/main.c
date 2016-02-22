#define DIM 3
#include <stdio.h>
#include <stdlib.h>

    // 4) Para cada nota de compra, tem-se o Nome do produto comprado, o valor e o
    // imposto. Faça um programa em C que escreva o valor total bruto, o imposto total
    // cobrado e o valor total líquido de todas as notas. Considere 500 notas

void main()
{
    int produto[DIM];
    float valor[DIM+1][3];
    int i;

    for (i=0;i<DIM;i++){
        printf("Digite o codigo do produto: ");
        scanf("%d",&produto[i]);

        printf("Digite o valor total do produto %d: ",produto[i]);
        scanf("%f",&valor[i][0]);

        do {
            printf("Digite o valor do imposto do produto %d: ", produto[i]);
            scanf("%f",&valor[i][1]);
        } while (valor[i][0]<valor[0][1]);


    }
}
