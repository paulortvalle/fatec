#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;

    printf("Digite dois valores: ");
    scanf("%d%d",&valor1,&valor2);

    int soma = valor1 + valor2;
    int subtracao = valor1 - valor2;
    int multiplicacao = valor1 * valor2;
    float divisao = valor1/(float)valor2;

    printf("\n\n");
    printf("A soma dos valores eh: %d\n", soma);
    printf("A subtracao dos valores eh: %d\n", subtracao);
    printf("A multiplicacao dos valores eh: %d\n", multiplicacao);
    printf("A divisao dos valores eh: %0.6f\n", divisao);

    printf("\n\n");
    printf("O endereco de memoria da variavel soma eh %d, e o valor eh %d\n", &soma, soma);
    printf("O tamanho em bytes da variavel soma eh %d\n", sizeof(soma));
    printf("O tamanho em bytes do tipo short double eh %d\n", sizeof(short double));

    return 0;
}
