
#include <stdio.h>
#include "ponto.h"

// alinea b)
void printPonto(ponto2D a){
    printf("Ponto: (%d,%d)\n", a.x, a.y);
}

// alinea c)
void initPonto(ponto2D* p){
    printf("Insira o valor de x: ");
    scanf("%d", &p->x);
    printf("Insira o valor de y: ");
    scanf("%d", &p->y);
}

// alinea d)
void movePonto(ponto2D* p, int dx, int dy){
    p->x += dx;
    p->y += dy;
}

//alinea e)
int verifica_recta(ponto2D r, ponto2D s, ponto2D t) {
    //y = mx + b

    float declive_rs = ((float)s.y - (float)r.y)/((float)s.x - (float)r.x);
    float declive_rt = ((float)t.y - (float)r.y)/((float)t.x - (float)r.x);
    float declive_st = ((float)t.y - (float)s.y)/((float)t.x - (float)s.x);

    return declive_rs == declive_rt && declive_rs == declive_st;
}