#include<stdio.h>
#include<stdlib.h>

/**
 * Écrire une fonction permettant de trier par ordre croissant les valeurs entières 
 * d’un tableau de taille quelconque (transmise en argument). Le tri pourra se faire par
 * réarrangement des valeurs au sein du tableau lui-même
*/

// Une fonction qui permet de remplir le tableau
void remplir_Tab(int *tab, int n){
    for(int i = 0; i < n ; i++){
        scanf("%d",&tab[i]);  // Utiliser %d pour les entiers
    }
}

// Une fonction qui permet d’afficher le tableau.
void Affiche_Tab(int *tab, int n){
    for(int i = 0; i < n ; i++){
        printf("TAB[%d] = %d\n",i,tab[i]);
    }
}

// fonction pour trier dans l'ordre croissante 
void Trie_Tab(int *tab, int n){
    for(int i = 0; i < (n-1) ; i++){
        for(int j = i + 1; j < n; j++){
            if (tab[i] > tab[j]){
                int tmp;
                tmp = tab[j];
                tab[j] = tab[i];
                tab[i] = tmp;
            }
        }
    }
}

int main(){
    printf("Exo 4:\r\n");
    
    int n = 0;
    int *tab;

    printf("Rentre la taille : \n");
    scanf("%d",&n);
    tab = malloc(n * sizeof(int));

    printf("********************Remplire tab ****************\n");
    remplir_Tab(tab, n);

    printf("********************Affiche tab ****************\n");
    Affiche_Tab(tab, n);

    printf("********************Trie tab ****************\n");
    Trie_Tab(tab, n);
    Affiche_Tab(tab, n);

    free(tab);
    return 0;
}
