#include <stdio.h>
int main()
{
  int num, cont, fact;

  printf("Ingrese un numero:");  
  scanf("%i", &num);
  cont = num;
  fact = 1;
  
  while (cont > 1)
  {
      fact = fact * cont;
      cont = cont - 1;
  }
  
  printf("%i", fact);    
  return (0);
}