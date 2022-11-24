#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int write_to_file(char * filename, char * content)
{
    FILE *ptr;

    int num;
    char * result;

    ptr = fopen(filename, "w+");

    if (ptr) {
        
        fprintf(ptr,"%s", content);
    // while ((num = getc(ptr)) != EOF)
    // putchar(num);
    // fclose(ptr);
    }

}

int main()
{
    // char * filename = "./Home/Documents/runtrack-dorian/jour10/job03/toto.txt";
    char * filename = "toto.txt";
    char * content = "content de txt";

    write_to_file(filename, content);
    
    return 0;
}