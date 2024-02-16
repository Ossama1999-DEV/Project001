/*
Exercice 1 : 
Ecrire un programme qui lit la dimension N d'un tableau T du 
type int (dimension maximale : 50 composantes), remplit le tableau par des valeurs 
entrées au clavier et affiche le tableau. Calculer et afficher ensuite la somme des 
éléments du tableau.
*/
#include<stdio.h>

int main(){
    // initialisation
    int N, i;
    int T[50];
    int somme = 0;

    // remplit de N et de tab
    printf("Rentre la valeur du taille deb tab : ");
    scanf("%d",&N);

    // remplire le tab for et for
    for(i=0; i<N; i++){
        scanf("%d",&T[i]);
    }
    // Afficher
    for(i=0; i<N; i++){
        printf("TAB[%d] = %d\n",i,T[i]);
    }
    // calcule de somme 
    for(i=0; i<N; i++){
        somme += T[i];/// somme = somme + T[i]
    }

    // affiche de somme 
    printf("La somme des case de Tab est : %d",somme);




    return 0;
}