#include <stdio.h>

#include "HAlib.h"

int main(void)
{
    fprintf(stdout, "Type something: ");
    while (HA_skipLine(stdin) != EOF)
        ;
    fprintf(stdout, "\nEOF occured!");
    
    return 0;
}