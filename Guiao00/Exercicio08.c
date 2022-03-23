#include <stdio.h>
#include <math.h>

#define COL 3
#define N 5

void imprime_matriz(int matriz[N][COL],int n_linhas){
    for(int i=0; i<N; i++) {
        for(int j=0;j<COL;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void preencher_matriz(int tab[N][COL], int n_linhas){
    for(int i=0;i<N;i++){
        for(int j = 0; j<COL; j++){
            tab[i][j]=pow(tab[i][0],j+1);
        }
    }
}

int main(){
    int tab[N][COL];

    for(int i = 0;i < N; i++){
        printf("Introduza o primeiro numero da linha %i: ",i+1);
        scanf("%d", &(tab[i][0]));
        for(int j = 1;j < COL; j++){
            tab[i][j]=0;
        }
    }
    
    printf("Matriz original:\n");
    imprime_matriz(tab,N);

    printf("Matriz preenchida:\n");
    preencher_matriz(tab,N);
    imprime_matriz(tab,N);

    printf("\n");
    return 0;
}