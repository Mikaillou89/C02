#include <stdio.h>
// Inclusion de la bibliothèque standard pour printf et scanf. 
int main() {
// Début de la fonction principale. 
int a = 0, b = 0;
//Déclaration de deux variables entières a et b, initialisées à 0. 
int resultat = 0;
// Déclaration de la variable resultat, qui contiendra la somme
scanf("%d %d", &a, &b);
// Lecture de deux entiers entrés par l’utilisateur et stockage dans a et b. 
resultat = a + b;
// Calcul de la somme de a et b et stockage dans resultat.
printf("La somme est : %d\n", resultat);
// Affiche la somme à l’écran.
return 0;
// Fin du programme avec code de succès. 
}
// Fin de la fonction main.
