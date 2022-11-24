#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int min(int*, int);
int max(int*, int);

int main()
{
    int myArray[] = {10, 22 ,1 ,25 ,85 ,12 ,35 ,264 ,145};
    
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int minSize = min(myArray, size);
    int maxSize = max(myArray, size);
    
    printf("max : %d\n", maxSize);
    printf("min : %d\n", minSize);
    return 0;
}

int min(int* array, int size)
{
    int result = 0;

    for(int x = 0; x < size; x++) if (*(array + x) < result) result = *(array +x);
    
    return result;
}

int max(int* array, int size)
{
    int result = 0;

    for(int x = 0; x < size; x++) if (*(array + x) > result) result = *(array +x);

    return result;

}