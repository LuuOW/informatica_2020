#include <stdio.h>

int main() {

  int number, reverse = 0;
  printf("Ingrese un numero: ");
  scanf("%i", &number);
  while (number != 0)
  {
    reverse = reverse * 10;
    reverse = reverse + number%10;
    number = number/10;
  }

  printf("El numero al reves es: %i\n", reverse);


  return 0;
}