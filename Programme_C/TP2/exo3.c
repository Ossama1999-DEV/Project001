/*
Exercice 3 : Ecrire un programme qui lit la dimension N d'un tableau T du 
type int (dimension maximale : 50 composantes), remplit le tableau par des valeurs 
entrées au clavier et affiche le tableau. Effacer ensuite toutes les occurrences de la 
valeur 0 dans le tableau T et tasser les éléments restants. Afficher le tableau résultant.
*/

#include<stdio.h>
#include<stddef.h>

// #define taille 

int main() {

int N = 0;
int tab[N];


printf("Rentre la taille de tab : ");
scanf("%d",&N);
printf("La Taille du tableu = %d\n",N);

printf("Remplire le tab avec des entier : \n");

for(int i =0; i< N ; i++){
    scanf("%d",&tab[i]);
}

//Effacer ensuite toutes les occurrences de la valeur 0 dans le tableau T
int nouvelle_taille = 0;
for(int i =0; i< N ; i++){
    if(tab[i] != 0){
        tab[nouvelle_taille] = tab[i];
        nouvelle_taille++;
    }
}

for(int i =0; i < nouvelle_taille ; i++){
    printf("tab[%d] = %d\n",i,tab[i]);
}

    return 0;
}