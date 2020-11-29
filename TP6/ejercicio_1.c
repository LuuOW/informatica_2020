#include <stdio.h>

int main() {
    int counter, polarX, polarY, ene;
    
    int checkPoints(counter, polarX, polarY, ene); {
        counter = 0;
        scanf("Ingrese el numero N: %i", &ene);
        while (counter < ene) {
            counter += 1;
            scanf("Ingrese las coordenadas de los puntos X e Y: \n %i %i", &polarX, &polarY);
            }
        return counter, polarX, polarY, ene;
    }
    int checkBelong(polarX, polarY, ene); {
        if (polarY == 15/7*polarX-7) {
            printf("El punto pertenece a la recta\n");
            } else {
                printf("El punto no pertenece a la recta\n");
            }
        if (polarY < -7) {
            printf("El punto esta por debajo de la recta\n");
            } else {
                printf("El punto esta por encima de la recta\n");
            }
    return polarX, polarY, ene;
    }
    checkPoints(counter, polarX, polarY, ene);
    checkBelong(polarX, polarY, ene);
}




