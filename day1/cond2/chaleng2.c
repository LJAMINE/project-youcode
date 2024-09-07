#include <stdio.h>

int main() {
    int age, type_voiture, accidents;
    float prime_base = 1000.0, prime_finale;

    // Lecture des informations
    printf("Entrez  age  : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1   sportive, 2   utilitaire, 3   familiale) : ");
    scanf("%d", &type_voiture);

    printf("Entrez le nombre  accidents   ");
    scanf("%d", &accidents);

     if (age < 25)
        prime_finale = prime_base * 1.5;
    else if (age > 65)
        prime_finale = prime_base * 1.2;
    else
        prime_finale = prime_base;

     if (type_voiture == 1)
        prime_finale *= 2;
    else if (type_voiture == 2)
        prime_finale *= 1.2;
    else if (type_voiture == 3)
        prime_finale *= 1.1;

     if (accidents > 1)
        prime_finale *= 1.3;

     printf("La prime d'assurance est : %.2f\n", prime_finale);

    return 0;
}

