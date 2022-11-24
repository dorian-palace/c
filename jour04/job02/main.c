#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main()
{

    int a=1;
    int b=3;

    int *pointeur;

    int *ptr;

    pointeur = &a;
    ptr = &b;

    printf("a + b = %d\n", *pointeur + *ptr);
    return 0;
}