#include <stdio.h>

int main() {
    int N = 5, Y, Z, X;
    int i=0;
    printf("Ingrese el numero X: ");
    scanf("%i", &X);
    printf("Ingrese %i numeros: \n", N);
    for(int C = 0; C < N; C++) {
        
        do{
            scanf("%d", &Y);
            } while(Y<0);
        
        do{
        Z=Y%10;
        Y=Y/10;
        if(Z==X)
        i=i+1;
        }while (Y>0 && Z!=X);
    }
    printf("La cantidad de numeros que contienen a %i es %i\n", X, i);
    
    return 0;
}

