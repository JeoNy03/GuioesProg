#include <stdio.h>
#include "retangulo.h"
#include "ponto.h"

#define TAM 10

int main() {
    retangulo tabela[TAM];
    int n_elementos = 0;

    adiciona(tabela,&n_elementos,TAM);
    adiciona(tabela,&n_elementos,TAM);

    imprime_todos(tabela,n_elementos);


    return 0;
}
