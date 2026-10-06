#include <stdio.h>

int main(void) {
    char c = 0x12;
    short s = 0x1234;
    int i = 0xa47865ff;
    long int li = 0x1234567890abcdefL;
    long long int lli = 0x1122334455667788LL;
    float f = 2.0f;
    double d = 4.0;
    long double ld = 8.0L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, *pli);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, *plli);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : %llx\n\n", (void*)pld, *(unsigned long long*)pld);

    *pc = 0x13;
    *ps = 0x4321;
    *pi = 0xa47865fe;
    *pli = 0x0;
    *plli = 0x1;
    *pf = 1.0f;
    *pd = 2.0;
    *pld = 3.0L;

    printf("Après la manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)pc, (unsigned char)*pc);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ps, (unsigned short)*ps);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    printf("Adresse de li : %p, Valeur de li : %lx\n", (void*)pli, *pli);
    printf("Adresse de lli : %p, Valeur de lli : %llx\n", (void*)plli, *plli);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur de ld : %llx\n", (void*)pld, *(unsigned long long*)pld);

    return 0;
}