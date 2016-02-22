#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("H%cllo world!\n\n",'e');

    char letra1, letra2;

    printf("Digite um caracter:\n");
    fflush(stdin);
    scanf("%c",&letra1);

    printf("Digite outro caracter:\n");
    fflush(stdin);
    scanf("%c",&letra2);

    printf("Letras digitadas: %c (%i) e %c (%i)\n\n",letra1,letra1,letra2,letra2);

    return 0;
}
