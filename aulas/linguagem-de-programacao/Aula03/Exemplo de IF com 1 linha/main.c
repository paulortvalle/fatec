#include <stdio.h>
#include <stdlib.h>

void main()
{

    int x = 10;
    int y = x>9 ? 100 : 200;

    printf("O valor de y %c %d\n", 130, y);

    int sqrt, i;
    printf("Digite um numero: ");
    scanf("%d",&i);

    sqrt = i>0 ? i*i : -(i*i);
    printf ("O resultado quadrado eh %d\n",sqrt);

}
