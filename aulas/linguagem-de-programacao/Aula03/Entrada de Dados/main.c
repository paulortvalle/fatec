#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra1, letra2;

    printf("Digite uma letra:\n");      // solicita um char
    fflush(stdin);                      // limpa o bufer de entrada
    scanf("%c",&letra1);                // lê o dado

    printf("Digite outra letra:\n");
    fflush(stdin);
    letra2 = getchar();                 // método alternativo de leitura de dados

    printf("As letras digitadas foram %c e %c\n",letra1, letra2);

    return 0;
}
