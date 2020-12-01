#include <stdio.h>

int digControl();
void trianNum(int num);
int main() {
    int num = digControl();
    trianNum(num);
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

void trianNum(int num) {
    int i, result = 0;
    for (i = 1; i <= num; i++) {
        result = i*(i+1)/2;
    }
    printf("El numero triangular en la posición %i es %i\n", num, result);
}