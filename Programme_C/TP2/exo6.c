/*
Exercice 6 : Ecrire un programme qui lit les dimensions L et C d'un tableau T à deux 
dimensions du type int (dimensions maximales : 50 lignes et 50 colonnes). 
Remplir le tableau par des valeurs entrées au clavier et 
afficher le tableau 
ainsi que la somme de chaque ligne et de chaque colonne en n'utilisant 
qu'une variable d'aide pour la somme.
*/

#include<stdio.h>
#include<stddef.h>


int main() {

    int L = 0, C=0;
    int i = 0, j=1;
    int tab[50][50];

    int tmp = 0;
    while(tmp != 3){
        if(L >= 50 || C >=50){
            printf("Condition generale non repecter L_MAX = 50 et C_MAX = 50, nombre essaye %d. \n",tmp);
        }
        printf("Rentre le nombre de lignes de tab : ");
        scanf("%d",&L);
        printf("Rentre le nombre de collones de tab : ");
        scanf("%d",&C);
        if(L <= 50 && C <=50){
            break;
        }
        tmp++;
        if(tmp == 3){
            return 0;
        }
    }

    printf("Remplire le tab avec des entier : \n");
    for(i = 0; i<L ; i++){
        for(j =0; j<C ; j++){
            printf("Rentrez l'ment tab[%d][%d] : ", i, j);
            scanf("%d",&tab[i][j]);
        }
    }

    //affiche le tab
    for(i =0; i<L ; i++){
    printf("[");
        for(j =0; j<C ; j++){
            printf("%2d\t",tab[i][j]);
            if(j<3){
                // printf("      ");
            }
        }
    printf("]\n");
    }

    //somme de lignes
    for(i =0; i<L ; i++){
        int sommeLigne = 0;
            for(j =0; j<C ; j++){
               sommeLigne = sommeLigne + tab[i][j];
           }
    printf("La somme de ligne %d = %d\n",i,sommeLigne);
    }
    //somme de lignes
    for(j =0; j<C ; j++){
        int sommeCol = 0;
            for(i =0; i<L ; i++){
                sommeCol = sommeCol + tab[i][j];
            }
    printf("La somme de colonne %d = %d\n",j,sommeCol);
    }


    printf("\2 \1 \4 \3 \12 \4 \10 \47 \7");
    return 0;
}