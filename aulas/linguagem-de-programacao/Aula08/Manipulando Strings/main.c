#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nome[41]; // vetor de 40 posições a posição final é o terminador da string
    printf("Digite um nome: ");
    scanf("%s", nome); // lembrar de não usar & pois é um array...
    gets(nome); // melhor função para usar

    printf("O nome digitado foi %s", nome);
    puts(nome); // não concatena e pula a linha automaticamente!
}
