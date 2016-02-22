#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* Durante uma corrida de automóveis com N voltas (onde 0 < N < 15)
    de duração foram anotados, para um piloto, na ordem, os tempos
    registrados em cada volta. Fazer um programa em C para ler os
    tempos das N voltas. Calcular e imprimir: a) melhor tempo; b) a volta
    em que o melhor tempo ocorreu; c) tempo médio das N voltas. */

    int voltas;

    do {
        printf("Digite o numero de voltas para o sistema: ");
        scanf("%d",&voltas);
    } while (voltas <= 0 || voltas > 15);

    int i, melhor_volta;
    float tempo, melhor_tempo, media_tempo;

    for (i=1; i<=voltas; i++){
        do {
            printf("Digite o tempo da volta %d: ", i);
            scanf("%f",&tempo);
        } while (tempo <= 0);

        if (i==1){
            melhor_volta = i;
            melhor_tempo = tempo;
        } else {
            if (melhor_tempo > tempo){
                melhor_volta = i;
                melhor_tempo = tempo;
            }
        }

        media_tempo += tempo;
    }

    media_tempo /= voltas;

    printf("O melhor resultado foi na volta %d com o tempo de %0.2f\n",melhor_volta,melhor_tempo);
    printf("A media de tempo das %d voltas foi de %0.2f",voltas,media_tempo);

}
