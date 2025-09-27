#include <stdio.h>
#include <stdlib.h>

int main(){
    puts("quantidade de dias");
    int d;
    scanf("%d",&d);
    
    float b = d*50.25;
    float x = b * 0.10;

    if (d<=10){
        printf("recebe: %.2f", b - x);
    }
    else if (d<=20)
    {
        printf("recebe: %.2f", b + (b*0.20) - x);
    }
    else {
        printf("recebe: %.2f", b + (b*0.30) - x);
    }
    
    return 0;
}