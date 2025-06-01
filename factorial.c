#include <stdio.h>

int main() {
int nombre = 0;
int i = 1;
// nombre contiendra l’entrée utilisateur ; i est un compteur pour la boucle.
scanf("%d", &nombre);
//  Lecture de l'entier nombre. 
if (nombre < 0) {
printf ("Erreur.\n");
} 
// Vérifie si l'utilisateur a entré un nombre négatif. Si oui, affiche une erreur. 
else {
int fact = 1; 
// Initialise fact à 1 pour calculer la factorielle. 
while (i <= nombre) {
fact *= i;
i++;
}
// Boucle qui multiplie fact par i de 1 à nombre. 
printf("Le factoriel de %d est : %d\n", nombre, fact);
}
return 0;
}
// Affiche le résultat et termine le programme. 
