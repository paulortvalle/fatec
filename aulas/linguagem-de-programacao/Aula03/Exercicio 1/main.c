#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* Mostre sal�rio bruto, liquido e imposto a pagar sendo
    Sal�rio < 1000 ? Taxa 5%
    Sal�rio >= 100 e < 5000 ? Taxa 11%
    Sal�rio >= 5000? Taxa 35% */

    float salarioBruto, salarioLiquido, imposto, taxa;

    printf("Digite o salario bruto a calcular: ");
    fflush(stdin);
    scanf("%f",&salarioBruto);

    if (salarioBruto < 1000){
        taxa = 0.05;
    }else{
         if(salarioBruto < 5000){
            taxa = 0.11;
        }else{
             taxa = 0.35;
        }
    }

    imposto = salarioBruto * taxa;
    salarioLiquido = salarioBruto - imposto;

    printf("O salario bruto eh %0.2f\n", salarioBruto);
    printf("O salario liquido eh %0.2f\n", salarioLiquido);
    printf("O imposto eh %0.2f \(%0.0f\%\)\n", imposto,taxa*100);
    printf("%c",37);
}
