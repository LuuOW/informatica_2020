#include<stdio.h>  

int main() {
    
    int num , m = 0, aux = 0;
    
    printf("Ingrese un numero : \n");
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
    }
    
    return 0;  
}    