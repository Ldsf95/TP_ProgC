#include <stdio.h>

void exo_4_1(void) {
    printf("--- Exercice 4.1 ---\n");
}

void exo_4_2(void) {
    printf("--- Exercice 4.2 ---\n");
}

void exo_4_7(void) {
    printf("--- Exercice 4.7 ---\n");
}

int main(void) {
    int choix = 0;

    printf("Choisissez l'exercice a exécuter :\n");
    printf("1. Exercice 4.1\n");
    printf("2. Exercice 4.2\n");
    printf("3. Exercice 4.7\n");
    printf("Votre choix (1-3) : ");

    if (scanf("%d", &choix) != 1) {
        return 1;
    }

    switch (choix) {
        case 1:
            exo_4_1();
            break;
        case 2:
            exo_4_2();
            break;
        case 3:
            exo_4_7();
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}
