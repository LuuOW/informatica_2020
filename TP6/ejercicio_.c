#include "stdio.h"
#include "math.h"
    int main()
 {
    int numeroA, numeroB, numeroC, numeroD, suma, producto;
    float promedio;
    printf ("ingresar primer valor");
    scanf("%i", &numeroA);
    printf ("ingresar segundo valor");
    scanf("%i",&numeroB);
    printf ("ingresar tercer valor");
    scanf("%i", &numeroC);
    printf ("ingresar cuarto valor");
    scanf("%i", &numeroD);
    suma=numeroA+numeroB+numeroC+numeroD;
    producto=numeroA*numeroB*numeroC*numeroD;
    promedio=suma/4;
    printf("%i %i %f", &suma, &producto, &promedio);

    return (0);
    }