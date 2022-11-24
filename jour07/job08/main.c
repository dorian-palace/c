#include <stdio.h> 
#include <string.h>

int my_count_word(char *str)
{
    int i,j;
    char count;
    count = ' ';

    for ( i = 0; str[i]; i++)
    {
        if (i == count) {
            printf("tada");
        }
    }

    if(j=1)
    return i;
    else
    return -1;
    
}

int main()
{

    char str[100];
    int n;
    str[100] = "Hello Toto retour le nombre de mot entre les espaces";
    n = my_count_word(str);
    if (n > 1) {
        printf("titi");
    } else {
        printf("nope");
    }
	return 0;    
}