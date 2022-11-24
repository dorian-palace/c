#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int is_even(int a)
{
    printf("%d\n",a);

    if ( a % 2 == 0 ){
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int a;
    // int a = 10;
    printf("Impaire ou non ?\n entre un int : \n");
    scanf("%d",&a);
    int n;
    n = is_even(a);

    if (n == 1){
        printf("entier\n");
    } else if (n == 0){
        printf("impair\n");
    }
	return 0;    
}