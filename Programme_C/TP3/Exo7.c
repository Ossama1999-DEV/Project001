#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/**
 * a. Dans un programme principal, déclarer un tableau de 10 entiers.
    b. Initialiser le tableau avec des valeurs aléatoires comprises entre 0 et 20.
    c. Implémenter et tester à chaque fois les fonctions suivantes :
        o Fonction afficher qui permet d'afficher les éléments du tableau.
        o Fonction calculerMoyenne qui permet de calculer la moyenne des 
        éléments du tableau.
        o Fonction trouverMin qui permet de trouver la valeur minimum du 
        tableau.
        o Fonction inverserTableau qui inverse les éléments du tableau 
        (penser _a une variante qui n'utilise pas de tableau supplémentaire).
*/

#define taille 20

void afficher(int TAB[taille]) {
    srand(time(NULL));

    for (int i = 0; i < taille; i++) {
        TAB[i] = rand() % 20;
    }

    for (int i = 0; i < taille; i++) {
        printf("TAB[%d] = %d\n", i, TAB[i]);
    }
}

float calculerMoyenne(int TAB[taille]) {
    float moyenne = 0;

    for (int i = 0; i < taille; i++) {
        moyenne += TAB[i];
    }

    moyenne /= taille;
    return moyenne;
}

int trouverMax(int TAB[taille]) {
    int Max = TAB[0];

    for (int i = 1; i < taille; i++) {
        if (Max <= TAB[i]) {
            Max = TAB[i];
        }
    }

    return Max;
}

int trouverMin(int TAB[taille]) {
    int Min = TAB[0];

    for (int i = 1; i < taille; i++) {
        if (TAB[i] < Min) {
            Min = TAB[i];
        }
    }

    return Min;
}

void inverserTableau(int TAB[taille]) {
    int debut = 0;
    int fin = taille - 1;

    while (debut < fin) {
        int temp = TAB[debut];
        TAB[debut] = TAB[fin];
        TAB[fin] = temp;

        debut++;
        fin--;
    }
}

int main() {
    int TAB[taille];
    afficher(TAB);
    printf("Moyenne = %f\n", calculerMoyenne(TAB));
    printf("Max dans mon TAB est : %d\n", trouverMax(TAB));
    printf("Min dans mon TAB est : %d\n", trouverMin(TAB));
    printf("Inversion : \n");
    inverserTableau(TAB);
    for (int i = 0; i < taille; i++) {
        printf("TAB[%d] = %d\n", i, TAB[i]);
    }

    return 0;
}
