#include "conjunto.h"
#include <stdio.h>
// #include >conjunto.h> es un error, pues es para las bibliotecas

CONJUNTO conjunto_vacio(){
    CONJUNTO a;
    a.cant = 0;
    return a;
}

CONJUNTO agregar(CONJUNTO a, DATO x){
    CONJUNTO temp = a;
    if(!pertenece(temp, x) && temp.cant < TAM){
        temp.datos[temp.cant] = x;
        temp.cant ++;
    }
    return temp;
}

bool pertenece(CONJUNTO a, DATO x){
    if(!es_vacio(a)){
        for(int i = 0; i< a.cant; i++){
            if(a.datos[i] == x) return true;
        }
    }
    return false; 
}

CONJUNTO quitar(CONJUNTO a, DATO x){
    CONJUNTO temp = a;
    int i = 0;
    if(pertenece(temp, x)){
        for( ; i < temp.cant; i++){
            if(temp.datos[i] == x) break;
        }

        if(i != temp.cant-1){
            for(int j = i+1; j < temp.cant; j++){
                temp.datos[j-1] = temp.datos[j];
            }
        }
        temp.cant--;
    }
    return temp;
}

bool es_vacio(CONJUNTO a){
    return a.cant == 0;
}

int cardinal(CONJUNTO a){
    return a.cant;
}

CONJUNTO _union(CONJUNTO a, CONJUNTO b){
    CONJUNTO temp = a;
    for(int i = 0; i < b.cant; i++){
            temp = agregar(temp, b.datos[i]);
    }
    return temp;
}

void print_conjunto(CONJUNTO a){
    printf("{ ");
    for(int i = 0; i < a.cant; i++){
        printf("%d ", a.datos[i]);
    }
    printf(" }\n");
}