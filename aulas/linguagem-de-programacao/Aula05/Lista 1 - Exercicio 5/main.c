#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* Escreva um programa que leia 05 números inteiros positivos. Para
    cada número informado escrever a soma de seus divisores (exceto
    ele mesmo). */

    int i,num,j,soma;
    for (i=1;i<=5;i++){
        do {
            printf("Digite um numero inteiro (entre 1 e 100): ");
            scanf("%d",&num);
        } while (num < 1 || num > 100);

        soma = 0;
        for (j=1;j<=(num/2)+1;j++){
            if (num%j==0){
                printf("%d ",j);
                soma += j;
            }
        }
        printf(" =  %d\n\n",soma);
    }
}
