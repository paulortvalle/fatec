#define TAMANHO 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordenador(char *ul[TAMANHO][20]){

    int i,j;

    for (i=0; i<TAMANHO ; i++){
        printf("%d = %s \n",i, ul[i]);
    }

    for (i=0; i<TAMANHO;i++){
        for (j=0; j<TAMANHO;j++){
            int res = strcmp(ul[i], ul[j]);
            printf("%d %s:%s\n",res,ul[i],ul[j]);
            if (res < 0){
                char aux[20];
                strcpy(aux,ul[i]);
                strcpy(ul[i],ul[j]);
                strcpy(ul[j],aux);
            }
        }
    }
}


void main()
{
    char nome[TAMANHO][20];
    int i,j;

    for (i=0; i<TAMANHO ; i++){
        printf("Digite um nome:");
        gets(nome[i]);
    }

    ordenador(&nome);

    for (i=0; i<TAMANHO ; i++){
        printf("%s \n", nome[i]);
    }

}
