#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,d,delta;
    
    puts("x do primeito ponto");
    scanf("%f",&a);
    puts("y do primeito ponto");
    scanf("%f",&b);
    puts("x do segundo ponto");
    scanf("%f",&c);
    puts("y do segundo ponto");
    scanf("%f",&d);
      delta = sqrt(pow(c - a, 2) + pow(d - b, 2));
     printf(" a distancia entre os dois pontos é %.1f", delta);


    return 0;
}