#include <stdio.h>
int main() {
    int number1, number2, product;
    printf("Ingrese 2 numeros enteros: \n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    product = number1*number2;
    printf("El producto es: %d\n", product);
    return 0;
}