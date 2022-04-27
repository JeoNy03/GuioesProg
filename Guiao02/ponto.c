#include <stdio.h>
#include "ponto.h"

void imprime_ponto(ponto p){
    printf("(%d, %d)", p.x,p.y);
}

void init_ponto(ponto *p){
    printf("Insira as coordenadas(x y): ");
    scanf("%d %d", &(p->x), &(p->y)); // ou &((*p).x)
}
