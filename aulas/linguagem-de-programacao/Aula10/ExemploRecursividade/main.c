#include <stdio.h>
#include <stdlib.h>

unsigned fat(int n){
    if (n == 1) // criterio de termino da função recursiva
        return 1;
    else
        return n * fat(n-1); // chamada recursiva
}

void main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    printf("%d! = %d",num,fat(num));
}
