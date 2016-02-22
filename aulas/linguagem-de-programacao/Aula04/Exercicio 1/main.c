#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,ra,pa=0;
    do{
        printf("Digite a razao da PA (entre -100 e 1000):");
        scanf("%d",&ra);
    }while((ra<=-100 || ra>=1000));

    for(i=0;i<=10;i++){
        printf("%2d : %d\n",i,pa);
        pa+=ra; // comando de soma composta
    }

}
