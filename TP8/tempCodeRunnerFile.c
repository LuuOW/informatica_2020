#include <stdio.h>

int digControl();
int main() {
    digControl();
    return 0;
}

int digControl() {
    int num;
    do {
        printf("Ingrese un numero entero positivo: ");
        scanf("%i", &num);
        if (num <= 0) {
            printf("Porfavor, tiene que ser un entero positivo...\n");
        }
    } while (num <= 0);
    return num;
}