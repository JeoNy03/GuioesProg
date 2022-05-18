#include <stdio.h>

typedef struct cliente{
    char nome[200];
    char morada[200];
    int conta;
    int montante;
}cliente;


void imprime_inverso(char *nomeFicheiro){
    FILE *f;
    int n_clientes;

    f = fopen(nomeFicheiro, "rb");
    if(f==NULL){
        printf("ERRO");
        return;
    }

    for(int i=ftell(f);i>0;i--){
        printf("%s",fseek(f,i,SEEK_END));
    }
        

    fclose(f);
}


int main(){

    imprime_inverso("Ex10_clientes1.dat");

    printf("\n");
    return 0;
}
