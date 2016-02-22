#define DIM 5
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int mat[DIM][DIM] = {{0}};
    int i; int j;

    srand(time(NULL));
    for (i=0; i<DIM;i++){
        for (j=i; j<DIM;j++){
            mat[i][j] = (rand()%9) + 1;
        }
    }

    for (i=0; i<DIM;i++){
        for (j=0; j<DIM;j++){
            printf("[%d] ",mat[i][j]);
        }
        printf("\n");
    }

}
