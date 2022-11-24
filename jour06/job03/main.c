#include <stdio.h>
#include <stdlib.h> 

int main(int a, char *b[])

{
    a--; 
    b++;

    int c = 0;

    while( a!= 0){
        c += atoi(*b++);
        a--;
    }

    printf("%d", c);

    return 0;
}