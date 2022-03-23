#include <stdio.h>

#define TAM 5

// NÃO TERMINADO

void procura_dupla(int *tab, int tam, int *prim, int *seg){
    *prim=*tab;

    for(int i=0;i<tam;i++){
        if(*(tab+i)>*prim){
            *prim=*(tab+i);
        }
    }

    

    for(int i=0;i<tam-1;i++){
        if(*(tab+i)>*seg){
            *seg=*(tab+i);
        }
    }
}


int main(){
    int tab[TAM]={1,7,5,6,8};
    int prim, seg;

    procura_dupla(tab,TAM,&prim,&seg);

    printf("%d %d", prim,seg);

    printf("\n");
    return 0;
}