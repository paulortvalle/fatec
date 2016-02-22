#include <stdio.h>
#include <stdlib.h>

int fibonati(int n1, int n2, int c){
    if (c==1)
        return ;
    return fibonati(n1,n1+n2,c-1);
}

void main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Fibonati: %d"),fibonati(1,1,num-2);
}
