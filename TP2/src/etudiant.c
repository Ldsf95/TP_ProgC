#include <stdio.h>

int main(void) {
    char noms_prenoms[5][100] = {
        "Dupont Marie",
        "Martin Pierre",
        "Durand Lucas",
        "Lefebvre Emma",
        "Moreau Thomas"
    };

    char adresses[5][150] = {
        "20, Boulevard Niels Bohr, Lyon",
        "22, Boulevard Niels Bohr, Lyon",
        "15, Rue de la Paix, Paris",
        "8, Avenue des Fleurs, Nice",
        "42, Rue des Lilas, Lille"
    };

    float notes_prog[5] = {16.5f, 14.0f, 11.5f, 18.0f, 9.5f};
    float notes_sys[5]  = {12.1f, 14.1f, 13.0f, 15.5f, 10.0f};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom et prenom : %s\n", *(noms_prenoms + i));
        printf("Adresse : %s\n", *(adresses + i));
        printf("Note Programmation C : %.2f\n", *(notes_prog + i));
        printf("Note Systeme d'exploitation : %.2f\n\n", *(notes_sys + i));
    }

    return 0;
}