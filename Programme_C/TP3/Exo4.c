#include<stdio.h>
#include<math.h>

/**
 * Echange de deux valeurs : Ecrire une fonction Echange qui réalise l’échange de deux valeurs entières passées en argument. 
 * Quel problème constate vous? Comment peut-on résoudre ce problème?
*/

void inverse(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Avant x = %d, y = %d\n", x, y);
    inverse(&x, &y);
    printf("Apres x = %d, y = %d\n", x, y);

    return 0;
}
