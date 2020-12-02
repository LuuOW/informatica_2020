#include <stdio.h>
 
int main() {
    
    int num, aux, sum = 0, i;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    for (i = 1; i <= (num - 1); i++) {
        
        aux = num % i;
        if (aux == 0) {
            sum = sum + i;
        }
    }

    if (sum == num) {
        printf("El numero ingresado es perfecto.\n");
    } else {
        printf("El numero ingresado no es perfecto.\n");
    }

    return 0;
}