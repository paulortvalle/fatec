#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*Fazer um programa em C para calcular a somatória dos N primeiros
    divisores exatos de um inteiro X, onde N e X são lidos e são números
    inteiros e positivos. [Validar entradas].*/

    // pega o valor de x
    int x;
    do {
        printf("Digite um numero inteiro (entre 1 e 1000): ");
        scanf("%d",&x);
    } while (x < 1 || x > 1000);

    // calcula as possibilidades para o usuario
    int possibilidade_maxima=0,i;
    for (i=1; i<=(x/2)+1; i++){
        if (x%i==0) possibilidade_maxima++;
    }

    // Pega os divisores para a soma
    int n;
    do {
        printf("Digite a quantidade de divisores para a soma (entre 1 e %d): ",possibilidade_maxima);
        scanf("%d",&n);
    } while (n < 1 || n > possibilidade_maxima);

    // calcula a soma
    int soma=0, count=0;
    for (i=1; i<=(x/2)+1; i++){
        if (x%i==0){
            soma+=i;
            count++;
        }
        if (count>=n){
            break;
        }
    }

    // exibe os resultados
    printf("A soma do(s) %d primeiro(s) divisor(es) exato(s) do numero %d eh: %d",n,x,soma);
}
