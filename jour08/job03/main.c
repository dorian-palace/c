#include <stdio.h> 
#include <string.h>

int my_strtok(char* str)
{
    int i;
    
    for (i = 0; str[i]; i++){
        char toArray = str[i];
        printf("%c\n", toArray);
    }

}

int main()
{

    char str[100] = "Ceci est une string";

    my_strtok(str);
	return 0;    
}