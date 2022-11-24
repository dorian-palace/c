#include <stdlib.h>
#include <stdio.h>

int my_read()
{

  char *line = NULL;

  size_t len = 0;

  ssize_t lineSize = 0;

  lineSize = getline(&line, &len, stdin);

  printf("Vous avez taper %s, qui a %zu chars.\n", line, lineSize -1);

  free(line);
}

int main()
{

    printf("Test : \n");
    scanf("%d");
    my_read();
    return 0;
}