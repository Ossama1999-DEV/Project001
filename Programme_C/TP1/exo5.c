#include <stdio.h>
#include <math.h>


int main() {

    //exo 5
    int x1, n1;
    printf("Pour calculer x*n :\n ");
    printf("Entrer x : ");
    scanf("%d", &x1);
    printf("Entrer n : ");
    scanf("%d", &n1);
    int mul = 0;
    int cpt1 = 0;

    while (cpt1 < n1) {
        mul += x1;
        printf("%dx", x1);
        cpt1++;
    }
    printf("= %d\n", mul);
    

    return 0;
}
