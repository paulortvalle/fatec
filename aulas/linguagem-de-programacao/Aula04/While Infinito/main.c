#include <stdio.h>
#include <stdlib.h>

void main()
{
    char CH='\0';
    while(CH!='q'){
        fflush(stdin);
        CH = getch();
        printf("Letra %c\n",CH);
    }
    system("PAUSE");
}
