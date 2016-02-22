#define SORTEADOS 10
#define PALPITES 2
#include <stdio.h>
#include <stdlib.h>

// Criar um programa que sorteia 10 numeros aleatórios (entre 0 e 20).
// O programa deve solicitar 2 numeros para o usuario.
// em seguida ele avalia os valores e paga 500 reais para cada acerto.

void sortear(int v[]){
    int i, j;
    for (i=0;i<SORTEADOS;i++){
        v[i] = (v[i]%19)+1;
        for (j=0;j<i;j++){
            if (j != i){
                if (v[i]==v[j]){
                    i--;
                    break;
                }
            }
        }
    }
}

void main()
{
    int vsorteados[SORTEADOS];
    sortear[vsorteados];

    int i;
    for (i=0; i<SORTEADOS; i++){
        printf("%d\n",vsorteados[i]);
    }

}
