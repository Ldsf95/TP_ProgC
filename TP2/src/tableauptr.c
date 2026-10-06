#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main(void) {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    srand((unsigned int)time(NULL));

    int *p_i = tab_int;
    float *p_f = tab_float;

    for (int k = 0; k < TAILLE; k++) {
        *(p_i + k) = rand() % 100 + 1;
        *(p_f + k) = (float)(rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (int k = 0; k < TAILLE; k++) {
        printf("%d%s", *(p_i + k), (k == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\n");

    printf("Tableau de nombres a virgule flottante (avant la multiplication par 3) :\n");
    for (int k = 0; k < TAILLE; k++) {
        printf("%.2f%s", *(p_f + k), (k == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\n");

    for (int k = 0; k < TAILLE; k++) {
        if (k % 2 == 0) {
            *(p_i + k) *= 3;
            *(p_f + k) *= 3.0f;
        }
    }

    printf("Tableau d'entiers (apres la multiplication par 3) :\n");
    for (int k = 0; k < TAILLE; k++) {
        printf("%d%s", *(p_i + k), (k == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\n");

    printf("Tableau de nombres a virgule flottante (apres la multiplication par 3) :\n");
    for (int k = 0; k < TAILLE; k++) {
        printf("%.2f%s", *(p_f + k), (k == TAILLE - 1) ? "" : ", ");
    }
    printf("\n");

    return 0;
}