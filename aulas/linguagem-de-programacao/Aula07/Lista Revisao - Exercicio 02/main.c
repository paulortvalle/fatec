#include <stdio.h>
#include <stdlib.h>

    // 2) Faça um programa em C para:
    // a) Ler um valor x qualquer
    // b) Calcular Y = ( x+1)+(x+2)+(x+3)+(x+4)+(x+5)+…(x+100).

void main()
{
     int x, i;
     int y = 0;

     printf("Digite o valor de x: ");
     scanf("%d",&x);

     for (i=1; i<=100;i++){
        y += (x+i);
     }

     printf("O valor de y: %d",y);
}
