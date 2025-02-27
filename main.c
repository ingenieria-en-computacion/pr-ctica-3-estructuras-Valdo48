#include <stdio.h>
#include <stdbool.h>
#include "conjunto.h"

int main(){
    CONJUNTO a,b,c;
    a = conjunto_vacio();
    b = conjunto_vacio();
    c = conjunto_vacio();
    print_conjunto(a);
    print_conjunto(b);
    print_conjunto(c);

    printf("El conjunto a esta vacio %d\n", es_vacio(c));
    a = agregar(a, 2);
    a = agregar(a, 3);
    a = agregar(a, 19);
    a = agregar(a, 11);
    a = agregar(a, 15);

    b = agregar(b, 2);
    b = agregar(b, 4);
    b = agregar(b, 6);
    b = agregar(b, 5);

    c = _union(a, b);

    print_conjunto(a);
    print_conjunto(b);
    print_conjunto(c);

    return 0;
}