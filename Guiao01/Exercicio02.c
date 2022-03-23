#include <stdio.h>

void rotacao(float *a, float *b, float *c){
    float temp;

    temp = *b;
    *b=*a;
    *a=*c;
    *c=temp;

}

int main(){
    float a=1.23, b=2.34, c=3.45;

    printf("%f, %f, %f\n",a,b,c);
    rotacao(&a,&b,&c);
    printf("%f, %f, %f",a,b,c);

    printf("\n");
    return 0;
}