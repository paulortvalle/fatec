#define DIM 200
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int vetor[DIM];

    srand(time(NULL));
    // alimentar o vetor com dados entre 0 e 99
    int i;
    for (i=0;i<DIM;i++){
        vetor[i] = rand() % 100;
    }

    // exibir os dados do vetor
    for (i=0;i<DIM;i++){
        printf("Posicao %d ==> %d\n",i,vetor[i]);
    }

    int maior=vetor[0],vezes;

    // buscar o maior valor gerado e contar a quantidade de vezes que ele aparece
    for (i=0; i<DIM; i++){
        if (vetor[i] == maior){
            vezes++;
        }
        if (vetor[i] > maior){
            vezes = 1;
            maior = vetor[i];
        }
    }

    printf("\n\nO maior valor foi ==> %d\n",maior);
    printf("A quantidade de vezes foi ==> %d\n",vezes);

    // mostra as posições com maior valor
    printf("As posicoes que aparecem sao ==> ");
    for (i=0; i<DIM; i++){
        if (vetor[i] == maior){
            printf("%d, ",i);
        }
    }
}
