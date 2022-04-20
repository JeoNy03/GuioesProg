//
// Created by Henrique Marques on 30/03/2022.
//

#ifndef GUIAO2_RETANGULO_H
#define GUIAO2_RETANGULO_H

#include "ponto.h"

typedef struct retangulo {
    ponto2D canto;
    int altura, largura;
}retangulo;

void printRetangulo(retangulo r);

void initRetangulo(retangulo * r);

int area_retangulo(retangulo r);

int contem_ponto(retangulo r, ponto2D p);

void desloca_retangulo(retangulo *r, int dx, int dy);

#endif //GUIAO2_RETANGULO_H
