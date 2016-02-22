#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x=20;
    int i;
    for (i=0;i<7&&x%2;x++){
        printf("O valor de i: %d\n",i);
    }
    printf("O valor de x: %d\n",x);
}
