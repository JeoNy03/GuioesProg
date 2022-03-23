#include <stdio.h>

#define COL 3

void imprime_matriz(int matriz[][COL],int n_linhas){
    for(int i=0;i<n_linhas;i++){
        for(int j=0;j<COL;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n_linhas;

    printf("Insira o numero de linhas: ");
    scanf("%i", &n_linhas);

    int tab[n_linhas][COL];


    imprime_matriz(tab,n_linhas);


    printf("\n");
    return 0;
}