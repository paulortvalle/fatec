#include <stdio.h>
#include <stdlib.h>

// Faça um programa principal que peça ao usuário a entrada de um string
// (texto) e em seguida peça para digitar uma letra. Este programa deve
// invocar uma função criada passando o string e o caracter enctrado e
// retornar a primeira ocorrência do caracter digitado no string. Você
// deve utilizar-se de ponteiros nesta função.

int buscaletra(char * t, char l){

    int posicao = 0;
    char *p_t = t;
    while(*p_t!='\0'){
        if(*p_t == l){
            // posicao = p_t - t + 1; (alternativo = posicao do ponteiro - posicao inicial de t + 1)
            posicao++;
            return posicao;
        }
        posicao++;
        p_t++;
    }

    return posicao;
}

void main()
{
    char texto[100];
    char letra;

    printf("Digite um texto: ");
    gets(texto);
    fflush(stdin);

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("A letra %c esta na posicao %d do texto.", letra, buscaletra(texto,letra));
}
