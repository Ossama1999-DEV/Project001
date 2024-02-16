#include <stdio.h>
#include <string.h>

/*
 * Exercice 4 :
 * Ecrire un programme C, qui lit les noms complets des étudiants et leurs moyennes
 * dans un tableau de structures. Puis actualise ces moyennes en ajoutant un bonus de :
 * 1 point pour les étudiants ayant une note strictement inférieure à 10.
 * 0.5 point pour les étudiants ayant une note entre 10 et 15 incluses.
 * N.B.: la structure doit avoir deux éléments : une chaîne de caractères et un réel.
*/

typedef struct Etudiant {
    char nom[100]; // Changer la déclaration de la chaîne pour avoir une taille fixe
    float moyennes; // Utiliser un type float pour les moyennes
} Etud;

void remplir_Tab(Etud *etudiants, int n) {
    Etud etudiants_local[10] = {
        {"Oussama Dbibih", 20},
        {"Oussama Bobo", 14},
        {"Oussama Jako", 10},
        {"Oussama Jako", 11}
    };
    memcpy(etudiants, etudiants_local, sizeof(etudiants_local));
    n = 4; // Mettre à jour la taille réelle du tableau
}

void Affiche_Tab(Etud *etudiants, int n) {
    for (int i = 0; i < n; i++) {
        if (etudiants[i].moyennes <= 10) {
            printf("Nom Prenom : %s\t Note : %.1f\n", etudiants[i].nom, etudiants[i].moyennes);
        }
    }
    for (int i = 0; i < n; i++) {
        if (etudiants[i].moyennes >= 10 && etudiants[i].moyennes <= 15) {
            printf("Nom Prenom : %s\t Note : %.1f\n", etudiants[i].nom, etudiants[i].moyennes);
        }
    }
}

void Add_Bonus(Etud *etudiants, int n) {
    for (int i = 0; i < n; i++) {
        if (etudiants[i].moyennes <= 10) {
            etudiants[i].moyennes += 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (etudiants[i].moyennes >= 10 && etudiants[i].moyennes <= 15) {
            etudiants[i].moyennes += 0.5;
        }
    }
}

int main() {
    Etud etudiants[10];
    int n = 0;

    // Remplir le tableau
    remplir_Tab(etudiants, n);

    printf("Etudiants avant ajout de bonus :\n");
    Affiche_Tab(etudiants, n);

    // Ajouter les bonus
    Add_Bonus(etudiants, n);

    printf("\nEtudiants apres ajout de bonus :\n");
    Affiche_Tab(etudiants, n);

    return 0;
}
