#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    char ch;

    for (i=1;;i++){
        fflush(stdin);
        ch = getch();
        if (ch == 'X') break;
        printf("\n Letra %c",ch);
    }
    printf("\n");
    system("PAUSE");
}
