#include <stdio.h>
#include <math.h>

int N_Control();
int primeControl(int N);
int main() {
    int N = N_Control();
    primeControl(N);
    return 0;
}

int N_Control() {
    int N;
    do {
        printf("Ingrese el valor de N: ");
        scanf("%i", &N);
        if (N <= 0) {
            printf("Porfavor, la cantidad debe ser positiva...\n");
        }
    } while (N <= 0);
    return N;
}

int primeControl(int N) {

    int m = 0, aux = 0, num, count = 0, sum = 0, flag;

    printf("Ingrese %i numeros: \n", N);
    for (int i = 0; i < N; i++) {
        scanf("%i", &num);
        m = num/2;
        
        for(int i = 2; i <= m; i++) {
            
            if(num % i == 0) {
                flag = 0;
                count = 0;
                aux = 1;
                break;
            }
        }
        
        if(aux == 0) {
            flag = 1;
            count += 1;
        }

        if (count >= 2 && flag == 1) {
        sum += 1;
        }
    }

    printf("La cantidad de series de primos es: %i\n", sum);
}