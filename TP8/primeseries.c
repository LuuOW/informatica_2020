#include <stdio.h>
#include <math.h>

int N_Control();
int main() {
    int N = N_Control();
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

int primeSum(int N) {
    int prime;
    for (int i = 0; i < N; i++) {
        prime = ()()
    }
}
