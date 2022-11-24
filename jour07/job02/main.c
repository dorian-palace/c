#include <stdio.h>
#include <string.h>

int my_write_char(char* str)
{
    int i;
    int len = strlen(str);
    // len = la taille de str

    for (i = 0; i < len; i++){
        //parcours la length
        
        printf("%c", str[i]);
        //print chaque char
    }

}

int main()
{
    char str[] = {'a', 'e', 'k'};
    my_write_char(str);
  
    return 0;
}