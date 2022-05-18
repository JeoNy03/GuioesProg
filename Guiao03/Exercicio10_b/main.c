#include <stdio.h>

typedef struct cliente{
    char nome[200];
    char morada[200];
    int conta;
    int montante;
}cliente;

void imprime_clientes(char *nomeFicheiro){
    FILE *f;
    int n_bytes;
    int n_clientes;

    f = fopen(nomeFicheiro, "rb");
    if(f==NULL){
        printf("ERRO");
        return;
    }

    fseek(f,0,SEEK_END);
    n_bytes=ftell(f);

    printf("Tamanho: %d", n_bytes);

    n_clientes=(n_bytes)/sizeof(cliente);
    printf("Nº clientes: %d", n_clientes);

    fclose(f);
}

int main() {

    imprime_clientes("Ex10_clientes1.dat");
    printf("\n");
    return 0;
}
