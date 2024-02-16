#include <stdio.h>
#include <math.h>


int main() {

    //exo7
    int n,U,V;
    /* 𝑈0 = 1 𝑈𝑛 = 𝑉𝑛−1 + 1 𝑉0 = 0  𝑉𝑛 = 2𝑈𝑛−1 */
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    int Un = 1;
    int Vn = 0;
    int temp ;
    int i;

    for (int i = 1; i <= n; i++) {
        temp = Un;
        Un = Vn + 1;
        Vn = 2 * temp;
        printf("Le %d-eme terme de la suite Un est : %d Le %d-eme terme de la suite Nn est : %d\n", n,Un,n,Vn);
    }
    
    return 0;
}
