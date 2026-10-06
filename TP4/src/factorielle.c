#include <stdio.h>

int factorielle(int num) {
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } else {
        int valeur = num * factorielle(num - 1);
        printf("fact(%d): %d\n", num, valeur);
        return valeur;
    }
}

int main(void) {
    int tests[] = {0, 1, 5, 7};
    int nb_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < nb_tests; i++) {
        printf("--- Factorielle de %d ---\n", tests[i]);
        int res = factorielle(tests[i]);
        printf("Résultat final pour %d! = %d\n\n", tests[i], res);
    }

    return 0;
}