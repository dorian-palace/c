#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int sort_numbers(int* nb, int asc)  
{
    int i,j,t;

    for (i = 0; nb[i]; i++){

        if (asc == 1) {

            printf("%d\n", nb[i]);
            //print ASC order
        }
    }
    printf("\n");

    for (i = 0; nb[i]; i++){

        if (asc == 0) {

            for (j = i +1; nb[j]; j++){

                if (nb[i] < nb[j]) {
                    t = nb[i];
                    nb[i] = nb[j];
                    nb[j] = t;

                }
            }
                    printf("%d\t", nb[i]);
        }

    }
    printf("\n");

}

int main()
{
    int intArray [10] = {1,2,3,4,5,6,7,8,9};
    int asc;
    printf("1 Order ASC // 0 oRDER BY DESC : \n");
    scanf("%d", &asc);
    // printf("%d\n", asc);

    sort_numbers(intArray, asc);
    return 0;
}