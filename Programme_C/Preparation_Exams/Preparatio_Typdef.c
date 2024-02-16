#include <stdio.h>
#include <string.h>

// Définition de la structure Etudiant
struct Etudiant {
    char Nom[50];
    char Prenom[50];
    char Identite[20];
    char NumeroTelephone[15];
    char DateNaissance[15];
};

// Fonction pour remplir une structure Etudiant
void remplirEtudiant(struct Etudiant *etudiant) {
    printf("Entrez le Nom : ");
    scanf("%s", etudiant->Nom);

    printf("Entrez le Prenom : ");
    scanf("%s", etudiant->Prenom);

    printf("Entrez l'Identite : ");
    scanf("%s", etudiant->Identite);

    printf("Entrez le Numero de téléphone : ");
    scanf("%s", etudiant->NumeroTelephone);

    printf("Entrez la Date de naissance : ");
    scanf("%s", etudiant->DateNaissance);
}

// Fonction pour afficher une structure Etudiant
void afficherEtudiant(struct Etudiant etudiant) {
    printf("Nom : %s\n", etudiant.Nom);
    printf("Prenom : %s\n", etudiant.Prenom);
    printf("Identite : %s\n", etudiant.Identite);
    printf("Numero de téléphone : %s\n", etudiant.NumeroTelephone);
    printf("Date de naissance : %s\n", etudiant.DateNaissance);
}

// Fonction pour demander à l'utilisateur s'il veut changer une valeur de la structure Etudiant
void changerValeurEtudiant(struct Etudiant *etudiant) {
    int choix;
    printf("Voulez-vous changer une valeur de la structure ? (1 pour Oui, 0 pour Non) : ");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Quelle valeur souhaitez-vous changer ?\n");
        printf("1. Nom\n");
        printf("2. Prenom\n");
        printf("3. Identite\n");
        printf("4. Numero de téléphone\n");
        printf("5. Date de naissance\n");

        int option;
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Entrez le nouveau Nom : ");
                scanf("%s", etudiant->Nom);
                break;
            case 2:
                printf("Entrez le nouveau Prenom : ");
                scanf("%s", etudiant->Prenom);
                break;
            case 3:
                printf("Entrez la nouvelle Identite : ");
                scanf("%s", etudiant->Identite);
                break;
            case 4:
                printf("Entrez le nouveau Numero de téléphone : ");
                scanf("%s", etudiant->NumeroTelephone);
                break;
            case 5:
                printf("Entrez la nouvelle Date de naissance : ");
                scanf("%s", etudiant->DateNaissance);
                break;
            default:
                printf("Option invalide.\n");
        }
    }
}

int main() {
    struct Etudiant etudiant;

    // Remplissage de la structure Etudiant
    remplirEtudiant(&etudiant);

    // Affichage de la structure Etudiant
    afficherEtudiant(etudiant);

    // Demander à l'utilisateur s'il veut changer une valeur de la structure Etudiant
    changerValeurEtudiant(&etudiant);

    // Affichage de la structure Etudiant après les modifications
    printf("Structure après modifications :\n");
    afficherEtudiant(etudiant);

    return 0;
}
