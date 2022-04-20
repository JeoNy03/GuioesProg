#include <stdio.h>
#include "ponto.h"
#include "retangulo.h"

int main() {

    ponto p1 = {2,3};
    ponto p2 = {.y=3, .x=2};
    ponto p3;

    imprime_ponto(p1);
    imprime_ponto(p2);
    init_ponto(&p3);

    printf("\n");
    return 0;
}