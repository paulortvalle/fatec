#include <stdio.h>
#include <stdlib.h>

void contadorUP(int n){
    if (n == 0)
        return;
    contadorUP(n-1);
    printf("%d\n",n);
}

void main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    contadorUP(num);
}
