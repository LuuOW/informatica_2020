/*
Ingresar un número entero positivo, luego mostrar un mensaje indicando si el mismo
es o no perfecto.
*/
/* === Inclusiones de cabeceras ================================================================ */

#include <stdio.h>
 
/* === Declaracion de Funciones ================================================================ */

int numControl();
void esPerfecto(int num);

/* === Funcion Principal ================================================================ */

int main() {
    int num = numControl();
    es_perfecto(num);
    return 0;
}


/* === Definicion de Funciones ================================================================ */


/*
Esta función pide al usuario que ingrese un numero y almacena el valor en la variable num,
si el valor del numero es menor o igual que 0, advierte al usuario que el numero debe
ser mayor que 0 y vuelve a pedirle el numero, al final retorna el numero.
*/
int numControl() {
    int num;
    do {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Porfavor, el numero debe ser un entero positivo...\n");
        }
    } while (num <= 0);
    return num;
}

/*
Esta función controla si el numero es perfecto, es decir si es igual a la suma
de sus divisores, para controlar esto se usa la variable "i", en un ciclo for
el cual va avanzando a traves de "i", se usa una variable auxiliar llamada "aux"
para almacenar el valor del modulo de dividir el numero ingresado en i, de esta forma
se comprueban los divisores del numero, si es divisor, entonces se va sumando i a la variable
suma que inicialmente es 0, al final se comprueba si la variable suma es igual al numero, 
es decir una vez mas, si la suma de los divisores del numero es igual al numero mismo,
si esto es real, muestra el mensaje de que el numero es perfecto, sino muestra el mensaje
de que no lo es.
*/

void esPerfecto(int num) {
    
    int aux, sum = 0, i;

    for (i = 1; i <= (num - 1); i++) {
        
        aux = num % i;
        if (aux == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("El numero %i es perfecto.\n", num);
    } else {
        printf("El numero %i no es perfecto.\n", num);
    }
}

/*
Creado por: Kempe Lucas Alejandro
Ing Computación
12/02/2020 
*/