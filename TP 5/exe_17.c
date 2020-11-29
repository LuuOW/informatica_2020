#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10],n,i;     
printf("Ingrese el numero que desea convertir: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    {    
    a[i]=n%2;    
    n=n/2;
    }    printf("El numero en binario es = ");    
    for(i=i-1;i>=0;i--)    {    
        printf("%d",a[i]);    
        }    
        return 0;  
}  


#include <stdio.h>
int main() {
    
    int umero1, umero2, roducto;
    printf("Ingrese 2 numeros enteros: \n");
    scanf("%d", &umero1);
    scanf("%d", &umero2);
    roducto = umero1*umero2;
    printf("El producto es %d \n", roducto);
    return(0);
}
