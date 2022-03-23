#include <stdio.h>

#define N 3

void imprime_matriz(int matriz[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int testa_magico(int tab[N][N]){
    int i=0, j=0, somaD=0, somaL=0, somaC=0, flag=0, temp=0;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(i==j){
                somaD+= tab[i][j];  // Soma Diagonal
            }
        }
    }


    for(i=0;i<N;i++){
        somaL=0;
        for(j=0;j<N;j++){
            somaL+=tab[i][j];   // Soma Linha
        }
        if(somaD!=somaL){ // Comparacao com Soma Diagonal
            return 0;
            break;
        }
    }


    for(i=0;i<N;i++){
        somaC=0;
        for(j=0;j<N;j++){
            somaC+=tab[i][j];   // Soma Colunaa
        }
        if(somaD!=somaC){ // Comparacao com Soma Diagonal
            return 0;
            break;
        }
    }

    return 1;
}

int main(){
    int tab[N][N]={{2,7,6},{9,5,1},{4,3,8}};

    imprime_matriz(tab);
    printf("\n");

    if(testa_magico(tab)==1){
        printf("A matriz e um quadrado magico!");
    }
    else{
        printf("A matriz nao e um quadrado magico!");
    }

    printf("\n");
    return 0;
}