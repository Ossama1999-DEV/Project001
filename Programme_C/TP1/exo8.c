#include <stdio.h>
#include <math.h>


int main() {

    //exo08
    int i = 0, j = 0,k = 0, nbrLignes = 0;


    printf("Rentre le nombre de lignes : \n");
    scanf("%d",&nbrLignes);
    for (i = 1; i <= nbrLignes; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("Rentre le nombre de lignes : \n");
    scanf("%d",&nbrLignes);
    for (i = 1; i <= nbrLignes; i++) {
        for (j = nbrLignes; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }

    printf("Rentre le nombre de lignes : \n");
    scanf("%d",&nbrLignes);
    for (i = 0; i <= nbrLignes; i++) {
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        for (k = 0; k < nbrLignes-i; k++) {
            printf("*");
        }
        printf("\n");
    }


    
    return 0;
}
