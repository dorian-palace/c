#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


    //Aujourd’hui c’est pointeur. Le but de ce premier exercice est d’afficher les
    // adresses mémoires en hexadécimale des variables :

int main()
{

    int a=0;
    char b='B';
    char c[12]="bonjour toi\n";

    int *test=&a;
 
    printf("test   = 0x%p = (déc)%" PRIuPTR "\n", test, (uintptr_t) test);

    // printf("0x%p", PRIuPTR "\n" &a);

    return 0;
}