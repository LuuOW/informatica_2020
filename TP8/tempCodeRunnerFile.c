/*
Ingresar un número entero positivo, luego mostrar un mensaje indicando si el mismo
es o no perfecto.
*/
/* === Inclusiones de cabeceras ================================================================ */

#include <stdio.h>
 
/* === Declaracion de Funciones ================================================================ */

int ingresarPositivo();
int esPerfecto(int numero);

/* === Funcion Principal ================================================================ */

/*
Ejecuta las funciones previamente declaras y si la respuesta es igual 1, muestra el mensaje
de que el numero es perfecto, sino muestra el mensaje de que no lo es.
*/
int main() {
    int numero = ingresarPositivo();
    int respuesta = esPerfecto(numero);
    if (respuesta == 1) {
        printf("El numero es perfecto.\n");
    } else {
        printf("El numero no es perfecto.\n");
    }
    return 0;
}


/* === Definicion de Funciones ================================================================ */


/*
Esta función pide al usuario que ingrese un numero y almacena el valor en la variable numero,
si el valor del numero es menor o igual que 0, advierte al usuario que el numero debe
ser mayor que 0, por la definición de numero perfecto y vuelve a pedirle el numero
al final retorna el numero.
*/
int ingresarPositivo() {
    int numero;
    do {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        if (numero <= 0) {
            printf("Porfavor, el numero debe ser un entero positivo...\n");
        }
    } while (numero <= 0);
    return numero;
}

/*
Esta función controla si el numero es perfecto, es decir si es igual a la suma
de sus divisores, para controlar esto se usa la variable "divisor", en un ciclo for
el cual va iterando a traves de "divisor", se usa una variable auxiliar llamada "valor"
para almacenar el valor del modulo de dividir el numero ingresado en el divisor, de esta forma
se comprueban los divisores del numero, si es divisor, entonces se va sumando el divisor a la variable
suma que inicialmente es 0, al final se comprueba si la variable suma es igual al numero, 
es decir una vez mas, si la suma de los divisores del numero es igual al numero mismo,
si esto es real, retorna una respuesta.
*/

int esPerfecto(int numero) {

    int valor, suma = 0, divisor, respuesta;

    for (divisor = 1; divisor < numero; divisor++) {
        
        valor = numero % divisor;
        if (valor == 0) {
            suma += divisor;
        }
    }

    if (suma == numero) {
        respuesta = 1;
    } else {
        respuesta = 0;
    }
    return respuesta;
}


/*
Creado por: Kempe Lucas Alejandro
Ing Computación
12/02/2020 
*/