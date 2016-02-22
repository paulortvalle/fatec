#include <stdio.h>
#include <stdlib.h>

int indchrp(char *texto, char l){
    int i;
    for(i=0; i<strlen(texto);i++){
        if (texto[i] == l) return i;
    }
    return -1;
}
