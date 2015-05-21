#include <stdio.h>
#include <stdlib.h>
#include "pseudoanagrama.h"

int main(int argc, char *argv[])
{   char *string1=argv[1];
    char *string2=argv[2];

    if ((error(argc))==0)
        return 0;
    printf("\n\nPalabras introducidas: \"%s\" y \"%s\"\n\n",argv[1],argv[2]);
    solution((compare(string1,string2))&&(strcmp(string1,string2)));

return 0;
}


