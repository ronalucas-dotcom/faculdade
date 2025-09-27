#include <stdio.h>

int main(){
    int i,x,y,z,temp;
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
        if (i%4==0){
            z = i * i;
            printf("%d ",z);
        }
    }
    
    return 0;
}