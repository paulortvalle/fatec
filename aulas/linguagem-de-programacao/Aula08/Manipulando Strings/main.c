#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[41]; // vetor de 40 posi��es a posi��o final � o terminador da string
    printf("Digite um nome: ");
    scanf("%s", nome); // lembrar de n�o usar & pois � um array...
    gets(nome); // melhor fun��o para usar

    printf("O nome digitado foi %s", nome);
    puts(nome); // n�o concatena e pula a linha automaticamente!
}
