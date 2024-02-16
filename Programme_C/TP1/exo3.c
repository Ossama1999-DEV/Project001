#include <stdio.h>
#include <math.h>


int main() {

    // // Exercice 3
    int a, b;
    printf("Saisir 2 entiers a et b :\n");
    printf("Saisir a : ");
    scanf("%d", &a);
    printf("Saisir b : ");
    scanf("%d", &b);

    if (a > b)
        printf("a > b\n");
    else if (a < b)
        printf("b > a\n");
    else
        printf("a = b\n");

    return 0;
}
