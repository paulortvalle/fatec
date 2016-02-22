#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca de strings
// #include <math.h> // funções matemáticas
//int indchrp(char *texto, char letra);


int main()
{
    char nome1[21], nome2[21];
    printf("Digite o primeiro nome: ");
    gets(nome1);

    printf("Digite o segundo nome: ");
    gets(nome2);

    int comp = strcmp(nome1,nome2);
    if (comp == 0) {
        printf("Sao iguais/n");
    } else {
        printf("Sao diferentes/n");
    }
    printf("o valor de comp eh: %d", comp);

    int teste = indchrp(nome1,'o');
    printf("Encontrou o em: %d/n",teste);
    return 0;
}
