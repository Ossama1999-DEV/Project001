#include <stdio.h>
#include <math.h>
/**
 * Exercice 2 :
    Ecrire un programme C qui définit une structure point qui contiendra les deux 
    coordonnées d'un point du plan (X et Y). Puis lit deux points et affiche la distance entre 
    ces deux derniers.
*/

typedef struct point {
    /* data */
    int X;
    int Y;
}Point;

int main(){
    Point PA;
    Point PB;

    printf("Rentre Les coordonne X et Y de votre premier point A: \n");
    scanf("%d",&PA.X);
    scanf("%d",&PA.Y);
    printf("Rentre Les coordonne X et Y de votre premier point B: \n");
    scanf("%d",&PB.X);
    scanf("%d",&PB.Y);

    float Distance = sqrt(pow((PB.X-PA.X),2) + pow((PB.Y-PA.Y),2));// distance =  racine((xb-xa)^2 + (yb-ya)^2)

    printf("La distance entre le Point A et le Point B : %.2f",Distance);
    return 0;
}