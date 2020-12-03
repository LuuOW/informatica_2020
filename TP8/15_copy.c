#include <stdio.h>
int control (void);
int tiponum (int NNumeros);
int main()
{
    int NNumeros;
    NNumeros = control ();
    tiponum (NNumeros);
    return(0);
}

int control (void)
{
    int NNumeros;
    do
    {
        printf("Ingrese la cantidad de numeros que va a ingresar: ");
        scanf("%i",&NNumeros);
    } while (NNumeros < 1);
    return NNumeros;
}   


int tiponum (int NNumeros)
{
    int Numero, Primo, Divisor, NoPrimo, Aux = 0, Serie = 0, Contador = 0;

    while (NNumeros > 0)
    {
        Divisor = 2;
        NoPrimo = 0;
        printf("Ingrese un numero: ");
        scanf("%i",&Numero);
        while (Numero > Divisor && NoPrimo == 0)
        {
            if (Numero % Divisor == 0)
            {
                NoPrimo = 1;
            }
            Divisor++;
        }
        if (NoPrimo == 0)
        {
            Aux = Aux + 1;
        }
        else
        {
            Aux = 0;
            Contador = 0;
        }

        if (Aux > 1)
        {
            if (Contador == 0)
            {
                Serie = Serie + 1;
                Contador = 1;
            }
        }
        else
        {
            Contador = 0;
        }
        NNumeros = NNumeros - 1;
    }
    printf("El numero de series es: %i", Serie);
    return(0);
}