#define DIM 10
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetor[DIM];
    int i;
    int n;
    int count = 0;

    for (i=0; i<DIM; i++){
        scanf("%d",&n);
        if (n == -5) break;
        vetor[i]=n;
    }
}
