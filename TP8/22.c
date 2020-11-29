#include <stdio.h>

float bcontrol();
int econtrol();
float potencia(float numB, int numE);
int main() {
    float numB = bcontrol();
    int numE = econtrol();
    float numPotencia = potencia(numB, numE);
    return 0;
}

float bcontrol() {
    float B;
    do {
        printf("Ingrese el numero Base: ");
        scanf("%f", &B);
        
        if (B <= 0) {
            printf("Porfavor ingrese un real positivo...\n");
        }
    } while (B <= 0);
    return B;
}

int econtrol() {
    int E;
    do {
        printf("Ingrese el numero Exponente: ");
        scanf("%i", &E);
        
        if (E <= 0) {
            printf("Porfavor ingrese un entero positivo...\n");
        }
    } while (E <= 0);
    return E;
}

float potencia(float numB, int numE) { 

    float numPotencia = 1;
    while (numE != 0) {
        numPotencia *= numB;
        numE -= 1;        
    }
    printf("%f\n", numPotencia);
    return numPotencia;
}