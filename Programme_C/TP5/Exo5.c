#include <stdio.h>
#include <stdlib.h>
#define MAXNOTES 30
#define taille 30

typedef struct Etudiant {
    char nom[taille];
    char prenom[taille];
    char Date_Naissance[taille];
    char Promo[taille];
    char Formation[taille];
    int Redoublement;
    int G_TD;
    float Notes[MAXNOTES];
    int nbnotes;
} eleve;

// 1. Ecrire les fonctions LireFiche et EcrireFiche de lecture et d’écriture d’une Fiche.
void EcrireFiche(eleve *etudiant) {
    printf("Rentre Le nom et prenom de l'eleve : \n");
    printf("Nom : ");
    scanf("%s", etudiant->nom);
    printf("Prenom : ");
    scanf("%s", etudiant->prenom);
    printf("Date de naissance : ");
    scanf("%s", etudiant->Date_Naissance);
    printf("Promo : ");
    scanf("%s", etudiant->Promo);
    printf("Formation : ");
    scanf("%s", etudiant->Formation);
    printf("Redoublement entre 1 si Oui ou 0 sinon: ");
    scanf("%d", &(etudiant->Redoublement));
    printf("Groupe de TD : ");
    scanf("%d", &(etudiant->G_TD));
    printf("Nombre de notes : ");
    scanf("%d", &(etudiant->nbnotes));
    
    printf("Notes : ");
    for (int i = 0; i < etudiant->nbnotes; i++) {
        scanf("%f", &(etudiant->Notes[i]));
    }
}

void LireFiche(eleve *etudiant) {
    printf(" Nom prenom : %s \t %s \n", etudiant->nom, etudiant->prenom);
    printf("Date de naissance : %s\n", etudiant->Date_Naissance);
    printf("Promo : %s\n", etudiant->Promo);
    printf("Formation : %s\n", etudiant->Formation);
    printf("Redoublement : %s\n", (etudiant->Redoublement == 1) ? "Oui" : "Non");
    printf("Groupe de TD : %d\n", etudiant->G_TD);
    for (int i = 0; i < etudiant->nbnotes; i++) {
        printf("Note %d : %.2f\n", i + 1, etudiant->Notes[i]);
    }
}

// 2. Ecrire une fonction AjouteNote qui reçoit une Fiche et ajoute une note, si cela est possible.
void AjouteNote(eleve *etudiant) {
    if (etudiant->nbnotes < MAXNOTES) {
        printf("Entrez la nouvelle note : ");
        scanf("%f", &(etudiant->Notes[etudiant->nbnotes]));
        etudiant->nbnotes++;
        printf("Note ajoute avec succès.\n");
    } else {
        printf("Impossible d'ajouter une nouvelle note, nombre maximum atteint.\n");
    }
}

// 3. Ecrire une fonction Moyenne qui reçoit une Fiche et renvoie, si cela est possible, la moyenne des notes de l’étudiant
float Moyenne(eleve *etudiant) {
    if (etudiant->nbnotes == 0) {
        printf("Aucune note enregistre.\n");
        return 0;
    }

    float somme = 0;
    for (int i = 0; i < etudiant->nbnotes; i++) {
        somme += etudiant->Notes[i];
    }

    return somme / etudiant->nbnotes;
}

int main() {
    eleve etudiant;

    EcrireFiche(&etudiant);
    LireFiche(&etudiant);
    AjouteNote(&etudiant);
    LireFiche(&etudiant);

    printf("Moyenne : %.2f\n", Moyenne(&etudiant));

    return 0;
}
