#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "header.h"

int main()
{       
    struct personne p1;

    char *str;
    char *nom;
    int age;

    p1.prenom = "toto";
    p1.nom = "dupont";
    p1.age = 30;

    str = (char *) malloc(sizeof p1.prenom);
    nom = (char *) malloc(sizeof p1.nom);
    age = malloc(sizeof p1.age);

    strcpy(str, p1.prenom);
    strcpy(nom, p1.nom);
    // nom = p1.nom;
    age = p1.age;

    printf("%s\t%s\t%d\t\n", str, nom,age);

    free(str);
    free(nom);
    // free(age);
    
    printf("Nouveau prénom : \n");
    str = (char *) malloc(sizeof p1.prenom);
    scanf("%s", str);
    printf("Votre nouveau prénom est : %s\n", str);

    return 0;
}