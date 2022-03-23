#include <stdio.h>
#include <string.h>

int verifica_capicua(char string[]){
    for(int i=0;i<strlen(string)-1;i++){
        if(string[i]!=string[strlen(string)-1-i]){
            return 0;
        }
    }

    return 1;
}

int main(){
    char string[]="57788775";

    printf("%i",verifica_capicua(string));

    printf("\n");
    return 0;
}