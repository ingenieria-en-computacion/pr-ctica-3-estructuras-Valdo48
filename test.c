#include <stdio.h>
#include <math.h>
#include "complejo.h"

int main(){
    COMPLEJO a, b, c, d, r;

    AsignarReal(&a, 2.5);
    AsignarReal(&b, 3.4);
    AsignarReal(&c, 4.8);
    AsignarReal(&d, 5.3);

    AsignarImaginaria(&a, 6.9);
    AsignarImaginaria(&b, 7.7);
    AsignarImaginaria(&c, 8.1);
    AsignarImaginaria(&d, 9.2);

    printf("Complejo a:\n %.2f + %.2fi\n", ParteReal(a), ParteImaginaria(a));
    printf("Complejo b:\n %.2f + %.2fi\n", ParteReal(b), ParteImaginaria(b));
    printf("Complejo c:\n %.2f + %.2fi\n", ParteReal(c), ParteImaginaria(c));
    printf("Complejo d:\n %.2f + %.2fi\n", ParteReal(d), ParteImaginaria(d));

    r = SumaComplejos(SumaComplejos(a, b), SumaComplejos(c, d)); 
    printf("La suma de todos los complejos anteriores es:\n %.2f + %.2fi\n", ParteReal(r), ParteImaginaria(r));
    printf("El modulo del numero anterior es:\n %f", ModuloComplejo(r));
    
    return 0;
}