#include <stdio.h>
#include <math.h>

int main ()
{
    int numeroNat, cantNumeros;
    double potencia= 0;
    double resultado= 0;
    double realAuxiliar;

    scanf("%d", &cantNumeros);

    for(int contador = 0; contador != cantNumeros; contador++)
    {
        scanf("%d", &numeroNat);
        if(numeroNat <0)
        {
            scanf("%d", &numeroNat);
        }
        realAuxiliar = numeroNat;
        while ( realAuxiliar >= 1)
        {
            realAuxiliar = realAuxiliar/10;
            potencia++;
        }
        if (realAuxiliar==0)
        {
        potencia=1;
        }
        resultado = (resultado + realAuxiliar) * pow(10,potencia);
        potencia = 0;
    }
    printf("%.0f", resultado);
    return 0;
}