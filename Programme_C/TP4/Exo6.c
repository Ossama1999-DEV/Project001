#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
Exercice 6 :
Ecrire un programme qui supprime la première occurrence d’une chaine de caractère 
OBJ dans une chaine SUJ.
*/
#define TAILLE 100

int main() {
    printf("Exo 6:\r\n");

    char OBJ[] = "Hello";
    char SUJ[] = "HEllo";

    printf("Avant supp:\n");
    printf("OBJ: %s\n", OBJ);
    printf("SUJ: %s\n", SUJ);

    char *pos = strstr(SUJ, OBJ);//recherche la première occurrence d'une sous-chaîne

    if (pos != NULL) {
        size_t tailleRestante = strlen(pos + strlen(OBJ));
        memmove(pos, pos + strlen(OBJ), tailleRestante + 1);
    }

    printf("Aprrs supp:\n");
    printf("SUJ: %s\n", SUJ);

    return 0;
}
