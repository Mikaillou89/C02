#include <stdio.h>
//  Inclusion de la bibliothèque standard. 
int main() {
// Début de la fonction principale. 
int nombre = 0;
// Déclare une variable nombre, initialisée à 0.
scanf("%d", &nombre);
//  Lit un entier saisi par l’utilisateur.
if ( nombre % 2 == 0 ) {
// Vérifie si nombre est divisible par 2 (donc pair). 
printf ("%d est pair.\n", nombre);
// Affiche que le nombre est pair. 
} else {
// Sinon (le nombre est impair)…
printf ("%d est inpair.\n", nombre);
// Affiche que le nombre est impair (note : l’orthographe correcte est “impair”).
}
return 0;
}
// Fin du programme avec retour de succès. 
