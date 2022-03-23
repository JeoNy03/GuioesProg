#include <stdio.h>

void calculaSoma(int tab[], int dim, int valor){

    for(int i=0; i<dim-2; i++){
        for(int j = i+1; j<dim-1; j++){
            for(int k = j+1; k<dim; k++){
                if(tab[i]+tab[j]+tab[k]==valor){
                    printf("%i + %i + %i = %i\n", tab[i],tab[j],tab[k],valor);
                }
            }
        }
    }
}


int main(){
    int dim,valor;

    printf("Insira o tamanho da tabela: ");
    scanf("%i", &dim);

    int tab[dim];

    for(int i=0; i<dim;i++){
        printf("Insira o %i elemento: ", (i+1));
        scanf("%i",&tab[i]);
    }

    for(int i = 0; i<dim;i++){
        printf("%i ", tab[i]);
    }

    printf("\n");

    printf("Valor a testar: ");
    scanf("%i", &valor);

    calculaSoma(tab,dim,valor);

    printf("\n");
    return 0;
}