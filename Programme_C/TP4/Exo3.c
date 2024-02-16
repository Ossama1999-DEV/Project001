#include<stdio.h>
#include<stdlib.h>

/**
 * Ecrire le programme qui permet de définir un tableau d’entiers, avec un pointeur. 
    Toujours en utilisant les pointeurs, écrire :
    Une fonction qui permet de remplir le tableau
    Une fonction qui permet d’afficher le tableau.
    Une fonction qui permet d’inverser le tableau.
*/

#define taille 10

int n = 0;
int *tab;

// Une fonction qui permet de remplir le tableau
void RempliTab(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
}

// Une fonction qui permet d’afficher le tableau.
void afficher_Tab(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("TAB[%d] = %d\n", i, tab[i]);
    }
}

// Une fonction qui permet d’inverser le tableau.
void inverser_Tab(int *tab, int n) {
    int debut = 0;
    int fin = n - 1;

    while (debut < fin) {
        int temp = tab[debut];
        tab[debut] = tab[fin];
        tab[fin] = temp;

        debut++;
        fin--;
    }
}

int main() {
    printf("Exo 3:\r\n");

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    tab = (int *)malloc(n * sizeof(int));

    //On peut esseyer de veriffier que lallocation est faite 

    printf("\n************Remplir :*******************\n");
    RempliTab(tab, n);
    
    printf("\n************Affiche :*******************\n");
    afficher_Tab(tab, n);

    inverser_Tab(tab, n);
    printf("\n************inversion :*******************\n");
    afficher_Tab(tab, n);

    free(tab);

    return 0;
}
