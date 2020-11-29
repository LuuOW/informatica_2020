#include <stdio.h>

int numControl();
int factorial(int num);
int main() {
  int num = numControl();
  int fact = factorial(num);
  printf("El factorial de %i es: %i\n", num, fact);
  return 0;    
}

int numControl() {
    int num;
    do {
    
    printf("Ingrese un numero entero positivo: ");
    scanf("%i", &num);
    if (num <= 0) {
        printf("Porfavor, ingrese un numero positivo...\n");
    }
    } while (num <= 0);
    return num;
}

int factorial(int num) {

    int factorial = 1;
    for (int i = num; i > 1; i--) {
        factorial *= i;
    }
    return factorial;
}
