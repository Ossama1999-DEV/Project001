#include<stdio.h>
#include<stdlib.h>

/**
 * Ecrire le programme qui permet de définir un tableau d’entiers, avec un pointeur. 
    Toujours en utilisant les pointeurs, écrire :
    Une fonction qui permet de remplir le tableau
    Une fonction qui permet d’afficher le tableau.
    Une fonction qui permet d’inverser le tableau.
*/

// Une fonction qui permet de remplir le tableau
void remplir_Tab(double *tab, int n){
    for(int i = 0; i < n ; i++){
        scanf("%i",&tab[i]);
    }
}
// Une fonction qui permet d’afficher le tableau.
void Affiche_Tab(double *tab, int n){
    for(int i = 0; i < n ; i++){
        printf("TAB[%d] = %i\n",i,tab[i]);
    }
}
//Une fonction qui permet d’inverser le tableau.
void inverse_Tab(double *tab, int n){
    int debut = 0;
    int fin = n-1;//-debut;
    double tmp = 0;

    while(debut < fin){
        tmp = tab[debut];
        tab[debut] = tab[fin];
        tab[fin] = tmp;
        debut++;
        fin--;
    }
}

int main(){
    int n = 0;
    double *tab;

    printf("Rentre la taille : \n");
    scanf("%d",&n);
    tab = malloc(n * sizeof(double));

    printf("********************Remplire tab ****************\n");
    remplir_Tab(tab,n);

    printf("********************Affiche tab ****************\n");
    Affiche_Tab(tab,n);

    printf("********************Affiche tab ****************\n");
    inverse_Tab(tab,n);
    Affiche_Tab(tab,n);

    free(tab);
    return 0;
}





