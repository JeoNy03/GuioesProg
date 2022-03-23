#include <stdio.h>

int contaVezes(int t[], int tam){
    int maxVezes = 0;
    int contador;
    int numMax;

    for(int i=0;i<tam;i++){
        contador=1;
        for(int j=i+1;j<tam;j++){
            if(t[j]==t[i]){
                contador++;
                if(contador>maxVezes){
                    numMax=t[j];
                }
            }
        }
    }

    return numMax;
}

int main(){
    int tam;
    int maxVezes;

    printf("Insira o tamanho da tabela: ");
    scanf("%i", &tam);

    int t[tam];

    for(int i=0; i<tam;i++){
        printf("Insira o %i elemento: ", (i+1));
        scanf("%i",&t[i]);
        printf("\n");
    }

    maxVezes=contaVezes(t,tam);
    printf("O numero que aparece mais vezes e: %i",maxVezes);

    printf("\n");
    return 0;
}