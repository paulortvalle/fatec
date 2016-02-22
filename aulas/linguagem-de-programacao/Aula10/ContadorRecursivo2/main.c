#include <stdio.h>
#include <stdlib.h>

void contadorDOWN(int n){
    if (n == 0)
        return;
    printf("%d\n",n);
    contadorDOWN(n-1);
}

void main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    contadorDOWN(num);
}
