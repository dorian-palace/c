#include <stdio.h>
#include <string.h>

//void my_putchar();

void my_putchar()
{
   // char c[10];
    char toto[10] = {'t','o','t','o','\0'};      

    printf("%s \n",toto);    
}

void my_puststr()
{
    char myStr[10];

    strcpy(myStr,"hello");
    printf("%s \n", myStr);
}


// int main()
// {
//     my_putchar();
//     my_puststr();
//     return 0;
// }

