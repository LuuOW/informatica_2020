#include <stdio.h>
 
int numControl();
void es_perfecto(int num);
int main() {
    int num = numControl();
    es_perfecto(num);
    return 0;
}

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

void es_perfecto(int num) {
    
    int aux, sum = 0, i;

    for (i = 1; i <= (num - 1); i++) {
        
        aux = num % i;
        if (aux == 0) {
            sum = sum + i;
        }
    }

    if (sum == num) {
        printf("El numero %i es perfecto.\n", num);
    } else {
        printf("El numero %i no es perfecto.\n", num);
    }
}