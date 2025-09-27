#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,t;
    puts("digite o valor de A");
    scanf("%d",&a);
    puts("digite o valor de b");
    scanf("%d",&b);
    t = a;
    a = b;
    b = t;
    printf("o valor de A é %d e o valor de B é %d", a,b);
    return 0;
}