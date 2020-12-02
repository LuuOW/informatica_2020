#include <stdio.h>
#include <math.h>

int N_Control();
int numControl(int N);
int main() {
    int N = N_Control();
    numControl(N);
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

int numControl(int N) {
    int num , m = 0, aux = 0, sum = 0;
    printf("Ingrese %i numeros positivos: \n", N);

    for (int i = 0; i < N; i++) {
        
        scanf("%d",&num);
        
        m = num/2;
        
        for(int i = 2; i <= m; i++) {
            
            if(num % i == 0) {
            printf("El numero no es primo \n");
            aux = 1;
            break;
            }
        }
        
        if(aux == 0) {
        printf("El numero es primo \n");
        sum += 1;
        }
    }
    return num;
    printf("La cantidad de series de Nros primos es: %i.\n", sum);
}