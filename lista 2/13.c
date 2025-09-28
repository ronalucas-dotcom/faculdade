#include <stdio.h>

int main(){
    int i,x,y,temp,som=0;
    puts("digite o intervalo");
    scanf("%d %d",&x,&y);
    if (y<x)
    {
        temp = x;
        x = y;
        y = temp;
    }
    
    for (i = x; i <= y; i++)
    {
        if (i%2==0){
            som += i;
        }
    }
    printf("%d ",som);
    return 0;
}