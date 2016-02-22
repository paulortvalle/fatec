#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, num, qtd=0;
    for (i=1;i<10;i++){

        printf("Digite o numero %d de 9: ",i);
        fflush(stdin);
        scanf("%d",&num);

        if (num%2==0){
            qtd++;
        }
    }
    printf("A quantidade de pares digitados foi: %d\n",qtd);
}
