#include <stdio.h>
#include <stdlib.h>

int main(){
    float x;
    puts("o valor em Celsius:");
    scanf("%f",&x);
    printf("o valor em Fahrenheit é: %.2f", (9 * x + 160) / 5);

    return 0;
}