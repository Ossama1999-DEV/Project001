#include <stdio.h>

// Fonction pour remplir un tableau d'entiers
void remplirTableau(int tableau[], int taille) {
    printf("Remplissage du tableau:\n");
    for (int i = 0; i < taille; i++) {
        printf("Entrez la valeur à la position %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }
}

// Fonction pour afficher un tableau
void afficherTableau(int tableau[], int taille) {
    printf("Tableau: ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Fonction pour calculer le maximum d'un tableau
int calculerMax(int tableau[], int taille) {
    int max = tableau[0];
    for (int i = 1; i < taille; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    return max;
}

// Fonction pour afficher le minimum d'un tableau
void afficherMin(int tableau[], int taille) {
    int min = tableau[0];
    for (int i = 1; i < taille; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }
    printf("Minimum du tableau: %d\n", min);
}

// Fonction pour calculer la somme d'un tableau
int calculerSomme(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}

// Fonction pour changer la valeur à une position donnée dans le tableau
void changerValeur(int tableau[], int taille) {
    int position, nouvelleValeur;
    printf("Entrez la position à changer (1 à %d) : ", taille);
    scanf("%d", &position);
    printf("Entrez la nouvelle valeur : ");
    scanf("%d", &nouvelleValeur);

    if (position >= 1 && position <= taille) {
        tableau[position - 1] = nouvelleValeur;
        printf("Valeur modifiée avec succès.\n");
    } else {
        printf("Position invalide.\n");
    }
}

// Fonction pour ajouter un numéro à la fin du tableau
void ajouterNumero(int tableau[], int *taille, int numero) {
    tableau[*taille] = numero;
    (*taille)++;
}

double calculerMoyenne(int tableau[], int taille) {
    if (taille == 0) {
        printf("Erreur : le tableau est vide.\n");
        return 0.0;
    }

    int somme = calculerSomme(tableau, taille);
    return (double)somme / taille;
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    int tableau[taille];

    remplirTableau(tableau, taille);
    afficherTableau(tableau, taille);

    printf("Maximum du tableau : %d\n", calculerMax(tableau, taille));
    afficherMin(tableau, taille);
    printf("Somme du tableau : %d\n", calculerSomme(tableau, taille));

    printf("Moyenne du tableau : %.2f\n", calculerMoyenne(tableau, taille));

    changerValeur(tableau, taille);
    afficherTableau(tableau, taille);

    int numero;
    printf("Entrez le numéro à ajouter à la fin du tableau : ");
    scanf("%d", &numero);
    ajouterNumero(tableau, &taille, numero);
    afficherTableau(tableau, taille);

    return 0;
}
