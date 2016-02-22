#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*Escreva um programa em C para ler 04 pares de valores inteiros e
    positivos, valide essa entrada. Para cada par lido deve ser impresso
    o valor do maior elemento do par ou a frase "Valores Iguais" quando
    o forem. */

    int i,p1,p2;
    for (i=1;i<=4;i++){
        do {
            printf("Digite um numero inteiro (entre 1 e 100): ");
            scanf("%d",&p1);
            printf("Digite outro numero inteiro (entre 1 e 100): ");
            scanf("%d",&p2);
        } while (p1 < 1 || p1 > 100 || p2 < 1 || p2 > 100);
        if (p1 == p2){
            printf("Voce digitou duas vezes o numero: %d",p1);
        } else {
            if (p1 > p2){
                printf("Do par (%d,%d) o maior valor eh: %d",p1,p2,p1);
            }else{
                printf("Do par (%d,%d) o maior valor eh: %d",p1,p2,p2);
            }
        }
        printf("\n\n");
    }
}
