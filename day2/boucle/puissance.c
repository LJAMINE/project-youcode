#include <stdio.h>

int main() {
    int base, exposant;
    long long resultat = 1;
     printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);

     for (int i = 0; i < exposant; i++) {
        resultat *= base;
    }

     printf("%d^%d = %lld\n", base, exposant, resultat);

    return 0;
}
