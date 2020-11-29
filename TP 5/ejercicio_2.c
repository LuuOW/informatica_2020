#include <stdio.h>
int main() {
    int number1, number2, product, sum;
    printf("Ingrese 2 numeros enteros: \n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    sum = number1+number2;
    product = number1*number2;
    printf("El producto es: %d\n", product);
    printf("La suma es: %d\n", sum);
    return 0;
}