#include <stdio.h>

int main() {
    int par, ene, impar, counter, promPar, promImpar;

    printf("Ingrese el valor de N: ");
    scanf("%i", &ene);

    while (ene <= 0)
    {
        printf("Lo siento, pero no es un valor positivo, vuelve a intentar\n");
        printf("Ingrese el valor de N: ");
        scanf("%i", &ene);
    }
    counter = 0;
    par = 0;
    impar = 0;
    while (counter < ene) {
        counter += 1;
        if (counter%2 == 0) {
            par += counter;
        } else {
            impar += counter;
        }
    }
    
    printf("La suma es %i\n", sum);
}