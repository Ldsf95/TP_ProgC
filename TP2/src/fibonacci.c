#include <stdio.h>

int main(void) {
    int n = 7;
    int u0 = 0;
    int u1 = 1;
    int suivant;

    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%d", u0);
        } else if (i == 1) {
            printf(", %d", u1);
        } else {
            suivant = u0 + u1;
            u0 = u1;
            u1 = suivant;
            printf(", %d", suivant);
        }
    }
    printf("\n");

    return 0;
}