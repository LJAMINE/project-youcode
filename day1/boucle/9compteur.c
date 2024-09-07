#include <stdio.h>

int main() {
    int n, count = 0;

     printf("Entrez un entier positif : ");
    scanf("%d", &n);

     if (n < 0) {
        printf("Veuillez entrer un entier positif.\n");
        return 1;
    }

     while (n > 0) {
        n /= 10;
        count++;
    }

     if (count == 0) {
        count = 1;
    }

     printf("Nombre de chiffres = %d\n", count);

    return 0;
}
