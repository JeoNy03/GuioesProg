#include <stdio.h>

int encontrarValor(int t[], int tam, int val){
    int flag=0;
    int limInf=0, limSup=tam-1;

// Binary Search

    while(limInf<=limSup){
        int med = (limInf+limSup)/2;

        if(val==t[med]){
            return 1;
        }
        if(val>t[med]){
            limInf=med+1;
        }
        else{
            limSup=med-1;
        }
    } return 0;

}

int main(){
    int tam, val, flag;
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

    printf("Valor a testar: ");
    scanf("%i", &val);

    flag = encontrarValor(t,tam,val);
    printf("%i",flag);

    printf("\n");
    return 0;
}