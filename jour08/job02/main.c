#include <stdio.h> 
#include <string.h>

int my_write_char(char** str)
{
    int i;
    // int len = strlen(str);
    // len = la taille de str

    for (i = 0; i < str; i++){
        //parcours la length
        printf("%s\n", str[i]);
        // printf("%s", str);
        //print chaque char
    }

}

int main()
{

    // char str[100];
    int n;
    char** str[100] = {"toto",
                    "tata",
                    "wrold"};

    my_write_char(str);
	return 0;    
}