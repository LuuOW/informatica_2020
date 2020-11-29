#include <stdio.h>
int main() {

    int i, ene;

    printf("Ingrese el tamaño N: ");
    scanf("%i", &ene);

    int matrizUno[ene];

    printf("Ingrese %i numeros: \n", ene);
    for (i = 0; i < ene; ++i) {
        scanf("%i", &matrizUno[i]);
    }

    for (i = 1; i < ene; ++i) {
        if (matrizUno[0] < matrizUno[i])
            matrizUno[0] = matrizUno[i];
    }

    printf("El numero mas grande es %i\n", matrizUno[0]);

    return 0;
}