/*
Exercice 2 : 
Ecrire un programme qui lit la dimension N d'un tableau T du 
type int (dimension maximale : 50 composantes), 
remplit le tableau par des valeurs 
entrées au clavier et affiche le tableau.

Copiez ensuite toutes les composantes strictement positives
dans un deuxième tableau TPOS et toutes les valeurs strictement 
négatives dans un troisième tableau TNEG. 

Afficher les tableaux TPOS et TNEG.
*/
#include <stdio.h>
#include <math.h>

#define taille 50 

int main() {
    
    // init
    int tab[taille];
    printf("La gtaille du tableu = %d \n",taille);
    printf("Remplire le tab avec des entier tapez '0' pour arreter : \n");

    for(int i = 0; i <= taille ; i++){
        scanf( "%d",&tab[i]);
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

    // partie 2
    int TNEG[taille], TPOS[taille];
    // negative
    printf("Afficher le TNEG des entier negative  : \n");
    for(int i = 0; i< taille; i++){
        if(tab[i] == 0){
            break;
        }
        else if(tab[i] < 0){
            TNEG[i] = tab[i];
        }
    }
    for(int i = 0; i< taille; i++){
        if(tab[i] == 0){
            break;
        }
        else if(tab[i] < 0){
            printf("TNEG[%d] = %d\n",i,TNEG[i]);
        }
    }
    // positive
    printf("Afficher le TPOS des entier negative  : \n");
    for(int i = 0; i< taille; i++){
        if(tab[i] == 0){
            break;
        }
        else if(tab[i] > 0){
            TPOS[i] = tab[i];
        }
    }
    for(int i = 0; i< taille; i++){
        if(tab[i] == 0){
            break;
        }
        else if(tab[i] > 0){
            printf("TPOS[%d] = %d\n",i,TPOS[i]);
        }
    } 



    return 0;
}