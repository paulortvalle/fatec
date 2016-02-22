#define DIM 10
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetor[DIM];
    int i;

    for (i=0; i<DIM; i++){
        printf("valor %d => %d\n",i,vetor[i]);
    }

    int vetor2[DIM] = {0};
    for (i=0;i <DIM; i++){
        printf("valor %d => %d\n",i,vetor2[i]);
    }
}
