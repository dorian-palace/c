#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int my_even_odd(int* nb)  
{
    int i,j,x,y;
    int emptyArray[10];
    int odd = 0; 
    
    int even = 0;
    for (i = 0; nb[i]; i++){
        
        if ( nb[i] % 2 == 0){
            // printf("%d\t",nb[i]);
            even++;
            x = nb[i];
            printf("%d\t",x);
        } 
    }
    printf("\n");

    for (i = 0; nb[i]; i++){
            
        if ( nb[i] % 2 !=0){
            
            // printf("%d\t",nb[i]);
            odd++;
            x = nb[i];
            printf("%d\t",x);
        } 
    }
    printf("\n");
}

int main()
{
    int intArray [10] = {1,2,3,4,5,6,7,8,9};

    my_even_odd(intArray);
    return 0;
}