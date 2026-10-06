#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tableau[TAILLE];
    int chercher;
    int trouve = 0;

    srand((unsigned int)time(NULL));

    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = (rand() % 200) - 100;
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    printf("Entrez l'entier que vous souhaitez chercher : ");
    if (scanf("%d", &chercher) != 1) {
        return 1;
    }

    for (int i = 0; i < TAILLE; i++) {
        if (tableau[i] == chercher) {
            trouve = 1;
            break;
        }
    }

    if (trouve) {
        printf("\nRésultat : entier présent\n");
    } else {
        printf("\nRésultat : entier absent\n");
    }

    return 0;
}