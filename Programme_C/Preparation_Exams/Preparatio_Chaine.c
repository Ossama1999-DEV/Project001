#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50
#define MAX_ARRAY_SIZE 5

// Fonction pour remplir un tableau de chaînes de caractères
void remplirTableauChaines(char tableau[][MAX_STR_LEN], int taille) {
    printf("Remplissage du tableau de chaînes de caractères:\n");
    for (int i = 0; i < taille; i++) {
        printf("Entrez la chaîne de caractères à la position %d : ", i + 1);
        scanf("%s", tableau[i]);
    }
}

// Fonction pour afficher un tableau de chaînes de caractères
void afficherTableauChaines(char tableau[][MAX_STR_LEN], int taille) {
    printf("Tableau de chaînes de caractères:\n");
    for (int i = 0; i < taille; i++) {
        printf("%d: %s\n", i + 1, tableau[i]);
        getchar();
    }
}

// Fonction pour calculer la longueur (strlen) d'une chaîne de caractères
int calculerLongueurChaine(char *chaine) {
    return strlen(chaine);
}

// Fonction pour changer la valeur à une position donnée dans le tableau de chaînes
void changerValeurChaine(char tableau[][MAX_STR_LEN], int taille) {
    int position;
    printf("Entrez la position à changer (1 à %d) : ", taille);
    scanf("%d", &position);

    if (position >= 1 && position <= taille) {
        printf("Entrez la nouvelle chaîne de caractères : ");
        scanf("%s", tableau[position - 1]);
        printf("Valeur modifiée avec succès.\n");
    } else {
        printf("Position invalide.\n");
    }
}

// Fonction pour ajouter une autre chaîne de caractères à la fin du tableau
void ajouterChaineFinTableau(char tableau[][MAX_STR_LEN], int *taille) {
    if (*taille < MAX_ARRAY_SIZE) {
        printf("Entrez la nouvelle chaîne de caractères à ajouter : ");
        scanf("%s", tableau[*taille]);
        (*taille)++;
        printf("Chaîne ajoutée avec succès.\n");
    } else {
        printf("Le tableau est plein. Impossible d'ajouter une nouvelle chaîne.\n");
    }
}

int main() {
    char tableauChaines[MAX_ARRAY_SIZE][MAX_STR_LEN];
    int taille = 0;

    // Remplissage du tableau de chaînes
    remplirTableauChaines(tableauChaines, MAX_ARRAY_SIZE);

    // Affichage du tableau de chaînes
    afficherTableauChaines(tableauChaines, MAX_ARRAY_SIZE);

    // Calcul de la longueur d'une chaîne du tableau
    int positionLongueur;
    printf("Entrez la position de la chaîne pour calculer sa longueur (1 à %d) : ", MAX_ARRAY_SIZE);
    scanf("%d", &positionLongueur);
    if (positionLongueur >= 1 && positionLongueur <= MAX_ARRAY_SIZE) {
        printf("Longueur de la chaîne à la position %d : %d\n", positionLongueur,
               calculerLongueurChaine(tableauChaines[positionLongueur - 1]));
    } else {
        printf("Position invalide.\n");
    }

    // Changer la valeur à une position donnée dans le tableau de chaînes
    changerValeurChaine(tableauChaines, MAX_ARRAY_SIZE);
    afficherTableauChaines(tableauChaines, MAX_ARRAY_SIZE);

    // Ajouter une autre chaîne de caractères à la fin du tableau
    ajouterChaineFinTableau(tableauChaines, &taille);
    afficherTableauChaines(tableauChaines, MAX_ARRAY_SIZE);

    return 0;
}
