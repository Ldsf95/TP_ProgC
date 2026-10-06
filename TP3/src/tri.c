#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tableau[TAILLE];

    srand((unsigned int)time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = (rand() % 200) - 100;
    }

    printf("Tableau non trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    for (int i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("Tableau trié par ordre croissant :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}