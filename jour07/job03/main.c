#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_ucfirst(char str[])
{
    int i;
    int len = 0;
    len = strlen(str);

    for (i = 0; i<len; i++){

        if(i == 0 || str[i] == 0) { 

        str[0]=toupper(str[0]);
        printf("%c",str[0]);
        } else {
            printf("%c", str[i]);
        }
        
    }#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_ucfirst(char str[])
{
    int i;
    int len = 0;
    len = strlen(str);

    for (i = 0; i<len; i++){

        if(i == 1 && str[i] == 1) { 

         str[1]=toupper(str[1]);
        printf("%c",str[1]);
        } else {
            printf("%c", str[i]);
        }
        
    }
}

int main()
{
    char str[] = "toto toto";
    my_ucfirst(str);
    return 0;
}
}

int main()
{
    char str[] = "toto toto";
    my_ucfirst(str);
    return 0;
}