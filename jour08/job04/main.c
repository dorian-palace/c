#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int my_freetab(char* tab)
{
    // int * entier;   
    // entier = malloc(sizeof(tab));
    // printf("%d", entier);

    tab = malloc(sizeof(10));

    int i;
  
    
    if (tab != NULL){
        

        free(tab);  
        tab = NULL;
        printf("vide");
    } else{
        printf("true");
    }

}

int main()
{

    char str[100] = "Ceci est une string";

    my_freetab(str);
	return 0;    
}