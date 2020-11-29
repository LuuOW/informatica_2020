#include <stdio.h>

int main() {
    int N = 5;
    int x,y;
    x=2;
    y=10*x/10*x;
    
    for(int i=0;i<N;i++) {

        while (x<0) {
            
            if(y>0) {
                
                printf("%d", ++y);
                printf("%d", ++x);
            }
        }
    }
}


int main() {
    
    int j, k;
    j= -1,
    k=1;
    while(j < 0) {
        printf("%d",j);
    }
    j=j+1;
    k=k+1;
    printf("%d",k);
}
#include <stdio.h>
int main() {
    
    int x = 2;
    x=x*3;
    if( x > 2){
        
        printf("Hola mundo! %d", x);
    } else {
        x=x+1;
    }
    printf("Bienvenidos! %d ", x);
}
#include <stdio.h>
int main() {
    
    int p=1,c=1;
    int N = 10;
    while (c<=N) {
        
        printf("\n %i \n", p);
        p=p+2;
        c=c+1;
    }
}