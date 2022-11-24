#include <stdio.h> 
#include <string.h>

int my_count_word(char *str)
{
    int i,j;
    char count;
    count = 0;

    for ( i = 0; str[i]; i++)
    {
        if (str[i] == ' ') {
            count ++;
            // printf("tada");
        }
    }
        printf("space = %d", count);

    if(j=1)
    return i;
    else
    return -1;
    
}

int main()
{

    // char str[100];
    int n;
    char str[100] = "Hello Toto ret o u r  l e n o mb re de mot entre les espaces";
    my_count_word(str);
    // if (n > 1) {
    //     printf("titi");
    // } else {
    //     printf("nope");
    // }
	return 0;    
}