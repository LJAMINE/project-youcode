#include <stdio.h>

int inverserfoncNombre(int nombre) {
     int invers = (nombre % 10) * 1000 +
                  ((nombre / 10) % 10) * 100 +
                  ((nombre / 100) % 10) * 10 +
                  (nombre / 1000);
    return invers;
}

int main() {
    int nombre;

     printf("Entre nombre ");
    scanf("%d", &nombre);

     int nombreInvers = inverserfoncNombre(nombre);
    printf("L'inverse de %d est %d\n", nombre, nombreInvers);

    return 0;
}
