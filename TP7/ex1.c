#include <stdio.h>

int main () {
    int coorX, coorY, counter, ene, belong, notbelong, below, above;
    printf("Ingrese el valor de N: ");
    scanf("%i", &ene);
    counter = 0;
    while (counter <= ene) {
        counter += 1;
        notbelong = 0;
        belong = 0;
        below = 0;
        above = 0;
        printf("Ingrese el valor de la coordenada X: ");
        scanf("%i", &coorX);
        printf("Ingrese el valor de la coordenada Y: ");
        scanf("%i", &coorY);

        if (coorY != 15/7*coorX-7) {
            notbelong += 1;
        } else {
            belong += 1;
        }
        if (coorY < -7) {
            below += 1;
        } else {
            above += 1;
        }
    }  

    printf("Pertenecen: %i\n No pertenecen: %i\n Estan por encima: %i\n Estan por debajo: %i\n", belong, notbelong, above, below);
}
