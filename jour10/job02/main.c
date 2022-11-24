#include <stdlib.h>
#include <stdio.h>

int my_puterror(char * str)
{
    fprintf(stderr,"%s", str);
}

int main()
{

    char * str = "toto";
    my_puterror(str);
    return 0;
}