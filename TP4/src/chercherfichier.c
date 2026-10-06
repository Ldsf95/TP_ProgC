#include <stdio.h>
#include <stdlib.h>

int longueur(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

int compter_occurrences(const char *ligne, const char *motif) {
    int nb = 0;
    int len_motif = longueur(motif);

    if (len_motif == 0) return 0;

    for (int i = 0; ligne[i] != '\0'; i++) {
        int j = 0;
        while (ligne[i + j] != '\0' && motif[j] != '\0' && ligne[i + j] == motif[j]) {
            j++;
        }
        if (j == len_motif) {
            nb++;
            i += len_motif - 1;
        }
    }

    return nb;
}

int main(int argc, char *argv[]) {
    char nom_fichier[256];
    char motif[512];

    if (argc >= 2) {
        int i = 0;
        while (argv[1][i] != '\0' && i < 255) {
            nom_fichier[i] = argv[1][i];
            i++;
        }
        nom_fichier[i] = '\0';
    } else {
        printf("Entrez le nom du fichier : ");
        if (scanf("%255s", nom_fichier) != 1) return 1;
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("Entrez la phrase que vous souhaitez rechercher : ");
    if (fgets(motif, sizeof(motif), stdin) == NULL) return 1;

    int len_m = longueur(motif);
    if (len_m > 0 && motif[len_m - 1] == '\n') {
        motif[len_m - 1] = '\0';
    }

    FILE *f = fopen(nom_fichier, "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 1;
    }

    char ligne[1024];
    int num_ligne = 1;

    printf("\nRésultats de la recherche :\n");

    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        int count = compter_occurrences(ligne, motif);
        if (count > 0) {
            printf("Ligne %d, %d fois\n", num_ligne, count);
        }
        num_ligne++;
    }

    fclose(f);
    return 0;
}