#include <stdio.h>

/* Question  2*/
void Remplir(int tableau_id[], int tableau_quantite[], int tableau_prix[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Entre id %d : ", i + 1);
        scanf("%d", &tableau_id[i]);
        printf("Entre quantite  %d : ", i + 1);
        scanf("%d", &tableau_quantite[i]);
        printf("Entre prix %d : ", i + 1);
        scanf("%d", &tableau_prix[i]);
    }
} 

/* Question 3*/
void afficher_Id_Q0(int tableau_id[], int tableau_quantite[], int taille) {
    printf("Id du produits_quantite = 0 : ");
    for (int i = 0; i < taille; i++) {
        if (tableau_quantite[i] == 0) {
            printf("%d ", tableau_id[i]);
        }
    }
    printf("\n");
}

/* Question 4*/
int id_Produit_MoinsCher(int tableau_prix[], int taille) {
    int id_Moins_Cher = 0;
    for (int i = 1; i < taille; i++) {
        if (tableau_prix[i] < tableau_prix[id_Moins_Cher]) {
            id_Moins_Cher = i;
        }
    }
    // printf("%d",id_Moins_Cher);
    return id_Moins_Cher;
}

/* Question 5*/
int calculer_Prix_Total(int tableau_quantite[], int tableau_prix[], int taille) {
    int total = 0;
    for (int i = 0; i < taille; i++) {
        total +=tableau_prix[i];
    }
    return total;
}

/* Question 6*/
void modifier_Quantite(int tableau_id[], int tableau_quantite[], int taille, int idproduit, int nvQtt) {
    for (int i = 0; i < taille; i++) {
        if (tableau_id[i] == idproduit) {
            // printf("test idproduit = %d",idproduit);
            tableau_quantite[i] = nvQtt;
            break;
        }
    }
}

/* Question 7*/
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void echangerTout(int tableau_id[], int tableau_quantite[], int tableau_prix[], int a, int b) {
    // printf("Test 1");
    echanger(&tableau_id[a], &tableau_id[b]);
    // printf("Test 2");
    echanger(&tableau_quantite[a], &tableau_quantite[b]);
    // printf("Test 3");
    echanger(&tableau_prix[a], &tableau_prix[b]);
}
void trier_Tableau(int tableau_id[], int tableau_quantite[], int tableau_prix[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        // printf("je suis la 1");
        for (int j = 0; j < taille - i - 1; j++) {
            // printf("je suis la 2");
            if (tableau_prix[j] > tableau_prix[j + 1]) {
                // printf("je suis la 3");
                echangerTout(tableau_id, tableau_quantite, tableau_prix, j, j + 1);
            }
        }
    }
}

/* Question 8*/
void regrouper_Tab(int tableau_id[], int tableau_quantite[], int tableau_prix[], int tableau_complet[][3], int taille) {
    for (int i = 0; i < taille; i++) {
        tableau_complet[i][0] = tableau_id[i];
        tableau_complet[i][1] = tableau_quantite[i];
        tableau_complet[i][2] = tableau_prix[i];
    }
}

int main() {
    /* Question 1*/
    int taille;
    printf("Entrez la taille des tableaux : ");
    printf("Taille = ");
    scanf("%d", &taille);

    int tableau_id[taille];
    int tableau_quantite[taille];
    int tableau_prix[taille];

    /* Question 2*/
    printf("\n*************************************************\n");

    Remplir(tableau_id, tableau_quantite, tableau_prix, taille);
    printf("\n*************************************************\n");

    /* Question 3*/
    afficher_Id_Q0(tableau_id, tableau_quantite, taille);
    printf("\n*************************************************\n");

    /* Question 4*/
    int id_Moins_Cher = id_Produit_MoinsCher(tableau_prix, taille);
    printf("id du produit le moins cher: %d\n", tableau_id[id_Moins_Cher]);
    printf("\n*************************************************\n");

    /* Question 5*/
    int prix_total = calculer_Prix_Total(tableau_quantite, tableau_prix, taille);
    printf("Prix total = %d\n", prix_total);
    printf("\n*************************************************\n");

    /* Question 6*/
    int id_Produit_a_Modifier, nouvelle_Qtt;
    printf("id du produit a modif : ");
    scanf("%d", &id_Produit_a_Modifier);
    printf("Entre NV quanttite : ");
    scanf("%d", &nouvelle_Qtt);
    modifier_Quantite(tableau_id, tableau_quantite, taille, id_Produit_a_Modifier, nouvelle_Qtt);
    printf("\n*************************************************\n");

    /* Question 7*/
    trier_Tableau(tableau_id, tableau_quantite, tableau_prix, taille);
    printf("\n********* Tab de prix trie : DONE ***************\n");

    /* Question 8*/
    int tableau_complet[taille][3];
    regrouper_Tab(tableau_id, tableau_quantite, tableau_prix, tableau_complet, taille);
    
    // Affich 3 tab
    printf("\n*************************************************");
    printf("\n*************** Tableau complet : ***************");
    printf("\n*************************************************\n");
    for (int i = 0; i < taille; i++) {
        printf("%d\t%d\t%d\n", tableau_complet[i][0], tableau_complet[i][1], tableau_complet[i][2]);
    }
    printf("\n*************************************************\n");
    return 0;
}
