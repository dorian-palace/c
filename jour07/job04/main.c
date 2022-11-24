#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strtolower(char str[])
{
    int i;
    int len = 0;
    len = strlen(str);

    for (i = 0; i<len; i++){
        str[i]=tolower(str[i]);
        printf("%c",str[i]);    
    }
}

int main()
{
    char str[] = "toto TOTO toto";
    my_strtolower(str);
    return 0;
}
