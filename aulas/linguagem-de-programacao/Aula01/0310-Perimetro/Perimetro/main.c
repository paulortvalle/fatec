#include <stdio.h>
#include <stdlib.h>

int main()
{

    float area, pi = 3.14, raio, perimetro;

    printf("Digite o raio da circunferencia:\n");
    scanf("%f",&raio);

    area = pi * (raio * raio);
    perimetro = (2 * raio) * pi;

    printf("\n\n");
    printf("A area eh: %3.2f\n", area);
    printf("O perimetro eh: %3.2f\n", perimetro);
    printf("O perimetro em cientifico: %E\n", perimetro);


    return 0;
}
