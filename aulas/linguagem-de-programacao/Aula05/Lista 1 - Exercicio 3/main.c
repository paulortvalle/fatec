#include <stdio.h>
#include <stdlib.h>

void main()
{
   /*Fa�a o programa que apresenta a seguinte sa�da, perguntando ao
    usu�rio o n�mero m�ximo (no exemplo, 9). Este n�mero deve ser
    sempre �mpar.
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
