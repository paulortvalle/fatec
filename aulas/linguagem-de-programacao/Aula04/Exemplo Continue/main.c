#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,x=0;
    for (i=1; i<=5; i++){
        if (i%2==0) continue; // se encontrar a condi��o volta para o la�o
        x++;
    }
    printf("O valor de X eh %d",x);
}
