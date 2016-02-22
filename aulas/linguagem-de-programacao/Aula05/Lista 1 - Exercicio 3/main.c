#include <stdio.h>
#include <stdlib.h>

void main()
{
   /*Faça o programa que apresenta a seguinte saída, perguntando ao
    usuário o número máximo (no exemplo, 9). Este número deve ser
    sempre ímpar.
    1 2 3 4
    2 3 4
    3 4
    4 */

    // pega o valor solicitado pelo usuario
    int num;
    do {
        printf("Digite um numero inteiro (entre 1 e 50): ");
        scanf("%d",&num);
    } while (num < 1 || num > 50);

    int i, j;
    for (i=1; i<=num; i++){
        for (j=i; j<=num; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}
