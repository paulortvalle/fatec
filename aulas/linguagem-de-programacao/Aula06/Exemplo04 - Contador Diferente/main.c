#define DIM 20
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetor[DIM];
    int i;

    for (i=0; i<DIM; i++){
        vetor[i] = i * (DIM-i);
        printf("%d => %d\n",i,vetor[i]);
    }
}
