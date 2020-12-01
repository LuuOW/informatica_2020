#include <stdio.h>


int numControl();
void binControl(int num);
int main() {
    int num = numControl();
    binControl(num);
    return 0;
}

int numControl() {
    int num;
    printf("Porfavor, ingrese un numero entero: ");
    scanf("%i", &num);
    return num;
}

void binControl(int num) {
    
    int count = 0;
    
    while(num != 0) {
        int val = num % 10;

        if((val != 1) && (val != 0)) {
            count++;
            break;
        }
        
        num /= 10;
    }

    if(count > 0) {
        printf("El numero ingresado no es binario \n");
    } else {
        printf("El numero ingresado es binario \n");
    }
}
