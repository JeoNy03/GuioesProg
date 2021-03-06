#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contacto{
    char nome[100];
    int num;
}contacto;


void inicializa_contacto(contacto *novo){
    printf("Insira o nome: ");
    scanf("%s",&novo->nome);

    printf("Insira o contacto: ");
    scanf("%i",&novo->num);
}

contacto* adiciona_contacto(contacto *agenda, int *n_contactos){
    contacto novo;

    contacto* aux;
    aux = realloc(agenda,sizeof(contacto)*((*n_contactos)+1));

    if (aux!=NULL){
        agenda=aux;
        inicializa_contacto(&novo);
        agenda[(*n_contactos+1)]=novo;
        (*n_contactos)++;

    }else if(aux==NULL){
        printf("Erro na realocacao de memoria no adiciona_contacto\n");
        return NULL;
    }

    return agenda;
}

void escrever_contactos(contacto* agenda, int n_contactos){
    for(int i=1;i<=(n_contactos);i++){
        printf("Nome: %s\nContacto: %d\n",(agenda[i].nome),(agenda[i].num));
    }
}

contacto* encontra_contacto(contacto *agenda, int n_contactos, char *procurar){
    for(int i=0;i<n_contactos;i++){
        if(strcmp(agenda[i].nome,procurar)==1){
            return &agenda[i];
        }
    }

    return NULL;
}

int indica_numero(contacto *agenda, int n_contactos, char *procurar){
    return (encontra_contacto(agenda,n_contactos,procurar)->num);
}

int main(){
    contacto *agenda = NULL;
    int n_contactos = 0;
    char procurar[100];

    agenda = adiciona_contacto(agenda, &n_contactos);

 /*   agenda = malloc(sizeof(contacto)*10); //alocação de memória para 10 * contacto

    if(agenda == NULL){
        printf("Erro na alocação de memória");
        return 1;
    }

    contacto *aux;
    aux = realloc(agenda,sizeof(contacto)*20); // não fazer agenda = realloc..., para não perder os contactos que já tínhamos
    if (agenda!=NULL){
        agenda=aux;
    }else{
        printf("Erro na realocação de memória");
        return 1;
    }
 */


    escrever_contactos(agenda, n_contactos);

    printf("Nome a procurar: ");
    scanf("%s", procurar);

    printf("Numero do contacto pedido: %d",indica_numero(agenda, n_contactos, procurar));


    printf("\n");
    return 0;
}