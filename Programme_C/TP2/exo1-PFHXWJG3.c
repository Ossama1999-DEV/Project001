/*
Exercice 1 : Ecrire un programme qui lit la dimension N d'un tableau T du 
type int (dimension maximale : 50 composantes), remplit le tableau par des valeurs 
entrées au clavier et affiche le tableau. Calculer et afficher ensuite la somme des 
éléments du tableau.
*/
#include <stdio.h>
#include <math.h>


#define taille 50 

int main() {

    int tab[taille];

    printf("La gtaille du tableu = %d \n",taille);
    printf("Remplire le tab avec des entier tapez '0' pour arreter : \n");

    for(int i = 0; i <= taille ; i++){
        scanf("%d",&tab[i]);
        if(tab[i] == 0){
            break;
        }
    }

    printf("Afficher le tab des entier : \n");
    for(int i = 0; i< taille; i++){
        if(tab[i] == 0){
            break;
        }
        printf("tab[%d] = %d\n",i,tab[i]);

    }

    // la somme 
    int somme = 0;
    for(int i = 0; i< taille; i++){
        if(tab[i] == 0){
            break;
        }
        somme = tab[i] + somme;
    }
    printf("La somme = %d\n",somme);

    return 0;
}
