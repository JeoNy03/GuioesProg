#include <string.h>
#include <stdio.h>

void comparar_strings(char str1[], char str2[], char str3[]){

    if (strcmp(str1,str2)==0){
        strcpy(str3,"Conteudo Igual");
    }
    else if (strlen(str1)==strlen(str2)){
        strcpy(str3,"Tamanho igual");
    }
    else{
        if(strlen(str1)>strlen(str2)){
            strcpy(str3,str2);
            strcat(str3,str1);
        }
        else{
            strcpy(str3,str1);
            strcat(str3,str2);
        }
    }
}

int main(){
    char str1[]="String1";
    char str2[]="String22";
    char str3[]="String333";

    comparar_strings(str1,str2,str3);
    puts(str3);

    printf("\n");
    return 0;
}