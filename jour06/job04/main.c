#include <stdio.h>
#include <stdlib.h> 

int main(int x, char *y[])

{
    x--; 
    y++;

    int c = 0;
    int i, j;


    c += atoi(*y);
    x--;

    for (i = 1; i <= c; i++){
        printf("*");
        for(j = 1; j <= x; j++){
            printf("*\n");
            if (i == 1 || i == c || j == 1 || j == x){
                // printf("%c\n*%c*", i,j);
                printf("%c*", i);
                printf("%c*", j);
            }else{
                printf("a");
            }
             
            // printf("\n");
        }
    }

        
        
    

    // printf("* %d", c);

    return 0;
}   