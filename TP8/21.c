#include <stdio.h>

int digControl();
int reverse(int num);
int main() {
    int num = digControl();
    int aux = reverse(num);
    return 0;
}

int digControl() {
    int num;
    do {
        printf("Ingrese un numero de 2 o mas digitos: ");
        scanf("%i", &num);
        if (num <= 9) {
            printf("Porfavor, el numero debe tener 2 o mas digitos...\n");
        }
    } while (num <= 9);
    return num;
}

int reverse(int num) {

    int aux = 0;

    while (num != 0) {
        
        aux *= 10;
        aux += num%10;
        num /= 10;
    }
    printf("El numero reverso es: %i\n", aux);
    return aux;
}