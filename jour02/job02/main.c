
#include <stdio.h>

void my_mul()
{
    int a;
    int b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b);

    result = a * b; 

    printf("%d", result);
}

void my_add()
{
    int a;
    int b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b);

    result = a + b; 

    printf("%d", result); 
}

void my_sub()
{
    int a;
    int b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b);

    result = a - b; 

    printf("%d", result);
}

void my_div()
{
    int a;
    int b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b);

    result = a / b; 

    printf("%d", result);
}

void my_mod()
{
    int a;
    int b;
    int result;

    scanf("%d", &a);
    scanf("%d", &b);

    result = a % b; 

    printf("%d", result);
}

int main()
{   
    my_mul();
    my_add();
    my_sub();
    my_div();
    my_mod;
    return 0;
}