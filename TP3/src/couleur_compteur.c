#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurCompte {
    struct Couleur couleur;
    int compteur;
};

int couleurs_égales(struct Couleur c1, struct Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

int main(void) {
    struct Couleur palette[TAILLE];
    struct CouleurCompte distinctes[TAILLE];
    int nb_distinctes = 0;

    srand((unsigned int)time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        palette[i].r = (unsigned char)(rand() % 5);
        palette[i].g = (unsigned char)(rand() % 5);
        palette[i].b = (unsigned char)(rand() % 5);
        palette[i].a = 0xff;
    }

    for (int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for (int j = 0; j < nb_distinctes; j++) {
            if (couleurs_égales(palette[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        if (!trouve) {
            distinctes[nb_distinctes].couleur = palette[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }

    for (int i = 0; i < nb_distinctes; i++) {
        printf("0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].compteur);
    }

    return 0;
}