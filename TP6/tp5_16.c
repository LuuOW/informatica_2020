#include <stdio.h>
#include <math.h>

int main(){
  int numero,factorial,contador, flag;
  printf("Ingresar un numero:");
  scanf("%i",&numero);
  contador = 1;
  flag = 1;

  //control del numero
  while(numero<1){
    printf("El numero ingresado no es valido, reingresar:");
    scanf("%i",&numero);
  }

  while (contador < numero) {
      contador += 1;
      factorial = flag*contador;
  }
  return 0;
}
