#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tableau[TAILLE];
    int chercher;
    int trouve = 0;

    srand((unsigned int)time(NULL));

    tableau[0] = (rand() % 10) - 50;
    for (int i = 1; i < TAILLE; i++) {
        tableau[i] = tableau[i - 1] + (rand() % 5) + 1;
    }

    printf("Tableau trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    if (scanf("%d", &chercher) != 1) {
        return 1;
    }

    int bas = 0;
    int haut = TAILLE - 1;

    while (bas <= haut) {
        int milieu = bas + (haut - bas) / 2;

        if (tableau[milieu] == chercher) {
            trouve = 1;
            break;
        } else if (tableau[milieu] < chercher) {
            bas = milieu + 1;
        } else {
            haut = milieu - 1;
        }
    }

    if (trouve) {
        printf("\nRésultat : entier présent\n");
    } else {
        printf("\nRésultat : entier absent\n");
    }

    return 0;
}