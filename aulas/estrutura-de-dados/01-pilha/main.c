#define TAMANHO 3
#include <stdio.h>
#include <stdlib.h>

// 1) retirar o valor do vetor de dentro da função push
// passar o valor para o push e ele adiciona
// 2) pop retorna o valor do item retirado
// 3) montar prototipagem de funções

int vetor[TAMANHO];
int posicao=0;

void push(){
    int digitado;
    if (posicao == TAMANHO){
        printf("\n\n\n PILHA CHEIA\n");
    } else {
        do{
            printf("Digite um numero entre 0 e 99: ");
            scanf("%d", &digitado);
        } while (digitado < 0 || digitado > 99 );
        vetor[posicao] = digitado;
        posicao++;
    }
    imprime();
}

void pop(){

    if (posicao <= 1){
        posicao = 0;
        printf("\n\n\nPILHA VAZIA\n");
        system("pause");
        system("cls");
    } else {
        posicao--;
        imprime();
    }
}

void imprime(){
    int i;
    for (i=posicao-1; i>=0; i--){
        printf("\n   +----+----+\n");
        printf("   | %2d | %2d |", i, vetor[i]);
    }
    if (posicao > 0)
        printf("\n   +----+----+\n\n\n");

    system("pause");
    system("cls");
}

void main()
{
    int opcao=0;

    while(opcao != 3){

        printf("\n\n 1) PUSH\n 2) POP\n 3) SAIR\n\n");
        printf("SELECIONE UMA OPCAO: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            push();
        break;

        case 2:
            pop();
        break;

        case 3:
            printf("\nATE MAIS...");
        break;

        default:
           printf("\nOPCAO INVALIDA");
        break;
        }

    }
}
