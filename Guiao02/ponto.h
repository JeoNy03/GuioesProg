#ifndef PONTO_H
#define PONTO_H
#include <stdio.h>

typedef struct ponto ponto; // typedef nome_real alias

struct ponto{
    int x,y;
};

void imprime_ponto(struct ponto p);

void init_ponto(ponto *p);


#endif /* PONTO_H */


