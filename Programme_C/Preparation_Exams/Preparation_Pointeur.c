#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 10

// Fonction pour remplir un tableau de caractères
void remplirTableau(char tableau[], int taille) {
    printf("Remplissage du tableau de caractères:\n");
    for (int i = 0; i < taille; i++) {
        printf("Entrez la valeur à la position %d : ", i + 1);
        scanf(" %c", &tableau[i]);
    }
}

// Fonction pour afficher un tableau de caractères
void afficherTableau(char tableau[], int taille) {
    printf("Tableau de caractères:\n");
    for (int i = 0; i < taille; i++) {
        printf("%c ", tableau[i]);
    }
    printf("\n");
}

// Fonction pour redemander à l'utilisateur de remplir le tableau et copier les valeurs
void remplirEtCopierTableaux(char tableau1[], char tableau2[], char tableauResultat[], int taille) {
    printf("Remplissage du tableau et copie des valeurs :\n");
    for (int i = 0; i < taille; i++) {
        printf("Entrez la valeur à la position %d du premier tableau : ", i + 1);
        scanf(" %c", &tableau1[i]);

        printf("Entrez la valeur à la position %d du deuxième tableau : ", i + 1);
        scanf(" %c", &tableau2[i]);

        // Copie des valeurs dans le tableau résultat
        tableauResultat[i * 2] = tableau1[i];
        tableauResultat[i * 2 + 1] = tableau2[i];
    }
}

// Fonction pour calculer la longueur d'un tableau de caractères
int calculerLongueurTableau(char tableau[]) {
    return strlen(tableau);
}

int main() {
    char tableau1[MAX_SIZE];
    char tableau2[MAX_SIZE];
    char tableauResultat[MAX_SIZE * 2];

    // Remplissage du premier tableau
    remplirTableau(tableau1, MAX_SIZE);

    // Affichage du premier tableau
    printf("Premier ");
    afficherTableau(tableau1, MAX_SIZE);

    // Redemander à l'utilisateur de remplir les tableaux et copier les valeurs
    remplirEtCopierTableaux(tableau1, tableau2, tableauResultat, MAX_SIZE);

    // Affichage du tableau résultat
    printf("Tableau résultat :\n");
    afficherTableau(tableauResultat, MAX_SIZE * 2);

    // Calcul de la longueur du tableau résultat
    printf("Longueur du tableau résultat : %d\n", calculerLongueurTableau(tableauResultat));

    return 0;
}
