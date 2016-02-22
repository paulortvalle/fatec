#include <stdio.h>
#include <stdlib.h>

// 8. Fa�a uma fun��o que receba por par�metros 3 valores inteiros referentes ao dia, ao m�s e ao ano. Retorne
// 1 se for uma data v�lida e 0 se n�o formar uma data v�lida.
int validarData(int dia, int mes, int ano){

    if (ano < 0) return 0;
    switch(mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return (dia <= 31 && dia >= 1) ? 1 : 0;
        break;
        case 4: case 6: case 9: case 11:
            return (dia <= 30 && dia >= 1) ? 1 : 0;
        break;
        case 2:
            if (ano % 400 == 0) {
                return (dia <= 29 && dia >= 1) ? 1 : 0;
            }else{
                if (ano % 4 == 0 && ano % 100 > 0){
                    return (dia <= 29 && dia >= 1) ? 1 : 0;
                } else {
                    return (dia <= 28 && dia >= 1) ? 1 : 0;
                }
            }
        break;
        default:
            return 0;
        break;
    }
}

void main()
{
    printf("%d",validarData(2,3,2012));
}
