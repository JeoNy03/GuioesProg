#include <stdio.h>

typedef struct paragem{
    char nome[50];
    int minutos;
}paragem;

void lista_paragens(char *nomeFicheiro) {
    FILE *f;
    paragem p;

    f = fopen(nomeFicheiro, "rb");

    if (f == NULL) {
        printf("Erro ao abrir o ficheiro\n");
        return;
    }

    while (fread(&p, sizeof(paragem), 1, f) == 1) {
        printf("Paragem:%s\tMinutos:%d\n",p.nome, p.minutos);
    };

    fclose(f);
}

int main() {

    lista_paragens("cp_ex1.dat");

    printf("\n");
    return 0;
}
