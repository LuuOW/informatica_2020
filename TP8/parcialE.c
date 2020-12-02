/* Catedra de Informatica Y Programacion 1
Año: 2020 
Tema: 2do Parcial
Ejercicio: Ingresar dos números enteros positivos N1 y N2, en donde N1 tiene que ser menor que N2.
Sumar los factoriales de los numeros impares mayores que N1 y menores que N2,
luego mostrar por pantalla el resultado de la suma.
Por ej: se ingresan N1=1 y N2=6. Los numeros impares entre N1 Y N2 son 3 y 5. 3!=6 Y 5!=120
Entonces 6+120 = 126    
*/

/* === Inclusiones de cabeceras ================================================================ */
#include <stdio.h>

/* === Declaracion de Funciones ================================================================ */

int ingresarEntero();
int controlarNumeros(int N1, int N2);
int sumarFactorial(int N1, int N2);
/* === Funcion Principal ================================================================ */
int main(int argc, char *argv[]){

    int N1, N2, bandera, suma;

    do{
        printf("Ingrese el menor numero: ");
        N1 = ingresarEntero();
        printf("Ingrese el mayor numero: ");
        N2 = ingresarEntero();
        bandera = controlarNumeros(N1, N2);
    }while(bandera == 0);

    suma = sumarFactorial(N1 ,N2);
    printf("El resultado de la suma de los factoriales de los numeros impares es %i\n", suma);
    return 0;
}

/* === Definicion de Funciones ================================================================ */

/*
Pide ingresar un numero entero y lo almacena en la variable num. 
*/
int ingresarEntero() {
    int num;
    scanf("%i", &num);
    return num;
}

/*
Controla que los numeros ingresados N1, y N2 sean mayores que 0
y ademas controla que N2 no sea menor que N1, si cualquiera de estas condiciones
es real, entonces, la variable auxiliar bandera tiene valor 0 y muestra un mensaje 
para advertir que deben ser modificados los valores ingresados
a fin de que el usuario sepa cual puede ser el problema, si todas las condiciones son falsas,
solo entonces el valor de la bandera cambia a 1, y se deja de pedir al usuario que ingrese los numeros 
al retornarse la bandera a la función principal y cambiar el valor.
*/

int controlarNumeros(int N1, int N2) {
    int bandera;
    if (N1 >= N2 || N1 <= 0 || N2 <= 0) {
        bandera = 0;
        printf("Porfavor, ambos numeros deben ser positivos, y el primero debe ser menor que el segundo...\n");
    } else {
        bandera = 1;
    }
    return bandera;
}

/*
La variable count es un contador para ir avanzando el factorial, el cual
se almacena dentro de la variable fact, "i" es una variable que avanza
entre N1 y N2 y se calcula su factorial, si y solo si "i" es impar.
al final luego de calcular el factorial de "i", se almacena en el resultado en la variable sum
la cual almacena y suma todos los factoriales de los "i" impares. 
*/

int sumarFactorial(int N1, int N2) {
    int sum = 0, i;
    for (i = N1 + 1; i < N2; i++) {

        if (i % 2 != 0) {
            
            int contador = 1;
            int factorial = 1;
            
            while (contador <= i) {
                
                factorial *= contador;
                contador += 1;
            }
            sum += factorial;
        }
    }

    return sum;
}

/*
Creado por: Kempe Lucas Alejandro
Ing Computación
12/02/2020 
*/