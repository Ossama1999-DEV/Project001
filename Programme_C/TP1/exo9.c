#include <stdio.h>

int main() {
    int hauteur;

    printf("Nombre de lignes : ");
    scanf("%d", &hauteur);

    // Boucle pour chaque niveau de l'arbre
    for (int niveau = 0; niveau < hauteur; niveau++) {
        // Afficher les espaces à gauche
        for (int espace = 0; espace < hauteur - niveau - 1; espace++) {
            printf(" ");
        }

        // Afficher les étoiles
        for (int etoiles = 0; etoiles < 2 * niveau + 1; etoiles++) {
            if (niveau == hauteur - 1) {
                printf("*");
            } else if (etoiles == 0 || etoiles == 2 * niveau) {
                printf("*");
            } else {
                printf("o");
            }
        }

        printf("\n");
    }

    // Afficher le tronc de l'arbre
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < hauteur - 2; j++) {
            printf(" ");
        }
        printf("|||\n");
    }

    return 0;
}
