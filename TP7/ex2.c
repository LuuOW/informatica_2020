#include <stdio.h>

int main() {
    int ene, num, par, impar, promPar, promImpar, sumPar, sumImpar;
    do {
        printf("Ingrese el numero N: ");
        scanf("%i", &ene);
        if (ene < 0)
        {
            printf("Por favor ingrese una cantidad N positiva...\n");
        }
        
    } while (ene > 0);
}

int main() {
    int ene, num, par, impar, promPar, promImpar, sumPar, sumImpar;
    printf("Ingrese el numero N: ");
    scanf("%i", &ene);

    par = 0;
    impar = 0;
    int matriz[ene];
    sumPar = 0;
    sumImpar = 0;
    printf("Ingrese %i numeros: \n", ene);

    for(int i = 0; i < ene; ++i) {
     scanf("%i", &matriz[ene]);
     if (matriz[ene]%2 == 0) {
         par += 1;
         sumPar += matriz[ene];
     } else {
         impar += 1;
         sumImpar += matriz[ene];
     }
  }

  promImpar = sumImpar/impar;
  promPar = sumPar/par;
    printf("El promedio de pares es: %i\n", promPar);
    printf("El promedio de impares es: %i\n", promImpar);
    return 0;
}