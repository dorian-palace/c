#include <stdio.h>

int largeur()
{
    //génére la largeur du carré à l'aide de scanf 
    // printf("Largeur de votre carré \n");

    int a;
    int i;
    scanf("%d", &a);

    for (i = 0; i < a; i++)
    {
        /* code */
        printf("*");
    }
    

}

int longueur()
{
    //génére la longueur du carré à l'aide de scanf
    int a;
    int i;

    // printf("Longueur de votre carré");
    scanf("%d", &a);

    for ( i = 0; i < a; i++)
    {
        /* code */
        printf("*\n");
    }
    

    
}

int main()
{
    int var = 0;
    largeur();
    longueur();
    largeur();
    longueur();
    return 0;
}