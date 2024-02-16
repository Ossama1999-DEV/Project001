#include <stdio.h>

/*Question 1*/
struct Date {
    int jour;
    int mois; 
    int annee;
};

/*Question 2 : numero + nombre de piece + surface + date*/
struct Appartement {
    int numero_id;
    int nombre_Pieces;
    float surface;
    struct Date dispo;
};

/*Question 3*/
void Remplir(struct Appartement *appartement) {
    printf("Entre numero de lappartement : ");
    scanf("%d", &appartement->numero_id);
    printf("Entre nombre de pieces de lappartement : ");
    scanf("%d", &appartement->nombre_Pieces);
    printf("Entre surface de lappartement : ");
    scanf("%f", &appartement->surface);
    printf("Entre date de dispo (utiliser cette format slvp jj-mm-yy) : ");// methode de remplissage 02-12-2023
    scanf("%d-%d-%d", &appartement->dispo.jour, &appartement->dispo.mois, &appartement->dispo.annee);
}

/*Question 4*/
void affiche(struct Appartement appartement) {
    printf("numero : %d\n", appartement.numero_id);
    printf("nombre_Pieces : %d\n", appartement.nombre_Pieces);
    printf("surface : %f\n", appartement.surface);
    printf("Dispo : %02d-%02d-%02d\n", appartement.dispo.jour, appartement.dispo.mois, appartement.dispo.annee);
}

/*Question 5 & 6*/
void fonction_5_6(struct Appartement appartements[], int n, float surface_min, int pieces_min) {
    printf("\nApp dispo avec surface > %f et nombre_pieces > %d :\n", surface_min, pieces_min);
    // printf("%f et %d ",surface_min, pieces_min);
    for (int i = 0; i < n; i++) {
        if (appartements[i].surface > surface_min && appartements[i].nombre_Pieces > pieces_min) {
            // printf("Je suis la 1");
            affiche(appartements[i]);
        }
    }
}

/*Question 7*/
void App_Dispo(struct Appartement appartements[], int n) {
    printf("\nApp dispo a partir de mai 2024 :\n");
    for (int i = 0; i < n; i++) {
        if (appartements[i].dispo.annee >= 24 && appartements[i].dispo.mois >= 5) {
            // printf("Je suis la 2");
            affiche(appartements[i]);
        }
    }
}

int main() {
    int n;
    printf("\n****************************************\n");
    printf("Entre le nombre Appartements n = ");
    scanf("%d", &n);

    struct Appartement appartements[n];

    printf("\n****************************************\n");
    for (int i = 0; i < n; i++) {
        printf("\nLes infos pour appartement %d :\n", i + 1);
        Remplir(&appartements[i]);
    }

    printf("\n****************************************");
    printf("\n******** Liste des appartements : ******");
    printf("\n****************************************\n");
    for (int i = 0; i < n; i++) {
        affiche(appartements[i]);
        printf("\n****************************************\n");
    }

    printf("\n****************************************\n");
    fonction_5_6(appartements, n, 20, 2);//20 = surface et 2 = nombre de piece
    printf("\n****************************************\n");

    App_Dispo(appartements, n);
    printf("\n****************************************\n");

    return 0;
}
