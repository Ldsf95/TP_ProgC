#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[150];
    float note1;
    float note2;
};

int main(void) {
    struct Etudiant promo[5];

    strcpy(promo[0].nom, "Dupont");
    strcpy(promo[0].prenom, "Marie");
    strcpy(promo[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    promo[0].note1 = 16.5f;
    promo[0].note2 = 12.1f;

    strcpy(promo[1].nom, "Martin");
    strcpy(promo[1].prenom, "Pierre");
    strcpy(promo[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    promo[1].note1 = 14.0f;
    promo[1].note2 = 14.1f;

    strcpy(promo[2].nom, "Durand");
    strcpy(promo[2].prenom, "Lucas");
    strcpy(promo[2].adresse, "15, Rue de la Paix, Paris");
    promo[2].note1 = 11.5f;
    promo[2].note2 = 13.0f;

    strcpy(promo[3].nom, "Lefebvre");
    strcpy(promo[3].prenom, "Emma");
    strcpy(promo[3].adresse, "8, Avenue des Fleurs, Nice");
    promo[3].note1 = 18.0f;
    promo[3].note2 = 15.5f;

    strcpy(promo[4].nom, "Moreau");
    strcpy(promo[4].prenom, "Thomas");
    strcpy(promo[4].adresse, "42, Rue des Lilas, Lille");
    promo[4].note1 = 9.5f;
    promo[4].note2 = 10.0f;

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", promo[i].nom);
        printf("Prénom : %s\n", promo[i].prenom);
        printf("Adresse : %s\n", promo[i].adresse);
        printf("Note 1 : %.1f\n", promo[i].note1);
        printf("Note 2 : %.1f\n\n", promo[i].note2);
    }

    return 0;
}