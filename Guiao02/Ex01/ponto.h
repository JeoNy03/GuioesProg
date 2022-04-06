#ifndef PONTO_H // Para não dar erro a compilar se fizer include mais de 1x
#define PONTO_H
#include <stdio.h>

typedef struct ponto ponto; // para não ter que escrever "struct ponto" e passar apenas a "ponto"

struct ponto{
    int x,y;
};

void imprime_ponto(struct ponto p);

void int_ponto(ponto *p);


#endif /* PONTO_H */


