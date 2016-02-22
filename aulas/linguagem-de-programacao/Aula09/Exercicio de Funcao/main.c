#include <stdio.h>
#include <stdlib.h>

int maior(int x, int y){
    if (x>y){
        return x;
    } else {
        return y;
    }
}

int is_Triangulo(int x, int y, int z){
    if (x+y<z) return 0;
    if (x+z<y) return 0;
    if (z+y<x) return 0;
    return 1;
}

void main()
{
    printf("%d\n",maior(7,9));
    printf("%d\n",is_Triangulo(90,45,46));
}
