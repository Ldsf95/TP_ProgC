#include <stdio.h>

struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main(void) {
    struct Couleur palette[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x00, 0x00, 0xff},
        {0xff, 0xff, 0xff, 0xff},
        {0xff, 0x00, 0x00, 0x80},
        {0x00, 0xff, 0x00, 0x80},
        {0x00, 0x00, 0xff, 0x80},
        {0x12, 0x34, 0x56, 0x78},
        {0xaa, 0xbb, 0xcc, 0xdd},
        {0x10, 0x20, 0x30, 0x40}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", palette[i].rouge);
        printf("Vert : %d\n", palette[i].vert);
        printf("Bleu : %d\n", palette[i].bleu);
        printf("Alpha : %d\n\n", palette[i].alpha);
    }

    return 0;
}