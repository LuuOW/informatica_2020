#include <stdio.h>
int controlCoordenadas(int cantidadP);
int main() {
    float abcisa, ordenada, aux;
    int cantidadP;

printf("Ingresa la cantidad de puntos que vas a estudiar \n");
scanf("%i",&cantidadP);
controlCoordenadas(cantidadP);
return 0;
}
controlCoordenadas(int cantidadP)
{
 float abcisa, ordenada, aux;
  int pertenece, arriba, abajo, contador; 
    contador = 1;
    pertenece = 0;
    arriba = 0; 
    abajo = 0;
if (cantidadP <= 0)
{
    printf("Ingresaste mal la cantidad de puntos a estudiar, ingresa de nuevo \n");
    scanf("%i",&cantidadP);
} 

while (contador <= cantidadP)
{
    printf("Ingresa las coordenadas \n");

    printf("Abscisa \n");
    scanf("%f",&abcisa);
 
    printf("Ordenada \n");
    scanf("%f",&ordenada);

     aux = (24 * abcisa / 4) - 7;

    if (ordenada == aux)
    {
        pertenece = pertenece + 1;
    }
    else if (ordenada < aux)
    {
        abajo = abajo + 1;
    }
    else if (ordenada > aux)
    {
        arriba = arriba + 1;
    }
    
    contador = contador +1;
}

printf("\t\t RESULTADOS \n");
printf("\n Hay %i puntos que pertenecen a la recta",pertenece);
printf("\n Hay %i puntos por arriba de la recta",arriba);
printf("\n Hay %i puntos por abajo de la recta",abajo);

return cantidadP;
 }