#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int count_even_nb(int* nb, int is_even)  
{
    int i;
    int j;
    int odd = 0; 

    for (i = 0; nb[i]; i++){
        
        if ( nb[i] % 2 == 0){
            printf("%d\t",nb[i]);
            is_even++;
        } 
    }


    for (i = 0; nb[i]; i++){
            
        if ( nb[i] % 2 !=0){
            
            printf("%d\t",nb[i]);
            odd++;
        } 
    }

    printf("\n");
    printf(" even : %d\n", is_even);
    printf(" odd : %d\n", odd);

}

int main()
{
    int a = 0;
    int nb[10] = {2,3,4,5,6,7,8,9};
    // printf("%d\n", &nb[1]);
    int even = 0;
    int odd = 0;
    int res = count_even_nb(nb, a);
    // int a = 10;

    if (res == 1){
        even++;
        printf("%d\n", even);
    } else if ( res == 0){
        odd++;
        printf("%d\n", odd);
    }

	return 0;    
}