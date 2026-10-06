#ifndef LISTE_H
#define LISTE_H

struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct noeud {
    struct couleur c;
    struct noeud *suivant;
};

struct liste_couleurs {
    struct noeud *tête;
};

void init_liste(struct liste_couleurs *liste);
void insertion(const struct couleur *c, struct liste_couleurs *liste);
void parcours(const struct liste_couleurs *liste);
void liberer_liste(struct liste_couleurs *liste);

#endif