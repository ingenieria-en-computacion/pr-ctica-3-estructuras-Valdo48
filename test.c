#include <stdio.h>
#include <math.h>
#include "complejo.h"

int main(){
    COMPLEJO a, b, c, d, r;

    a = AsignarReal(a, 2.5);
    b = AsignarReal(b, 3.4);
    c = AsignarReal(c, 4.8);
    d = AsignarReal(d, 5.3);

    a = AsignarImaginaria(a, 6.9);
    b = AsignarImaginaria(b, 7.7);
    c = AsignarImaginaria(c, 8.1);
    d = AsignarImaginaria(d, 9.2);

    printf("Complejo a:\n %.1f + %.1fi\n", ParteReal(a), ParteImaginaria(a));
    printf("Complejo b:\n %.1f + %.1fi\n", ParteReal(b), ParteImaginaria(b));
    printf("Complejo c:\n %.1f + %.1fi\n", ParteReal(c), ParteImaginaria(c));
    printf("Complejo d:\n %.1f + %.1fi\n", ParteReal(d), ParteImaginaria(d));

    r = SumaComplejos(SumaComplejos(a, b), SumaComplejos(c, d)); 
    printf("La suma de todos los complejos anteriores es:\n %.2f + %.2fi\n", ParteReal(r), ParteImaginaria(r));
    printf("El modulo del numero anterior es:\n %f", ModuloComplejo(r));
    
    return 0;
}