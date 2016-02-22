#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opc;

    printf("Digite uma opcao:\n");
    printf("\t1 -> somar\n");
    printf("\t2 -> subtrair\n");

    printf("\n\n\t3 -> sair\n");

    fflush(stdin);
    scanf("%d",&opc);

    switch (opc) {
    case 1:
        system("cls")   // função exclusiva do windows para limpar a tela
        printf("Executa a funcao de soma");
        break;
    case 2:
        printf("Executa a funcao de subtracao");
        break;
    case 3:
        printf("Fechando...");
        break;
    default:
        printf("Opcao Invalida!!!!");
        break;
    }

}
