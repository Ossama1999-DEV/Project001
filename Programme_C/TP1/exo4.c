#include <stdio.h>
#include <math.h>


int main() {

    // // Exercice 4
    int x, n;
    printf("Pour calculer x^n :\n ");
    printf("Entrer x : ");
    scanf("%d", &x);
    printf("Entrer n : ");
    scanf("%d", &n);

    int puissance = 1;
    int cpt = 0;

    while (cpt < n) {
        puissance *= x;
        cpt++;
    }
    printf("%d^%d = %d\n", x, n, puissance);

    return 0;
}
