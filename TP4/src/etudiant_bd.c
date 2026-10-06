#include <stdio.h>
#include <stdlib.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

void vider_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void lire_chaine(char *str, int taille) {
    if (fgets(str, taille, stdin) != NULL) {
        int i = 0;
        while (str[i] != '\0') {
            if (str[i] == '\n') {
                str[i] = '\0';
                break;
            }
            i++;
        }
    }
}

int main(void) {
    struct Etudiant etudiants[5];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        lire_chaine(etudiants[i].nom, sizeof(etudiants[i].nom));

        printf("Prénom : ");
        lire_chaine(etudiants[i].prenom, sizeof(etudiants[i].prenom));

        printf("Adresse : ");
        lire_chaine(etudiants[i].adresse, sizeof(etudiants[i].adresse));

        printf("Note 1 : ");
        if (scanf("%f", &etudiants[i].note1) != 1) return 1;

        printf("Note 2 : ");
        if (scanf("%f", &etudiants[i].note2) != 1) return 1;

        vider_buffer();
        printf("\n");
    }

    FILE *f = fopen("etudiant.txt", "w");
    if (f == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        fprintf(f, "%s;%s;%s;%.2f;%.2f\n",
                etudiants[i].nom,
                etudiants[i].prenom,
                etudiants[i].adresse,
                etudiants[i].note1,
                etudiants[i].note2);
    }

    fclose(f);
    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");

    return 0;
}