#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage : %s <opérateur> <num1> [num2]\n", argv[0]);
        return 1;
    }

    char op = argv[1][0];

    if (op == '~') {
        int num1 = atoi(argv[2]);
        int res = negation(num1);
        printf("Résultat : %d\n", res);
        return 0;
    }

    if (argc < 4) {
        printf("Usage pour %c : %s %c <num1> <num2>\n", op, argv[0], op);
        return 1;
    }

    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    int res = calculer(num1, num2, op);
    printf("Résultat : %d\n", res);

    return 0;
}