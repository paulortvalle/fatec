#define TERMO 100
#include <stdio.h>
#include <stdlib.h>

    // 3) Faça um programa em C para gerar os termos da seguinte P.G.: 3,9,27,81,…,calcule o 100º termo.

void main()
{
    double pg = 1;
    int i;

    for (i=1;i<=TERMO;i++){
        pg *= 3;
    }

    printf("O %d termo eh %E: ",TERMO,pg);
}
