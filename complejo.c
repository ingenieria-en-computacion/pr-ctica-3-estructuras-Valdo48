#include "complejo.h"
#include <stdio.h>
#include <math.h>

COMPLEJO AsignarReal(COMPLEJO x, DATO a){
    x.Re = a;
    return x;
}

COMPLEJO AsignarImaginaria(COMPLEJO x, DATO a){
    x.Img = a;
    return x;
}

float ParteReal(COMPLEJO x){
    return x.Re;
}

float ParteImaginaria(COMPLEJO x){
    return x.Img;
}

float ModuloComplejo(COMPLEJO x){
    float mod = sqrt(pow(x.Re,2)+pow(x.Img, 2));
    return mod;
}

COMPLEJO SumaComplejos(COMPLEJO x, COMPLEJO y){
    COMPLEJO r = x;
    r.Re = r.Re + y.Re;
    r.Img = r.Img + y.Img;
    return r;
}