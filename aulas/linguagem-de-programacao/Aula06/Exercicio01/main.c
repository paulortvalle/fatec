#define DIM 10
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetorA[DIM];
    int i;

    // rotina para pegar os valores
    char rot = 'P';
    if (rot == 'P'){
        for (i=0; i<DIM; i++){
            do {
                printf("Digite o valor %d (entre 0 e 100): ", i);
                scanf("%d",&vetorA[i]);
            } while(vetorA[i] < 0 || vetorA[i] > 100);
        }
    } else {
        srand(time(NULL));
        for (i=0; i<DIM; i++){
            vetorA[i] = rand() % 100;
        }
    }

    // Construir um vetor B do mesmo tipo, observando a seguinte formatação:
    // • Se o valor do índice for par, o valor deverá ser multiplicado por 5;
    // • Se o valor do índice for ímpar, deverá ser somado com 5

    int vetorB[DIM];
    for (i=0;i<DIM;i++){
        (vetorA[i]%2 == 0) ? (vetorB[i] = vetorA[i] * 5) : (vetorB[i] = vetorA[i] + 5);
    }

    for (i=DIM-1;i>=0;i--){
        printf("%2d => Valor de A: %3d | Valor de B: %3d\n",i,vetorA[i],vetorB[i]);
    }
}
