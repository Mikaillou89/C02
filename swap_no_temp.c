#include <stdio.h>

int main() {
int a, b;
// Déclaration de deux variables entières. 
scanf("%d %d", &a, &b);
//  Lecture de deux entiers. 
a = a + b;
b = a - b;
a = a - b;
//  Échange des valeurs de a et b sans utiliser de variable temporaire : 
//• a devient a + b 
//• b devient (a + b) - b = a 
//• a devient (a + b) - a = b
printf("Après échange : a = %d, b = %d\n", a, b);
return 0;
}
// Affiche les nouvelles valeurs après l’échange et termine le programme.
