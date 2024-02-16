/**
Exercice 5 : Ecrire un programme qui lit les dimensions L et C d'un tableau T à deux 
dimensions du type int (dimensions maximales : 50 lignes et 50 colonnes).
Remplir le tableau par des valeurs entrées au clavier 
et afficher le tableau 
ainsi que la somme de tous ses éléments.
*/

#include<stdio.h>
#include<stddef.h>


int main() {

    int L = 0, C=0;
    int i = 0, j=1;
    int tab[50][50];

    // Ecrire un programme qui lit les dimensions L et C d'un tableau T à deux dimensions

    printf("Rentre le nombre de lignes de tab : ");
    scanf("%d",&L);
    printf("Rentre le nombre de collones de tab : ");
    scanf("%d",&C);

    printf("Remplire le tab avec des entier : \n");

    //remplit le tableau par des valeurs
    for(i = 0; i<L ; i++){
        for(j =0; j<C ; j++){
            printf("Rentrez l'ment tab[%d][%d] : ", i, j);
            scanf("%d",&tab[i][j]);
        }
    }

    //affiche le tab
    for(i =0; i<L ; i++){
        for(j =0; j<C ; j++){
            printf("tab[%d][%d] = %d\n",i,j,tab[i][j]);
        }
    }

    //somme 
    int somme = 0;
    for(i =0; i<L ; i++){
        for(j =0; j<C ; j++){
            somme = somme + tab[i][j];
        }
    }
    printf("La somme = %d",somme);


    return 0;
}