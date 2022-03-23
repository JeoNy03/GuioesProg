#include <stdio.h>

#define TAM 5

void f(int *t, int tam, int *np, int *ni, int *maior, int *pos){
    *np=*ni=0; // Valor inicial correto
    *maior=*t; // *t é um ponteiro que aponta para o primeiro elemento do array t

    for(int i=0;i<tam;i++){
        if(*(t+i)%2==0){ // *(t+i) == t[i]
            (*np)++; // Primeiro ir buscar o valor para que np aponta e depois incrementar esse valor
        }
        else{
            (*ni)++; // Primeiro ir buscar o valor para que ni aponta e depois incrementar esse valor
        }

        if(*(t+i)>*maior){
            *maior = *(t+i);
            *pos = i;
        }
    }
}


int main(){
    int array[TAM]={1,3,7,5,2};
    int np,ni,maior,pos;

    f(array,TAM,&np,&ni,&maior,&pos);

    printf("%d %d %d %d", np, ni, maior, pos);

    printf("\n");
    return 0;
}