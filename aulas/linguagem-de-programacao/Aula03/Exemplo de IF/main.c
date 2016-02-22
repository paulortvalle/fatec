#include <stdio.h>
#include <stdlib.h>

void main()
{

    int x = 0;
    if (x){
        printf("Executei o if\n");
    }else{
        printf("Executei o else\n");
    }

    x = 97;
    if (x%2){
        printf("Executei o if\n");
    }else{
        printf("Executei o else\n");
    }

    x = 98%2*4;
    if (x){
        printf("Executei o if\n");
    }else{
        printf("Executei o else\n");
    }
}
