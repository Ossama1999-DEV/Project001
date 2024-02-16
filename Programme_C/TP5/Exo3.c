#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Exercice 3 :
 * Ecrire un programme C qui définit une structure etudiant où un étudiant est représenté
 * par son nom, son prénom et une note. Lit ensuite une liste d'étudiants entrée par
 * l'utilisateur et affiche les noms de tous les étudiants ayant une note supérieure ou
 * égale à 10 sur 20.
 */

typedef struct Etudiant {
    char *prenom;
    char *nom;
    int note;
} Etud;

int main() {

    Etud etudiants[10] = {
        {"Oussama", "Dbibih", 20},
        {"Colin", "Iza", 11},
        {"Prof", "Cool", 8},
        {"Homa", "Laarbi", 14},
        {"Huss", "lenfoire", 17},
        {"TotoELGrandE", "Taha", 8},
        {"Marco", "Pablo", 14},
        {"Polo", "Como", 19},
        {"sodo", "Sixi", 7},
        {"Samumuray", "Assassin", 13}
    };

    printf("Etudiant avec une note superieure ou egale a 10 :\n");

    for (int i = 0; i < 10; i++) {
        if (etudiants[i].note >= 10) {
            printf("%s\t%s\n", etudiants[i].prenom, etudiants[i].nom);
        }
    }

    return 0;
}
