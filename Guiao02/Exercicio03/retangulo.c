#include <stdio.h>
#include "retangulo.h"

void printRetangulo(retangulo r) {
    printf("(%d,%d)\t(%d,%d)\n", r.canto.x, r.canto.y + r.altura, r.canto.x + r.largura, r.canto.y + r.altura);
    printf("(%d,%d)\t(%d,%d)\n", r.canto.x, r.canto.y, r.canto.x + r.largura, r.canto.y);
}

void initRetangulo(retangulo *r) {
    initPonto(&r->canto);
    printf("Insira a largura: ");
    scanf("%d", &r->largura);
    printf("Insira a altura: ");
    scanf("%d", &r->altura);
}

int area_retangulo(retangulo r) {
    return r.largura * r.altura;
}

int contem_ponto(retangulo r, ponto2D p) {
    return p.x > r.canto.x && p.x < r.canto.x + r.largura &&
           p.y > r.canto.y && p.y < r.canto.y + r.altura;
}

void desloca_retangulo(retangulo *r, int dx, int dy) {
    movePonto(&r->canto, dx, dy);
}

void adiciona (retangulo tabela[], int *n_elementos, int tam_max){
    if(*n_elementos>=tam_max){
        return;
    }

    retangulo r;
    initRetangulo(&r);
    tabela[*n_elementos]=r;
    (*n_elementos)++;
}

void imprime_todos(retangulo tabela[], int n_elementos){
    for(int i=0;i<n_elementos;i++){
        printRetangulo(tabela[i]);
    }
}
