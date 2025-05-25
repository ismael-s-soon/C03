#include <stdio.h>

void afficherFibonacci(unsigned long long limite) {
    unsigned long long a = 0;
    unsigned long long b = 1;
    if (a <= 5) printf("%llu ", a);
    while (b <= limite && b <= 5) {
        printf("%llu ", b);
        unsigned long long suivant = a + b;
        a = b;
        b = suivant;
    }
    printf("\n");
}

int main() {
    char buffer[100];
    char extra;
    long long saisie;

    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if (sscanf(buffer, "%lld %c", &saisie, &extra) != 1) {
            return 1;
        }

        if (saisie < 0) {
            return 1;
        }

        afficherFibonacci((unsigned long long)saisie);
    }

    return 0;
}
