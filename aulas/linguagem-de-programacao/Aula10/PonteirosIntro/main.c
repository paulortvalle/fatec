#define TAMANHO 10
#include <stdio.h>
#include <stdlib.h>

void alimentar(int v[]){
    int i;
    for (i=0; i<TAMANHO;i++){
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }
}

void ordenar(int v[]){
    int i, j, troca;
    for (i=0; i<TAMANHO; i++){
        for (j=0; j<TAMANHO; j++){
            if (v[i]<v[j]){
                troca = v[i];
                v[i] = v[j];
                v[j] = troca;
            }
        }
    }
}

void exibir(int v[]){
    int i;
    for (i=0;i<TAMANHO;i++){
        printf("%3d - ",v[i]);
    }
}

void main()
{
    int vetor[TAMANHO];
    alimentar(vetor);
    ordenar(vetor);
    exibir(vetor);
}
