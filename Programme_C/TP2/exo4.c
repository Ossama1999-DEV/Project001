/**
Exercice 4 : Ecrire un programme qui lit la dimension N d'un tableau T du 
type int (dimension maximale : 50 composantes), 
remplit le tableau par des valeurs 
entrées au clavier et affiche le tableau. 
Ranger ensuite les éléments du tableau T dans 
l'ordre inverse sans utiliser de tableau d'aide. 
Afficher le tableau résultant.
*/

#include<stdio.h>
#include<stddef.h>

int main() {

int N = 0;
int tab[N];


printf("Rentre la taille de tab : ");
scanf("%d",&N);
printf("La Taille du tableu = %d\n",N);

printf("Remplire le tab avec des entier : \n");

//remplit le tableau par des valeurs
for(int i =0; i< N ; i++){
    scanf("%d",&tab[i]);
}
// inverseee
int i =0;
int j = N-1;
while(i<j){
    int tmp = tab[i];
    tab[i] = tab[j];
    tab[j] = tmp;
    i++;
    j--;
}
//afiiche
for(int i =0; i < N ; i++){
    printf("tab[%d] = %d\n",i,tab[i]);
}

return 0;
}