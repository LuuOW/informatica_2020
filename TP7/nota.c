#include <stdio.h>


int main() {
    printf("Bienvenido\nCreado por: Kemp3 ( ͡° ͜ʖ ͡°)\n");
    float teo1, teo2, teo3, teo4, pra1, pra2, pra3, parcial_1, parcial_2, not_final;
    printf("Ingrese la nota de su teorico 1: ");
    scanf("%f", &teo1);
    printf("Ingrese la nota de su teorico 2: ");
    scanf("%f", &teo2);
    printf("Ingrese la nota de su teorico 3: ");
    scanf("%f", &teo3);
    printf("Ingrese la nota de su teorico 4: ");
    scanf("%f", &teo4);
    printf("Ingrese la nota de su practico 1: ");
    scanf("%f", &pra1);
    printf("Ingrese la nota de su practico 2: ");
    scanf("%f", &pra2);
    printf("Ingrese la nota de su practico 3: ");
    scanf("%f", &pra3);
    printf("Ingrese la nota de su parcial 1: ");
    scanf("%f", &parcial_1);
    printf("Ingrese la nota de su parcial 2: ");
    scanf("%f", &parcial_2);

    float porc_parcial_1 = parcial_1*0.25;
    float porc_parcial_2 = parcial_2*0.25;
    float porc_teo_1 = teo1*0.05;
    float porc_teo_2 = teo2*0.05;
    float porc_teo_3 = teo3*0.05;
    float porc_teo_4 = teo4*0.05;
    float porc_pra_1 = pra1*0.1;
    float porc_pra_2 = pra2*0.1;
    float porc_pra_3 = pra3*0.1;

    float porc_total = porc_parcial_1+porc_parcial_2+porc_pra_1+porc_pra_2+porc_pra_3+porc_teo_1+porc_teo_2+porc_teo_3+porc_teo_4;

    printf("Tu nota final es: %f\n", porc_total);
    printf("Whale hello there¡\n\n");
    printf("  .-------------'```'----....,,__                        _,\n");
    printf("  |                               `'`'`'`'-.,.__        .'(\n");
    printf("  |                                             `'--._.'   )\n");
    printf("  |                                                   `'-.<\n");
    printf("  \\               .-'`'-.                            -.    `\\\n");
    printf("   \\               -.o_.     _                     _,-'`\\    |\n");
    printf("    ``````''--.._.-=-._    .'  \\            _,,--'`      `-._(\n");
    printf("      (^^^^^^^^`___    '-. |    \\  __,,..--'                 `\n");
    printf("       `````````   `'--..___\\    |`\n");
    printf("                             `-.,'\n");
}