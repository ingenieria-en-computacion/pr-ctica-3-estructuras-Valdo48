#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__

typedef float DATO;
typedef struct Complejo{
    DATO Re, Img;
}COMPLEJO;

void AsignarReal(COMPLEJO*, DATO);
void AsignarImaginaria(COMPLEJO*, DATO);
DATO ParteReal(COMPLEJO);
DATO ParteImaginaria(COMPLEJO);
DATO ModuloComplejo(COMPLEJO);
COMPLEJO SumaComplejos(COMPLEJO, COMPLEJO);

#endif