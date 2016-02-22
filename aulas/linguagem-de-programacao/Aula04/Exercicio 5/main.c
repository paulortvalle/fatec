#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    int i;
    int maior=0;
    int menor=65535;
    float media=0;

    for (i=0; i<5; i++){

        printf("Digite um numero: ");
        fflush(stdin);
        scanf("%d",&num);

        if (i==0){
            maior=num;
            menor=num;
        } else {
            if (maior<num) maior=num;
            if (menor>num) menor=num;
        }

        media += num;
    }

    media /= (float)5;

    printf("\nO maior valor digitado foi: %d", maior);
    printf("\nO menor valor digitado foi: %d", menor);
    printf("\nA mediados valores digitados foi: %0.2f", media);

}
