#include <stdio.h>

void rotacao(float *a, float *b, float *c){
    float temp;

    temp = *b;
    *b=*a;
    *a=*c;
    *c=temp;

}

int main(){
    float a=1.00, b=2.00, c=3.00;

    printf("%.2f, %.2f, %.2f\n",a,b,c);
    rotacao(&a,&b,&c);
    printf("%.2f, %.2f, %.2f",a,b,c);

    printf("\n");
    return 0;
}