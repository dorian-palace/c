#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_cat(char * filename)
{
    FILE *ptr;

    int num;
    char * result;

    ptr = fopen(filename, "r");
    // fprintf(open, "%d", num);

    if (ptr) {
    while ((num = getc(ptr)) != EOF)
    putchar(num);
    fclose(ptr);
    }

}

int main()
{
    // char * filename = "./Home/Documents/runtrack-dorian/jour10/job03/toto.txt";
    char * filename = "toto.txt";

    my_cat(filename);
    
    return 0;
}