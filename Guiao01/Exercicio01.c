#include <stdio.h>

int main(){

int a, b, total;
int *p = &a, *q = &b, *r = &total;

scanf("%d %d",&a,&b);

*r=*p+*q;

printf("a= %d \t b= %d \t total= %d\n", a, b, total);

printf("\n");
return 0;
}