#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * Ecrire une fonction comparerChaine() qui permet d’effectuer une comparaison de deux 
    chaînes. Elle prend en paramètre d’entrée deux chaînes de caractères et elle 
    retourne :
     0 en cas d’égalité.
     1 si la première chaîne de caractères est supérieure alphabétiquement à la 
    seconde.
     -1 si la première chaîne de caractères est inférieure alphabétiquement à la 
    seconde
**/
#define TAILLE 100

int comparerChaine(char ch1[TAILLE], char ch2[TAILLE]) {
    float m = strcmp(ch1, ch2); // 0 ch1 = ch2 / 1 ch1 > ch2 / -1 ch1 < ch2 
    if (m == 0) {
        printf("%s = %s\n", ch1, ch2);
        return 0;
    } else if (m > 0) {
        printf("%s > %s\n", ch1, ch2);
        return 1;
    } else {
        printf("%s < %s\n", ch1, ch2);
        return -1;
    }
}

int main() {
    printf("Exo 5:\r\n");

    char Chaine1[TAILLE] = "ABC";
    char Chaine2[TAILLE] = "abc";

    int resultat = comparerChaine(Chaine1, Chaine2);

    return 0;
}
