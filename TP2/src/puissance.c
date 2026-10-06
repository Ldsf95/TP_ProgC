#include <stdio.h>

int main(void) {
    // Déclaration des variables a et b
    int a = 2;
    int b = 3;

    // Variable pour stocker le résultat de la puissance
    int resultat = 1;

    // Calcul de a élevé à la puissance b
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d est égale à %d\n", a, b, resultat);

    return 0;
}