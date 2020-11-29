#include <stdio.h>

int main() {
    //Se definen las variables a utilizar:
    int cantidad, cero, numero, positivo, negativo, auxiliar;
    //Se le asignan valores:
    positivo = 0;
    negativo = 0;
    auxiliar = 0;
    cero = 0;

    /*Se pide el valor de ene, este es el numero de veces que se ingresaran numeros
    tambien se controla que la cantidad sea positiva*/

    do
    {
        printf("Ingrese el valor de N: ");
        scanf("%i", &cantidad);
        if (cantidad <= 0)
        {
            printf("Porfavor, ingrese una cantidad positiva...\n");
        }
        
    } while (cantidad <= 0);
    
    //Se piden los N numeros al usuario:
    printf("Ingrese %i numeros: \n", cantidad);

    //Se usa una variable auxiliar para pedir los numeros N veces hasta que el auxiliar sea igual a N
    while (auxiliar < cantidad)
    {
        auxiliar += 1;
        //Se pide el numero
        scanf("%i", &numero);

        //Si el numero es mayor que 0, entonces suma 1 al contador de positivos
        if (numero > 0) {
            positivo += 1;
        }
        //Si el numero es menor que 0, entonces suma 1 al contador de negativos
        else if (numero < 0)
        {
            negativo += 1;
        //Si el numero es 0, entonces suma 1 al contador de ceros
        } else {
            cero += 1;
        }
    }
    //Se muestran por pantalla cuantos numeros son positivos, cuantos negativos y cuantos son 0
    printf("%i son positivos, %i son negativos, %i numeros son cero.\n\n", positivo, negativo, cero);

    printf("Creado por: Kemp3 ( ͡° ͜ʖ ͡°) (Kempe Lucas Alejandro)\n");
    return 0;
}