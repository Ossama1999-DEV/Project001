#include<stdio.h>
#include<math.h>

#define taille 10

void tableMultiplication() {
    printf("---------------------------------------------------------------------------\n");
    printf("1- Quelle table de multiplication voulez-vous, tapez 0 (zero) pour sortir ?\n");
    printf("NB : Saisi est compris entre '1' et '9' -> ");
}

int main() {
    int choix;
    tableMultiplication();
    scanf("%d", &choix);
    while (choix != 0) {
        if (choix >= 1 && choix <= 9) {
            for (int i = 1; i <= taille; i++) {
                int mul = i * choix;
                printf("%d x %d = %d\n", choix, i, mul);
            }
        } else {
            printf("Ce n'est pas dans les possibilites du programme, recommencez !.\n");
        }
        tableMultiplication();
        scanf("%d", &choix);
    }

    return 0;
}
