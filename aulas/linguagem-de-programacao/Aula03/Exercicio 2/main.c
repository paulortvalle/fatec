#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* Pegue o salário bruto e calcule o imposto sendo
    solteiro = 10% taxa
    casado = 9% de taxa */

    float salarioBruto, salarioLiquido, imposto, taxa;
    char estadoCivil;

    printf("Digite o salario bruto a calcular: ");
    fflush(stdin);
    scanf("%f",&salarioBruto);

    printf("Digite o estado civil S = solteiro | C = casado: ");
    fflush(stdin);
    scanf("%c",&estadoCivil);

    if (estadoCivil == 'S' || estadoCivil == 's'){
        taxa = 0.1;
    }else{
        if (estadoCivil == 'C' || estadoCivil == 'c'){
            taxa = 0.09;
        }else{
            printf("IMPOSSIVEL REALIZAR O CALCULO!!!!\n\n\n");
            taxa = 0;
        }
    }

    imposto = salarioBruto * taxa;
    salarioLiquido = salarioBruto - imposto;

    printf("O salario bruto eh %0.2f\n", salarioBruto);
    printf("O salario liquido eh %0.2f\n", salarioLiquido);
    printf("O imposto eh %0.2f \(%0.0f%%\)\n", imposto,taxa*100);
}
