#include <stdio.h>
#include <string.h>

void imprime_invertida(char str[]){
    for(int i=strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
}


int main(){

    return 0;
}