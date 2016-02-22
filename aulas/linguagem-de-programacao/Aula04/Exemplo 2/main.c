#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, soma=0;
    while(num){

        do {
            printf("Digite um valor entre 0 e 20: ");
            fflush(stdin);
            scanf("%d",&num);
        } while((num<0||num>20));
        soma+=num;

    }

    printf("A soma dos numeros eh: %d", soma);
}
