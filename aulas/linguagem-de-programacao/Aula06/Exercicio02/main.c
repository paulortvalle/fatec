#define DIM 10
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetorA[DIM];
    int i;

    // rotina para pegar os valores
    char rot = 'R';
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

    // • A soma de todos os valores ímpares.
    // • A soma de todos os valores pares.
    // • A soma total.
    // • E a porcentagem de números ímpares em relação aos pares.

    int result[4] = {0}; // 0 = par; 1 = impar; 2 = qtdpar; 3 = qtdimpar
    for (i=0; i<DIM; i++){
        if (vetorA[i]%2 == 0){
            result[0] += vetorA[i];
            result[2]++;
        } else {
            result[1] += vetorA[i];
            result[3]++;
        }
    }

    for (i=0;i<DIM;i++){
        printf("%2d => %3d\n",i,vetorA[i]);
    }

    printf("A soma dos impares eh: %d\n", result[1]);
    printf("A soma dos pares eh : %d\n", result[0]);
    printf("A soma total eh : %d\n", result[0]+result[1]);
    printf("Percentagem de numeros impares: %3.2f\%\n", ((float)result[3]/DIM)*100);
    printf("Percentagem de numeros pares: %3.2f\%", ((float)result[2]/DIM)*100);

}
