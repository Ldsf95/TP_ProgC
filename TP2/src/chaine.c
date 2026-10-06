#include <stdio.h>

int main(void) {
    char source1[] = "Hello";
    char source2[] = " World!";

    int len1 = 0;
    while (source1[len1] != '\0') {
        len1++;
    }

    int len2 = 0;
    while (source2[len2] != '\0') {
        len2++;
    }

    printf("Longueur de source1 : %d\n", len1);

    char copie[100];
    int i = 0;
    while (source1[i] != '\0') {
        copie[i] = source1[i];
        i++;
    }
    copie[i] = '\0';

    printf("Copie de source1 : %s\n", copie);

    char concat[200];
    int idx = 0;

    for (int j = 0; source1[j] != '\0'; j++) {
        concat[idx++] = source1[j];
    }
    for (int j = 0; source2[j] != '\0'; j++) {
        concat[idx++] = source2[j];
    }
    concat[idx] = '\0';

    printf("Chaine concatenee : %s\n", concat);

    return 0;
}