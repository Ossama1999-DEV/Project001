#include<stdio.h>
#include<math.h>


/**
 * Les fonctions récursives :
 * a. Ecrire la fonction qui calcule la somme des n premiers carrés. 
 * Exemple : si n = 3 ; la fonction calculera //14
 * b. Ecrire la fonction qui permet de calculer, la multiplication de deux entiers 
    par additions successives.
 * c. Ecrire la fonction qui permet de dire si un entier est pair ou impair, en 
    supposant que les seules opérations possibles sont : la comparaison 
    avec 0 et la comparaison avec 1.
*/

int somme_carre(){
    int n = 0;
    int sum = 0 ; 
    printf("Rentre un nombre 'n' :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        sum += pow(i,2);//1^2 + 2^2 + 3^2 = 14
    }
    return sum;
}

//correction 
int somme1(int A){
    if(A==0) return 0;
    return ((A*A)+somme1(A-1));
}

int add_succ(){
    int sum = 0;
    int nbr1=0,nbr2=0;
    // 2*3 = 2 + 2 + 2
    // 4*5 = 4 + 4 + 4 + 4 + 4
    printf("Rentre nbr1 : ");
    scanf("%d",&nbr1);
    printf("\nRentre nbr2 : ");
    scanf("%d",&nbr2);

    for(int i = 0; i<=nbr2; i++){
        sum = nbr1*i;
    }
    printf("%d\n",sum);
}
//correction 
int produit(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + produit(a, b - 1);
    }
}


int main(){

    // printf("sum = %d",somme_carre());
    // add_succ();
    printf("%d",produit(2,3));
    return 0;
}
