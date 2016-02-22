#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    do{
        // executa o bloco e depois o teste
        printf("Digite um valor de 0 a 10: ");
        scanf("%d",&n);
    }while((n<0)||(n>10));
    printf("Valor de n: %d", n);
}
