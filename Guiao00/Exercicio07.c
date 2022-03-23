#include <stdio.h>
#include <math.h>

float desvio_padrao(int tab[], int tam) {
    float media = 0;
    float somatorio = 0;
    float soma = 0;

    for(int i = 0; i < tam; i++){ // Cálculo da média
        soma+=tab[i];
    }

    media=soma/tam;

    for(int j = 0; j < tam; j++) {
        somatorio += pow((media-tab[j]), 2); // Calculo do Somatório
    }

    return(sqrt((1/tam)*somatorio)); // Equação final
}


int main(){
    int tam;
    
    do{
        printf("Insira o tamanho da tabela (menos de 10 elementos): ");
        scanf("%i", &tam);
    }while(tam>=10);

    int tab[tam];

    for(int i=0; i<tam;i++){
        printf("Insira o %i elemento: ", (i+1));
        scanf("%i",&tab[i]);
    }

    printf("O desvio padrao sera de %.1f",desvio_padrao(tab,tam));

    printf("\n");
    return 0;
}