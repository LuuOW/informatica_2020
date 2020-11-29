#include <stdio.h>

int main() {
    //Se definen las variables a utilizar
    int numero, auxiliar;
    //Se le asigna 0 a la variable auxiliar
    auxiliar = 0;
    do
    {
        /*Se pide un numero de 4 digitos, y se controla que el numero tenga los 4 digitos,
        si la condición no se cumple, se vuelve a pedir que se ingrese el numero*/
        printf("Ingrese un numero de 4 digitos: ");
        scanf("%i", &numero);
        if (numero < 1000) {
            printf("El numero no tiene 4 digitos, porfavor vuelva a ingresarlo...\n");
        }
        
    } while (numero < 1000);
    /*Mientras el numero tenga 4 digitos, y el numero sea menor que la variable auxiliar,
    se suma 1 a la variable auxiliar y se divide el numero por esa variable
    para comprobar si el resto de dividir el numero en esa variable da 0, si es asi, entonces es divisor
    y muestra por la pantalla ese numero*/
    printf("Los divisores son: \n");
    while (auxiliar < numero) {
        auxiliar += 1;
        if (numero%auxiliar == 0) { 
            printf("%i\n", auxiliar);
        }
    }
    /*Pequeño ASCII art <3*/
    printf("Creado por: Kemp3 ( ͡° ͜ʖ ͡°) (Kempe Lucas Alejandro)\n");
    return 0;
}
