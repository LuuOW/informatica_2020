#include <stdio.h>

int main() {
    
    int C, Y, X, CD, Z=0, N = 5;
    
    printf("Ingrese %i numeros : \n", N);
    for(C=0;C<N;C=C+1) {
        do {
            scanf("%d", &X);
        } while (X<0);
        
        Y=X;
        CD=0;
        do {
            Y=Y/10;
            CD=CD+1;
        
        }while (Y!=0);
        
        int p=1;
        
        for(int i=0;i<CD;i++){
            p=p*10;
            }
        Z=Z*p+X;
    }
    printf("El numero formado es: %i\n", Z);
}