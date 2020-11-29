#include <stdio.h>
int main()
{
    int dia, mes, año;
    printf("ingrese el dia:");
    scanf("%d", &dia);
    printf("ingrese el mes:");
    scanf("%d", &mes);
    printf("ingrese el año:");
    scanf("%d", &año);

    if (dia>0 && mes>0 && año>0)
    {
        if (dia<31 && mes<12)
        {
            printf("La fecha es valida");
        }
        else
        {
            printf("La fecha no es valida");
        }
    }
    else
    {
        printf("La fecha no es valida");
    }
    return(0);
}