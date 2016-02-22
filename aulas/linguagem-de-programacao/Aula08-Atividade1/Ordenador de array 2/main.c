#define TAM 10
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[TAM][20];
    int i, j;

    for (i=0; i<TAM; i++){
        printf("Digite o nome: ");
        gets(&nome[i]);
    }

    for (i=0; i<TAM; i++){
        for (j=0; j<TAM; j++){
            int comp = strcmp(nome[i], nome[j]);
            if (comp < 0){
                char aux[20];
                strcpy(aux,nome[i]);
                strcpy(nome[i],nome[j]);
                strcpy(nome[j],aux);
            }
        }
    }

    for (i=0; i<TAM; i++){
        printf("%s\n",nome[i]);
    }
}
