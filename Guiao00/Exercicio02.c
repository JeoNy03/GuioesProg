#include <stdio.h>

int encontrarMaior(int t[], int tam){
    int posMax;
    int max = t[0];
    for(int i=1; i<tam; i++){
        if(t[i]>max){
            if (max!=t[i]){
                    max=t[i];
                    posMax=i;
                }
        }
    }

    return posMax;
}

int main(){
    int tam;
    printf("Insira o tamanho da tabela: ");
    scanf("%i", &tam);

    int t[tam];

    for(int i=0; i<tam;i++){
        printf("Insira o %i elemento: ", (i+1));
        scanf("%i",&t[i]);
        printf("\n");
    }

    for(int i = 0; i<tam;i++){
        printf("%i ", t[i]);
    }

    int posMax=encontrarMaior(t,tam);
    printf("\nPrimeira posicao do maior inteiro: %i", posMax);

    printf("\n");
    return 0;
}