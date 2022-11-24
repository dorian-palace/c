#include <stdio.h> 
#include <string.h>

int my_strstr(char *str, char *search)
{
    int i,j;

    for ( i = 0; str[i]; i++)
    {
        /* code */
        if(str[i] == search){
            j=1;
            break;
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
    char search;
    int result;

     
    printf("Enter  the string : ");
    gets(str);
    printf("Enter character to be searched: ");
    search=getchar();
    result = my_strstr(str, search);
    
    if(result > 1){
        printf("car %c first %d", search, result);
    } else {
        printf("rien");
    }

	return 0;    
}