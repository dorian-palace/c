#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int my_write_char(char *c)
{
    for (char c = 'A' ; c <= 'Z' ; c++) {
        write(STDOUT_FILENO, &c, 1);
    }
}

int main()
{
    
    my_write_char('t');
    return 0;
}