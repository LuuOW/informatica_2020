#include <stdio.h>
#include <math.h>

int Ncontrol();
int numForm(int N);
int main() {
    int N = Ncontrol();
    int result = numForm(N);
    printf("El resultado es: %i", result);
    return 0;
}


int Ncontrol() {
    int N;
    do {
        printf("Ingrese el valor de N: ");
        scanf("%i", &N);
        if (N <= 0) {
            printf("Porfavor, ingrese una cantidad positiva...\n");
        }
    } while (N <= 0);
    printf("Ingrese %i numeros: \n", N);
    return N;
}

int numForm(int N) {

    int num;
    double potencia= 0;
    double resultado= 0;
    double aux;

    for(int i = 0; i != N; i++)
    {
        scanf("%d", &num);
        aux = num;
        while ( aux >= 1)
        {
            aux /= 10;
            ++potencia;
        }
        if (aux == 0)
        {
        potencia=1;
        }
        resultado = (resultado + aux) * pow(10,potencia);
        potencia = 0;
    }
    return resultado;
}