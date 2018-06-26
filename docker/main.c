#include <stdio.h>
#include <stdlib.h>

/**
 * main: Gets enviroment var NAME and prints
 */

int main()
{
    char* NAME = getenv("NAME");
    printf("Hello %s\n",(NAME != NULL) ? NAME : "World!");
    return (0);
}

