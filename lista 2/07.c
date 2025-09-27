#include <stdio.h>

int main(){
    float x,y;
    puts("digite o dividendo");
    scanf("%f",&x);
    puts("digite o divisor");
    scanf("%f",&y);
    if (y==0){
        while (y==0)
        {
        puts("não é possivel dividir por zero, digite outro numero");
        scanf("%f",&y);
        }

    }
    printf("o valor é %.1f",x/y);

    return 0;
}