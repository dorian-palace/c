 #include <stdio.h> 
#include <string.h>

int my_epur(char *str)
{
    int i,j;
    char res[100];

    while (str[i] != '\0')
    {
        if ((str[i] == ' ' && str[i+1] == ' ') != 1) {
        res[j] = str[i];
        j++;
         }
      i++;
    }  
    res[j] = '\0';
    printf("%s", res);
}

int main()
{

    char str[] = "Salut    le      s devs !";
    my_epur(str);

	return 0; 
     
}