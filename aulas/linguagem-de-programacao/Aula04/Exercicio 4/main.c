#include <stdio.h>
#include <stdlib.h>

void main()
{
    int opt;
    do{

        printf("Digite uma opcao (1: C->F; 2:F->C; 3:Sair): ");
        fflush(stdin);
        scanf("%d",&opt);

        if (opt==1){
            float cel;
            float fh;
            for (cel=0; cel<=100; cel++){
                fh = (cel*1.8)+32;
                printf("%3.0f C = %3.1f F | ",cel,fh);
                if ((int)cel%3==0){
                    printf("\n");
                }
            }
        }

        if (opt==2){
            float cel;
            float fh;
            for (fh=0; fh<=100; fh++){
                cel = (fh-32)/1.8;
                printf("%3.0f F = %3.1f C | ",fh,cel);
                if ((int)fh%3==0){
                    printf("\n");
                }
            }
        }

    }while(opt>=1 && opt<=2);
}
