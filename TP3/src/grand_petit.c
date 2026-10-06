#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main(void) {
    int tableau[TAILLE];

    srand((unsigned int)time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = (rand() % 1000) + 1;
    }

    int grand = tableau[0];
    int petit = tableau[0];

    for (int i = 1; i < TAILLE; i++) {
        if (tableau[i] > grand) {
            grand = tableau[i];
        }
        if (tableau[i] < petit) {
            petit = tableau[i];
        }
    }

    printf("Le numéro le plus grand est : %d\n", grand);
    printf("Le numéro le plus petit est : %d\n", petit);

    return 0;
}