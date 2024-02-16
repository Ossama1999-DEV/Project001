#include <stdio.h>
#include <stdlib.h>

// Définition des structures
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};

// Fonction pour initialiser une pile
Pile* initialiser()
{
    Pile *pile = malloc(sizeof(*pile));
    if (pile != NULL)
    {
        pile->premier = NULL;
    }
    return pile;
}

// Fonction pour empiler
void empiler(Pile *pile, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile != NULL && nouveau != NULL)
    {
        nouveau->nombre = nvNombre;
        nouveau->suivant = pile->premier;
        pile->premier = nouveau;
    }
    else
    {
        // stderr: C'est un pointeur vers le flux d'erreur standard
        fprintf(stderr, "Erreur lors de l'ajout d'un élément à la pile\n");
        // EXIT_FAILURE : These values may be used as exit status codes.
        exit(EXIT_FAILURE);
    }
}

// Fonction pour depiler
int depiler(Pile *pile)
{
    int nombreDepile = 0;
    if (pile != NULL && pile->premier != NULL)
    {
        Element *elementDepile = pile->premier;
        nombreDepile = elementDepile->nombre;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }
    return nombreDepile;
}

// Fonction pour afficher
void afficherPile(Pile *pile)
{
    Element *actuel = pile->premier;
    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("\n");
}

int main(){
    
    Pile *maPile = initialiser();
    empiler(maPile, 4);
    empiler(maPile, 8);
    empiler(maPile, 15);
    empiler(maPile, 16);
    empiler(maPile, 23);
    empiler(maPile, 42);
    printf("\nEtat de la pile :\n");
    afficherPile(maPile);
    printf("Je depile %d\n", depiler(maPile));
    printf("Je depile %d\n", depiler(maPile));
    printf("\nEtat de la pile :\n");
    afficherPile(maPile);

    // memoire libere 
    free(maPile);

    return 0;
}
